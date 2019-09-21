/* Copyright 2019 takashiski
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

#define ENC_CLWS KC_WH_U
#define ENC_COWS KC_WH_D

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { QMKBEST = SAFE_RANGE, QMKURL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(/* Base */
        KC_1,KC_2,KC_3,KC_4,
        KC_Q,KC_W,KC_E,KC_R,
        KC_A,KC_S,KC_D,KC_F,
        KC_Z,KC_X,KC_C,KC_V,
        LALT(KC_PSCR),KC_WH_L,KC_WH_R,
        KC_MS_BTN1
    )
};

void encoder_update_user(uint8_t index,bool clockwise)
{
    if(index==0)
    {
        if(clockwise)
            tap_code(ENC_CLWS);
        else
            tap_code(ENC_COWS);
    }

}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    }
    return true;
}
#ifdef OLED_DRIVER_ENABLE

void oled_task_user(void)
{
    oled_write_P(PSTR("Layer: "),false);

}

#endif

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

void led_set_user(uint8_t usb_led) {}
