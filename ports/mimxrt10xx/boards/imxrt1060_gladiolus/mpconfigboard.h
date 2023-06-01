#define MICROPY_HW_BOARD_NAME "Gladiolus"
#define MICROPY_HW_MCU_NAME "IMXRT1062DVJ6A"

// If you change this, then make sure to update the linker scripts as well to
// make sure you don't overwrite code
#define CIRCUITPY_INTERNAL_NVM_SIZE 0

#define BOARD_FLASH_SIZE (8 * 1024 * 1024)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO_AD_B1_07)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO_AD_B1_06)

#define DEFAULT_UART_BUS_RX (&pin_GPIO_AD_B1_07)
#define DEFAULT_UART_BUS_TX (&pin_GPIO_AD_B1_06)

#define CIRCUITPY_CONSOLE_UART_TX (&pin_GPIO_EMC_13)
#define CIRCUITPY_CONSOLE_UART_RX (&pin_GPIO_B0_09)

// Put host on the first USB so that right angle OTG adapters can fit. This is
// the right port when looking at the board.
#define CIRCUITPY_USB_DEVICE_INSTANCE 0
#define CIRCUITPY_USB_HOST_INSTANCE 1
