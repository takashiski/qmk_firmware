/* Copyright 2021 takashiski
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
#include "keycode.h"
#include <sendstring_jis.h>

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};


// enum custom_keycodes {
//     // PON = SAFE_RANGE,
//     // PON = USER00,
//     // PENLIGHT,
//     // DETAWANE,
//     // SIRO,
//     // MIKAN
// };

// Defines the keycodes used by our macros in process_record_user

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        KC_WH_D,KC_WH_U,KC_BSPC,KC_FN0,
        KC_FN1,KC_FN2,KC_FN3,KC_FN4,
        KC_ENT,KC_0,KC_BTN1,KC_BTN2,
        KC_BTN1,KC_VOLU,KC_VOLD
    ),
    [1] = LAYOUT(
        KC_WH_D,KC_WH_U,KC_3,KC_4,
        KC_5,KC_6,KC_7,KC_8,
        KC_9,KC_0,KC_BTN1,KC_BTN2,
        KC_BTN1,KC_VOLU,KC_VOLD
    ),
    [2] = LAYOUT(
        KC_WH_D,KC_WH_U,KC_3,KC_4,
        KC_5,KC_6,KC_7,KC_8,
        KC_9,KC_0,KC_BTN1,KC_BTN2,
        KC_BTN1,KC_VOLU,KC_VOLD
    ),
    [3] = LAYOUT(
        KC_WH_D,KC_WH_U,KC_3,KC_4,
        KC_5,KC_6,KC_7,KC_8,
        KC_9,KC_0,KC_BTN1,KC_BTN2,
        KC_BTN1,KC_VOLU,KC_VOLD
    )
};

// void send_custom_string(keyrecord_t *record, const char *chars){
//     if(record->event.pressed){
//         SEND_STRING(chars);
//     }
// };


bool process_record_user(uint16_t keycode, keyrecord_t *record){
    switch(keycode){
        case KC_FN0:
            if(record->event.pressed)
                SEND_STRING(":_pon:");
            break;
        case KC_FN1:
            if(record->event.pressed)
                SEND_STRING(":_penlight:");
            break;
        case KC_FN2:
            if(record->event.pressed)
                SEND_STRING(":_detawane:");
            break;
        case KC_FN3:
            if(record->event.pressed)
                SEND_STRING(":_siro:");
            break;
        case KC_FN4:
            if(record->event.pressed)
                SEND_STRING(":tangerine:");
            break;
    }
    return true;
};


