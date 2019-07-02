#ifndef MASTER_CONFIG_H_
#define MASTER_CONFIG_H_

#include "custom_board.h"
#include "../pin_assign.h"

#define THIS_DEVICE_ROWS 5
#define THIS_DEVICE_COLS 8

#define MATRIX_ROW_PINS { C6,D7,E6,B4,B5 }
#define MATRIX_COL_PINS { F4,F5,F6,F7,B1,B3,B2,B6 }
#define IS_LEFT_HAND  true

#endif /* MASTER_CONFIG_H_ */
