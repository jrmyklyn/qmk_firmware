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
#define SN32_RGB_MATRIX_ROW_PINS {D4, C3, C1, C4, C6, C5, C7, C9, C8, C10, C12, C11, C13, B13, C14, D3, B14, B15}
