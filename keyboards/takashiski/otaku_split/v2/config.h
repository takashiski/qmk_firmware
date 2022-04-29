// Copyright 2022 takashiski (@takashiski)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 10
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5}
#define MATRIX_ROW_PINS_RIGHT {B5, B4, E6, D7, C6}
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, D3 }
#define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6, F5, F4}
#define SOFT_SERIAL_PIN D0
