/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
/*
#define MATRIX_COL_PINS {MPA6,MPA7,MPA8,MPA9,MPA10}//OUTPUT PIN
#define MATRIX_ROW_PINS {MPB7,MPB15,MPB14,MPB13,MPB12}//INPUT PIN
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW
*/	
#include QMK_KEYBOARD_H
#include "test_arm_project.h"
#include "keymap_jp.h"

//#define MATRIX_ROWS 5
//#define MATRIX_COLS 5
// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

enum Layer{
	DEFAULT=0,
	LOWER,
	RAISE,
	CURSOR
};


/*
 * template
 *
 * first 1line 5 key is most lefty macro column
 * 
  [DEFAULT]= LAYOUT_JIS(\
KC_1,KC_2,KC_3,KC_4,KC_5,\
KC_GRV,  KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,  KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,\
KC_TAB,  KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,  KC_LBRC, KC_RBRC,\
KC_ESC,  KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,   KC_QUOT, KC_BSLS,  KC_ENT,\
KC_LSFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,  KC_RO, KC_RSFT,\
KC_LCTL, KC_LGUI,KC_LALT, LT(LOWER,JP_MHEN), KC_SPC,  KC_ENT,  LT(RAISE,JP_HENK), LT(CURSOR,KC_GRAVE), KC_RALT, KC_APP, KC_RCTL\
),
 * */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFAULT]= LAYOUT_JIS(\
KC_1,KC_2,KC_3,KC_4,KC_5,\
KC_GRV,  KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,  KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,\
KC_TAB,  KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,  KC_LBRC, KC_RBRC,\
KC_ESC,  KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,   KC_QUOT, KC_BSLS,  KC_ENT,\
KC_LSFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,  KC_RO, KC_RSFT,\
KC_LCTL, KC_LGUI,KC_LALT, LT(LOWER,JP_MHEN), KC_SPC,  KC_ENT,  LT(RAISE,JP_HENK), LT(CURSOR,KC_GRAVE), KC_RALT, KC_APP, KC_RCTL\
),
	[LOWER]=LAYOUT_JIS(\
KC_1,KC_2,KC_3,KC_4,KC_5,\
KC_GRV,  KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,  KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,\
KC_TAB,  KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,  KC_LBRC, KC_RBRC,\
KC_CAPS,  KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,   KC_QUOT, KC_BSLS,  KC_ENT,\
KC_LSFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,  KC_RO, KC_RSFT,\
KC_LCTL, KC_LGUI,KC_LALT, JP_MHEN, KC_SPC,  KC_ENT,  JP_HENK, JP_KANA, KC_RALT, KC_APP, KC_RCTL\
),
	[RAISE]=LAYOUT_JIS(\
KC_1,KC_2,KC_3,KC_4,KC_5,\
KC_GRV,  KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,  KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,\
KC_TAB,  KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,  KC_LBRC, KC_RBRC,\
KC_ESC,  KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,   KC_QUOT, KC_BSLS,  KC_ENT,\
KC_LSFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,  KC_RO, KC_RSFT,\
KC_LCTL, KC_LGUI,KC_LALT, JP_MHEN, KC_SPC,  KC_ENT,  JP_HENK, JP_KANA, KC_RALT, KC_APP, KC_RCTL\
),
	[CURSOR]=LAYOUT_JIS(\
KC_1,KC_2,KC_3,KC_4,KC_5,\
KC_GRV,  KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,  KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,\
KC_TAB,  KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,  KC_LBRC, KC_RBRC,\
KC_ESC,  KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,   KC_QUOT, KC_BSLS,  KC_ENT,\
KC_LSFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,  KC_UP, KC_RSFT,\
KC_LCTL, KC_LGUI,KC_LALT, JP_MHEN, KC_SPC,  KC_ENT,  JP_HENK, JP_KANA, KC_LEFT, KC_DOWN, KC_RIGHT\
),



			 
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
case QMKBEST:
  if (record->event.pressed) {
// when keycode QMKBEST is pressed
SEND_STRING("QMK is the best thing ever!");
  } else {
// when keycode QMKBEST is released
  }
  break;
case QMKURL:
  if (record->event.pressed) {
// when keycode QMKURL is pressed
SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
  } else {
// when keycode QMKURL is released
  }
  break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
