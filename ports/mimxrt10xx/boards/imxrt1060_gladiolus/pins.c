#include "shared-bindings/board/__init__.h"

#include "supervisor/board.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    // LED Strips
    { MP_ROM_QSTR(MP_QSTR_LED1), MP_ROM_PTR(&pin_GPIO_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_LED2), MP_ROM_PTR(&pin_GPIO_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_LED3), MP_ROM_PTR(&pin_GPIO_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_LED4), MP_ROM_PTR(&pin_GPIO_SD_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_LEDSWITCH), MP_ROM_PTR(&pin_GPIO_EMC_16) },

    // IMX8 UART
    { MP_ROM_QSTR(MP_QSTR_IMX8UART_TX), MP_ROM_PTR(&pin_GPIO_EMC_38) },
    { MP_ROM_QSTR(MP_QSTR_IMX8UART_RX), MP_ROM_PTR(&pin_GPIO_EMC_39) },

    // USB
    #if CIRCUITPY_USB_HOST_INSTANCE == 0
    { MP_ROM_QSTR(MP_QSTR_USB_HOST_DP), MP_ROM_PTR(&pin_USB_OTG1_DP) },
    { MP_ROM_QSTR(MP_QSTR_USB_HOST_DM), MP_ROM_PTR(&pin_USB_OTG1_DN) },
    #elif CIRCUITPY_USB_HOST_INSTANCE == 1
    { MP_ROM_QSTR(MP_QSTR_USB_HOST_DP), MP_ROM_PTR(&pin_USB_OTG2_DP) },
    { MP_ROM_QSTR(MP_QSTR_USB_HOST_DM), MP_ROM_PTR(&pin_USB_OTG2_DN) },
    #endif

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
