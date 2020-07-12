/* Copyright 2019
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

#pragma once

#include "config_common.h"

#define MATRIX_ROW_PINS          { B12, B13, B14, B15, A8 , A9, A10}
#define MATRIX_COL_PINS          { B1, B0, A7, A6, A5, A4}

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 7
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

// in col2row col is input, and row is output
// #define SPLIT_HAND_MATRIX_GRID A10, A4
#define SPLIT_HAND_PIN B10

/* connection */
#define SOFT_SERIAL_PIN           B6
#define SELECT_SOFT_SERIAL_SPEED  2

/* pherip settings */
#define SERIAL_USART_DRIVER       SD1  // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE  7    // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
