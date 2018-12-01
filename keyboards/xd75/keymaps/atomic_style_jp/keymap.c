/* Copyright 2017 Benjamin Kesselring
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
#include "xd75.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___T___ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _DUM 0
#define _QW 2
#define _EU 1
#define _RS 4
#define _LW 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY - MIT ENHANCED / GRID COMPATIBLE
 * .---------------------------------------------------------------------------------------------------------------------- 2u ------------.
 * | `      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | XXXXXX . BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \      | DEL    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+- 2u ------------+--------|
 * | ESC    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | XXXXXX . ENTER  | PG UP  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+- 2u ---------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | XXXXXX . RSHIFT | UP     | PG DN  |
 * |--------+--------+--------+--------+--------+- 2u ------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | BRITE  | LCTRL  | LALT   | LGUI   | RAISE  | XXXXXX . SPACE  | LOWER  | RGUI   | RALT   | RCTRL  | FN     | LEFT   | DOWN   | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
	
	
 [_DUM] = { /* QWERTY */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_JYEN,  KC_BSPC  },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT, KC_DEL   },
  { KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,  KC_ENT,  KC_ENT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RO,   KC_LSFT, KC_UP,   KC_RSFT  },
  { KC_LCTL, KC_LGUI, KC_LALT, KC_MHEN, LT(_LW,KC_TAB), KC_SPC,  KC_ENT,  LT(_RS,KC_BSPC), KC_HENK, KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  },
 },
 [_QW] = { /* QWERTY */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_JYEN,  KC_BSPC  },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT, KC_DEL   },
  { KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,  KC_ENT,  KC_ENT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RO,   KC_LSFT, KC_UP,   KC_RSFT  },
  { KC_LCTL, KC_LGUI, KC_LALT, KC_MHEN, LT(_LW,KC_TAB), KC_SPC,  KC_ENT,  LT(_RS,KC_BSPC), KC_HENK, KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  },
 },




 [_EU] = { /* EUCALYN */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_JYEN,  KC_BSPC  },
  { KC_TAB,  KC_SLSH, KC_COMM, KC_DOT,  KC_F,    KC_Q,    KC_M,    KC_R,    KC_D,    KC_Y,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT, KC_DEL   },
  { KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_G,    KC_T,    KC_K,    KC_S,    KC_N,    KC_QUOT, KC_BSLS,  KC_ENT,  KC_ENT},
  { KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_W,    KC_B,    KC_H,    KC_J,    KC_L,    KC_SCLN, KC_RO, KC_UP,   KC_RSFT  },
  { KC_LCTL, KC_LGUI, KC_LALT, MO(_LW), KC_MHEN, KC_SPC,  KC_SPC,  KC_HENK, MO(_RS), KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  },
 },

/* RAISED
 * .---------------------------------------------------------------------------------------------------------------------- 2u ------------.
 * |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | XXXXXX .        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      |        |        |        | INS    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+- 2u ------------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     | F6     | -      | =      | [      | ]      | \      | XXXXXX .        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+- 2u ---------------------+--------|
 * |        | F7     | F8     | F9     | F10    | F11    | F12    |        |        |        |        | XXXXXX .        |        |        |
 * |--------+--------+--------+--------+--------+- 2u ------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        | XXXXXX .        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_LW] = { /* RAISED */
  { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___T___, KC_PSCR  },
  { _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, _______, KC_INS   },
  { KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, ___T___, ___T___, _______  },
  { KC_LSFT, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, ___T___, ___T___, KC_PGUP, KC_SLCK  },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END  },
 },
 
/* LOWER
 * .---------------------------------------------------------------------------------------------------------------------- 2u ------------.
 * | NUM LK | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | XXXXXX .        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | SCR LK | F13    | F14    | F15    | F16    | F17    | F18    | F19    | F20    | F21    | F22    | F23    | F24    | PAUSE  | PR SCR |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+- 2u ------------+--------|
 * | CAP LK | MS BT5 | MS BT4 | MS BT3 | MS BT2 | SLOW M | FAST M | NEXT   | VOL+   | VOL-   | PLAY   |        | XXXXXX .        | WHEEL+ |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+- 2u ---------------------+--------|
 * | RGB TG | RGB MD | RGB HI | RGB HD | RGB SI | RGB SD | RGB VI | RGB VD | BL TOG | BL INC | BL DEC | XXXXXX .        | MOUS U | WHEEL- |
 * |--------+--------+--------+--------+--------+-- 2u -----------+--------+--------+--------+--------+-----------------+--------+--------|
 * | RESET  |        | QWERTY | COLEMK | DVORAK | XXXXXX . MS BT1 |        |        |        |        |        | MOUS L | MOUS D | MOUS R |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_RS] = { // FUNCTION 
  { KC_NLCK, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___T___, ___T___  },
  { KC_SLCK, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_PAUS, KC_PSCR  },
  { KC_CAPS, KC_BTN5, KC_BTN4, KC_BTN3, KC_BTN2, KC_ACL0, KC_ACL2, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY, _______, ___T___, ___T___, KC_WH_U  },
  { RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, BL_TOGG, BL_INC,  BL_DEC,   ___T___, ___T___, KC_MS_U, KC_WH_D  },
  { RESET  , _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R  },
 },
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
