# MCU name
MCU = STM32F411

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

# Build Options
#   change yes to no to disable
#
KEYBOARD_SHARED_EP       = yes

# spplit settings
SERIAL_DRIVER = bitbang

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
