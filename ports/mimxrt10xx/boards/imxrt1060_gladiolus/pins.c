#include "shared-bindings/board/__init__.h"

#include "supervisor/board.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    // Stove MOS Drivers
    { MP_ROM_QSTR(MP_QSTR_STOVE_LB_TUBE_LT), MP_ROM_PTR(&pin_GPIO_EMC_23)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LB_TUBE_LB), MP_ROM_PTR(&pin_GPIO_EMC_24)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LB_TUBE_RT), MP_ROM_PTR(&pin_GPIO_SD_B0_02)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LB_TUBE_RB), MP_ROM_PTR(&pin_GPIO_SD_B0_03)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LT_TUBE_LT), MP_ROM_PTR(&pin_GPIO_EMC_27)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LT_TUBE_LB), MP_ROM_PTR(&pin_GPIO_SD_B0_05)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LT_TUBE_RT), MP_ROM_PTR(&pin_GPIO_SD_B1_00)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_LT_TUBE_RB), MP_ROM_PTR(&pin_GPIO_SD_B1_01)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RB_TUBE_LT), MP_ROM_PTR(&pin_GPIO_EMC_06)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RB_TUBE_LB), MP_ROM_PTR(&pin_GPIO_EMC_07)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RB_TUBE_RT), MP_ROM_PTR(&pin_GPIO_EMC_08)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RB_TUBE_RB), MP_ROM_PTR(&pin_GPIO_EMC_09)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RT_TUBE_LT), MP_ROM_PTR(&pin_GPIO_SD_B1_02)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RT_TUBE_LB), MP_ROM_PTR(&pin_GPIO_SD_B1_03)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RT_TUBE_RT), MP_ROM_PTR(&pin_GPIO_EMC_31)},
    { MP_ROM_QSTR(MP_QSTR_STOVE_RT_TUBE_RB), MP_ROM_PTR(&pin_GPIO_EMC_32)},

    // LED Strips
    { MP_ROM_QSTR(MP_QSTR_LED1), MP_ROM_PTR(&pin_GPIO_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_LED2), MP_ROM_PTR(&pin_GPIO_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_LED3), MP_ROM_PTR(&pin_GPIO_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_LED4), MP_ROM_PTR(&pin_GPIO_SD_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_LEDSWITCH), MP_ROM_PTR(&pin_GPIO_EMC_16) },

    // Ethernet
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_MDIO), MP_ROM_PTR(&pin_GPIO_EMC_41) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_MDC), MP_ROM_PTR(&pin_GPIO_EMC_40) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RXD0), MP_ROM_PTR(&pin_GPIO_B1_04) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RXD1), MP_ROM_PTR(&pin_GPIO_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_CRS_DV), MP_ROM_PTR(&pin_GPIO_AD_B0_10) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_TXD0), MP_ROM_PTR(&pin_GPIO_EMC_22) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_TXD1), MP_ROM_PTR(&pin_GPIO_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_TXEN), MP_ROM_PTR(&pin_GPIO_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_INT), MP_ROM_PTR(&pin_GPIO_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RST), MP_ROM_PTR(&pin_GPIO_AD_B0_09) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_CLK), MP_ROM_PTR(&pin_GPIO_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RXER), MP_ROM_PTR(&pin_GPIO_B1_11) },

    // IMX8 UART
    { MP_ROM_QSTR(MP_QSTR_IMX8UART_TX), MP_ROM_PTR(&pin_GPIO_EMC_38) },
    { MP_ROM_QSTR(MP_QSTR_IMX8UART_RX), MP_ROM_PTR(&pin_GPIO_EMC_39) },

    // CAN
    { MP_ROM_QSTR(MP_QSTR_CAN_TX), MP_ROM_PTR(&pin_GPIO_EMC_36) },
    { MP_ROM_QSTR(MP_QSTR_CAN_RX), MP_ROM_PTR(&pin_GPIO_EMC_37) },
    { MP_ROM_QSTR(MP_QSTR_CAN_STBY), MP_ROM_PTR(&pin_GPIO_B0_03) },

    // Cooling FANs * 2
    { MP_ROM_QSTR(MP_QSTR_COOLING_FAN1), MP_ROM_PTR(&pin_GPIO_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_COOLING_FAN2), MP_ROM_PTR(&pin_GPIO_B1_07) },

    // Stove temperature sensor * 4
    { MP_ROM_QSTR(MP_QSTR_TEMP_STOVE_LB), MP_ROM_PTR(&pin_GPIO_AD_B1_12) },
    { MP_ROM_QSTR(MP_QSTR_TEMP_STOVE_LT), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_TEMP_STOVE_RB), MP_ROM_PTR(&pin_GPIO_AD_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_TEMP_STOVE_RT), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },

    // Thermal Couple Heater
    { MP_ROM_QSTR(MP_QSTR_THERMALCOUPLE_HEATER_LB), MP_ROM_PTR(&pin_GPIO_EMC_04) },
    { MP_ROM_QSTR(MP_QSTR_THERMALCOUPLE_HEATER_LT), MP_ROM_PTR(&pin_GPIO_EMC_17) },
    { MP_ROM_QSTR(MP_QSTR_THERMALCOUPLE_HEATER_RB), MP_ROM_PTR(&pin_GPIO_EMC_01) },
    { MP_ROM_QSTR(MP_QSTR_THERMALCOUPLE_HEATER_RT), MP_ROM_PTR(&pin_GPIO_EMC_05) },

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
