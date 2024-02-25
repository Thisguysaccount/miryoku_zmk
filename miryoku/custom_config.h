// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

# Enables a combination of settings that are planned to be default in future versions of ZMK to improve connection stability.
# This includes changes to timing on BLE pairing initation, restores use of the updated/new LLCP implementation, and disables 2M PHY support.
CONFIG_ZMK_BLE_EXPERIMENTAL_CONN=y

# Enable deep sleep support
CONFIG_ZMK_SLEEP=y

# Milliseconds of inactivity before entering deep sleep
CONFIG_ZMK_IDLE_SLEEP_TIMEOUT=360000

# The name of the keyboard (max 16 characters)
CONFIG_ZMK_KEYBOARD_NAME="Corne view"