// Copyright 2022 GEIST @geigeigeist
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0  // USART TX pin
#define SERIAL_USART_RX_PIN GP1  // USART RX pin
#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
#define EE_HANDS                 // Split handedness via eeprom

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/**
 * The way how "handedness" is decided (which half is which),
 * see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
 * for more options.
 */
#define MASTER_LEFT

// Hold-Tap
#define TAPPING_TERM 200

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
