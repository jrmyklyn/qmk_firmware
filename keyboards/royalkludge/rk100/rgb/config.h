// Copyright 2023 jrmyklyn (@jrmyklyn)
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

#define RGB_MATRIX_LED_COUNT 102
#define SN32_RGB_MATRIX_ROW_PINS {D4, C1, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, B13, D3, B15, B14}

#define MATRIX_UNSELECT_DRIVE_HIGH
