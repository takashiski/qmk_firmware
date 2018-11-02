/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#include "jis.h"
//#include "config.h"
#include "print.h"

#define DEFAULT_LAYER 0
#define DEBUG_LAYER 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]={

	{
		{KC_1,    KC_2,    KC_3,    KC_4,    KC_5},
		{KC_6,    KC_7,    KC_8,    KC_9,    KC_0},
		{KC_Q,    KC_W,    KC_E,    KC_R,    KC_T},
		{KC_Y,    KC_U,    KC_I,    KC_O,    KC_P},
		{KC_A,    KC_S,    KC_D,    KC_F,    KC_G}
	}
};


void matrix_init_user(void)
{
//	debug_enable=true;
}
void matrix_scan_user(void)
{
//	matrix_print();
}

