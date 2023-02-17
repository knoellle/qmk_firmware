// Copyright 2023 knoellle (@knoellle)
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

#define SOFT_SERIAL_PIN D2

#define SPLIT_USB_DETECT
#define MASTER_RIGHT
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
