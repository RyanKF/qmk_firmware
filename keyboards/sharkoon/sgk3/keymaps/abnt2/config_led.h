/*
Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>

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

#pragma once

// Backlight configuration
#define BACKLIGHT_LEVELS 8

#define LED_MATRIX_ROWS 6
#define LED_MATRIX_ROW_CHANNELS 3
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS { C0, C3, C1, C4, C15, C14, C5, C7, C6, C8, C10, C9, D0, B6, D1, B7, D3, D2 }

#define LED_MATRIX_COLS 21
#define LED_MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6, A7, A14, A15, B0, B1, B2, B3, B4, B10, B11, B12, B13, B14, B15 }

#define DRIVER_LED_TOTAL 107

#define LED_NUM_LOCK_PIN D5
#define LED_CAPS_LOCK_PIN D6
#define LED_SCROLL_LOCK_PIN D7
#define LED_PIN_ON_STATE 0
