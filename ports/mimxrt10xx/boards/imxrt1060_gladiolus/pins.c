#include "shared-bindings/board/__init__.h"

#include "supervisor/board.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_OBJ_NEW_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO_AD_B1_07) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO_AD_B1_07) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_GPIO_AD_B1_06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO_AD_B1_06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_GPIO_AD_B0_11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_GPIO_AD_B1_08) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_GPIO_AD_B0_09) }, // Connected to audio codec
    { MP_OBJ_NEW_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_GPIO_AD_B0_10) }, // Connected to audio codec
    { MP_OBJ_NEW_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO_AD_B1_02) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO_AD_B1_03) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO_AD_B0_03) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO_AD_B0_02) }, // Connected to audio codec
    { MP_OBJ_NEW_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_GPIO_SD_B0_01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_GPIO_SD_B0_02) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_GPIO_SD_B0_03) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_GPIO_SD_B0_00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_GPIO_AD_B1_01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO_AD_B1_01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_GPIO_AD_B1_00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO_AD_B1_00) },

    // i2c sensor is on I2C1_SCL/SDA

    { MP_OBJ_NEW_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO_AD_B1_04) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO_AD_B1_05) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO_AD_B1_01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO_AD_B1_00) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_USER_LED), MP_ROM_PTR(&pin_GPIO_AD_B0_08) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO_AD_B0_08) },

    // Camera Sensor Interface
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_VSYNC), MP_ROM_PTR(&pin_GPIO_AD_B1_06) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_PWDN), MP_ROM_PTR(&pin_GPIO_AD_B1_02) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_HSYNC), MP_ROM_PTR(&pin_GPIO_AD_B1_07) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D9), MP_ROM_PTR(&pin_GPIO_AD_B1_08) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_MCLK), MP_ROM_PTR(&pin_GPIO_AD_B1_05) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D8), MP_ROM_PTR(&pin_GPIO_AD_B1_09) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D7), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_PIXCLK), MP_ROM_PTR(&pin_GPIO_AD_B1_04) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D6), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D2), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D5), MP_ROM_PTR(&pin_GPIO_AD_B1_12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D3), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_CSI_D4), MP_ROM_PTR(&pin_GPIO_AD_B1_13) },

    // SD Card
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_CLK), MP_ROM_PTR(&pin_GPIO_SD_B0_01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_SW), MP_ROM_PTR(&pin_GPIO_B1_12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_CMD), MP_ROM_PTR(&pin_GPIO_SD_B0_00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_D0), MP_ROM_PTR(&pin_GPIO_SD_B0_02) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_D1), MP_ROM_PTR(&pin_GPIO_SD_B0_03) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_D2), MP_ROM_PTR(&pin_GPIO_SD_B0_04) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_D3), MP_ROM_PTR(&pin_GPIO_SD_B0_05) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SD_PWREN), MP_ROM_PTR(&pin_GPIO_AD_B1_03) },

    // LCD Interface
    { MP_ROM_QSTR(MP_QSTR_LCD_BACKLIGHT), MP_ROM_PTR(&pin_GPIO_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_LCD_RST), MP_ROM_PTR(&pin_GPIO_AD_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_LCD_ENABLE), MP_ROM_PTR(&pin_GPIO_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_LCD_VSYNC), MP_ROM_PTR(&pin_GPIO_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_LCD_HSYNC), MP_ROM_PTR(&pin_GPIO_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_LCD_CLK), MP_ROM_PTR(&pin_GPIO_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D0), MP_ROM_PTR(&pin_GPIO_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D1), MP_ROM_PTR(&pin_GPIO_B0_05) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D2), MP_ROM_PTR(&pin_GPIO_B0_06) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D3), MP_ROM_PTR(&pin_GPIO_B0_07) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D4), MP_ROM_PTR(&pin_GPIO_B0_08) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D5), MP_ROM_PTR(&pin_GPIO_B0_09) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D6), MP_ROM_PTR(&pin_GPIO_B0_10) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D7), MP_ROM_PTR(&pin_GPIO_B0_11) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D8), MP_ROM_PTR(&pin_GPIO_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D9), MP_ROM_PTR(&pin_GPIO_B0_13) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D10), MP_ROM_PTR(&pin_GPIO_B0_14) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D11), MP_ROM_PTR(&pin_GPIO_B0_15) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D12), MP_ROM_PTR(&pin_GPIO_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D13), MP_ROM_PTR(&pin_GPIO_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D14), MP_ROM_PTR(&pin_GPIO_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D15), MP_ROM_PTR(&pin_GPIO_B1_03) },

    // Touch Interface
    { MP_ROM_QSTR(MP_QSTR_LCD_TOUCH_INT), MP_ROM_PTR(&pin_GPIO_AD_B0_11) },

    // Audio Interface
    { MP_ROM_QSTR(MP_QSTR_AUDIO_INT), MP_ROM_PTR(&pin_GPIO_AD_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_SYNC), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_BCLK), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_RXD), MP_ROM_PTR(&pin_GPIO_AD_B1_12) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_TXD), MP_ROM_PTR(&pin_GPIO_AD_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_MCLK), MP_ROM_PTR(&pin_GPIO_AD_B1_09) },

    // SPDIF
    { MP_ROM_QSTR(MP_QSTR_SPDIF_IN), MP_ROM_PTR(&pin_GPIO_AD_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_SPDIF_OUT), MP_ROM_PTR(&pin_GPIO_AD_B1_02) },

    // Ethernet
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_MDIO), MP_ROM_PTR(&pin_GPIO_EMC_41) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_MDC), MP_ROM_PTR(&pin_GPIO_EMC_40) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RXD0), MP_ROM_PTR(&pin_GPIO_B1_04) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RXD1), MP_ROM_PTR(&pin_GPIO_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_CRS_DV), MP_ROM_PTR(&pin_GPIO_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_TXD0), MP_ROM_PTR(&pin_GPIO_B1_07) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_TXD1), MP_ROM_PTR(&pin_GPIO_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_TXEN), MP_ROM_PTR(&pin_GPIO_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_INT), MP_ROM_PTR(&pin_GPIO_AD_B0_10) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RST), MP_ROM_PTR(&pin_GPIO_AD_B0_09) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_CLK), MP_ROM_PTR(&pin_GPIO_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_ETHERNET_RXER), MP_ROM_PTR(&pin_GPIO_B1_11) },

    // Freelink UART
    { MP_ROM_QSTR(MP_QSTR_FREELINK_TX), MP_ROM_PTR(&pin_GPIO_AD_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_FREELINK_RX), MP_ROM_PTR(&pin_GPIO_AD_B0_13) },

    // CAN
    { MP_ROM_QSTR(MP_QSTR_CAN_TX), MP_ROM_PTR(&pin_GPIO_AD_B0_14) },
    { MP_ROM_QSTR(MP_QSTR_CAN_RX), MP_ROM_PTR(&pin_GPIO_AD_B0_15) },
    { MP_ROM_QSTR(MP_QSTR_CAN_STBY), MP_ROM_PTR(&pin_GPIO_AD_B0_05) },

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
