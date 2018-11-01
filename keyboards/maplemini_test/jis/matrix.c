/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#undef BOARD_GENERIC_STM32_F103
#define BOARD_MAPLEMINI_STM32_F103
#include "ch.h"
#include "hal.h"

/*
 * scan matrix
 */
#include "print.h"
#include "debug.h"
#include "util.h"
#include "matrix.h"
#include "wait.h"

#ifndef DEBOUNCE
#   define DEBOUNCE 5
#endif
static uint8_t debouncing = DEBOUNCE;

const ioportid_t col_ports[MATRIX_COLS]={GPIOB,GPIOB,GPIOB,GPIOB,GPIOA,GPIOA,GPIOA,GPIOA,GPIOA,GPIOA,GPIOA,GPIOA,GPIOC,GPIOC,GPIOC};
const uint8_t col_pads[MATRIX_COLS]={11,10,2,0,7,6,5,4,3,2,1,0,15,14,13};
const ioportid_t row_ports[MATRIX_ROWS]={GPIOB,GPIOB,GPIOB,GPIOA,GPIOA};
const uint8_t row_pads[MATRIX_ROWS]={5,4,3,15,14};
/* matrix state(1:on, 0:off) */
static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];


//for COL2ROW
static matrix_row_t read_cols(void);
static void init_cols(void);
static void unselect_rows(void);
static void select_row(uint8_t num);
//for ROW2COL
static matrix_row_t read_rows(void);
static void init_rows(void);
static void unselect_cols(void);
static void select_col(uint8_t num);


inline
uint8_t matrix_rows(void)
{
    return MATRIX_ROWS;
}

inline
uint8_t matrix_cols(void)
{
    return MATRIX_COLS;
}

/* generic STM32F103C8T6 board */
#ifdef BOARD_GENERIC_STM32_F103
#define LED_ON()    do { palClearPad(GPIOC, GPIOC_LED) ;} while (0)
#define LED_OFF()   do { palSetPad(GPIOC, GPIOC_LED); } while (0)
#define LED_TGL()   do { palTogglePad(GPIOC, GPIOC_LED); } while (0)
#endif

/* Maple Mini */
#ifdef BOARD_MAPLEMINI_STM32_F103
#define LED_ON()    do { palSetPad(GPIOB, 1) ;} while (0)
#define LED_OFF()   do { palClearPad(GPIOB, 1); } while (0)
#define LED_TGL()   do { palTogglePad(GPIOB, 1); } while (0)
#endif

void matrix_init(void)
{
    // initialize row and col
#if (DIODE_DIRECTION==COL2ROW)
    unselect_rows();
    init_cols();
#elif(DIODE_DIRECTION==ROW2COL
		unselect_cols();
		init_rows();
#endif

    // initialize matrix state: all keys off
    for (uint8_t i=0; i < MATRIX_ROWS; i++) {
        matrix[i] = 0;
        matrix_debouncing[i] = 0;
    }

    //debug
    debug_matrix = true;
    LED_ON();
    wait_ms(500);
    LED_OFF();
}

uint8_t matrix_scan(void)
{
#if(DIODE_DIRECTION==COL2ROW)
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        select_row(i);
        wait_us(30);  // without this wait read unstable value.
        matrix_row_t cols = read_cols();
        if (matrix_debouncing[i] != cols) {
            matrix_debouncing[i] = cols;
            if (debouncing) {
                debug("bounce!: "); debug_hex(debouncing); debug("\n");
            }
            debouncing = DEBOUNCE;
        }
        unselect_rows();
    }

    if (debouncing) {
        if (--debouncing) {
            wait_ms(1);
        } else {
            for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
                matrix[i] = matrix_debouncing[i];
            }
        }
    }

    return 1;
}

inline
bool matrix_is_on(uint8_t row, uint8_t col)
{
    return (matrix[row] & ((matrix_row_t)1<<col));
}

inline
matrix_row_t matrix_get_row(uint8_t row)
{
    return matrix[row];
}

void matrix_print(void)
{
    print("\nr/c 0123456789ABCDEF\n");
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        phex(row); print(": ");
        pbin_reverse16(matrix_get_row(row));
        print("\n");
    }
}

/* Column pin configuration
 */

/*
 * COL2ROW functions
 *
 *
 *
 */

static void  init_cols(void)
{
#ifdef BOARD_MAPLEMINI_STM32_F103
    // don't need pullup/down, since it's pulled down in hardware
		for(uint8_t i=0;i<MATRIX_COLS;i+=1)
		{
			palSetPadMode(col_ports[i], col_pads[i], PAL_MODE_INPUT);
		}
#else
    palSetPadMode(GPIOB, 8, PAL_MODE_INPUT_PULLDOWN);
#endif
}

/* Returns status of switches(1:on, 0:off) */
static matrix_row_t read_cols(void)
{
		uint8_t result=0;
		for(uint8_t i=0;i<MATRIX_COLS;i+=1)
		{
			result|=(palReadPad(col_ports[i],col_pads[i]))<<i;
		}
		return result;
    //return ((palReadPad(GPIOB, 8)==PAL_LOW) ? 0 : (1<<0));
    // | ((palReadPad(...)==PAL_HIGH) ? 0 : (1<<1))
}

/* Row pin configuration
 */
static void unselect_rows(void)
{
	for(uint8_t i=0;i<MATRIX_ROWS;i+=1)
		palSetPadMode(row_ports[i],row_pads[i],PAL_MODE_INPUT);
}

static void select_row(uint8_t num)
{
	palSetPad(row_ports[num],row_pads[num]);
//    (void)row;
    // Output low to select
    // switch (row) {
    //     case 0:
    //         palSetPadMode(GPIOA, GPIOA_PIN10, PAL_MODE_OUTPUT_PUSHPULL);
    //         palSetPad(GPIOA, GPIOA_PIN10, PAL_LOW);
    //         break;
    // }
}

/* ROW2COL functions
 *
 *
 *
 *
 */
static void init_rows(void)
{
	for(uint8_t i=0;o<MATRIX_ROWS;i+=1)
	{
#ifdef BOARD_MAPLEMINI_STM32_F103
		palSetPadMode(row_ports[i],row_pads[i],PAL_MODE_INPUT);
#else
		palSetPadMode(row_ports[i],row_pads[i],PAL_MODE_INPUT_PULLDOWN);
#endif
	}

}
static matrix_row_t read_rows(void)
{
	uint8_t result=0;
	for(uint8_t i=0;i<MATRIX_ROWS;i+=1)
	{
		result|=(palReadPad(row_ports[i],row_pads[i]))<<i;
	}
	return result;
}
static void unselect_cols(void)
{
	for(uint8_t i=0;i<MATRIX_COLS;i+=1)
	{
		palSetPadMode(col_ports[i],col_pads[i],PAL_MODE_INPUT);
	}
}
static void select_col(uint8_t num)
{
	palSetPad(col_ports[num],col_pads[num]);

}

