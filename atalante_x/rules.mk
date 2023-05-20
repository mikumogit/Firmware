# MCU name
MCU_FAMILY = NRF52
MCU_SERIES = NRF52840
MCU_LDSCRIPT = nrf52840_ao
MCU = cortex-m4

#CUSTOM_MATRIX = yes # This flag should be on for nrf52
CUSTOM_MATRIX = yes
SRC += matrix.c

# Build Options
#   change yes to no to disable
#
MOUSEKEY_ENABLE = yes       # Mouse keys
MOUSE_SHARED_EP = no		# Should be disabled for BLE Micro Pro
EXTRAKEY_ENABLE = yes       # Audio control and System control
ENCODER_ENABLE = yes
OLED_ENABLE = no
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
COMBO_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
