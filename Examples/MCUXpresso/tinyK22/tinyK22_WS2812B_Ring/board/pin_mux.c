/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: MK22FN512xxx12
package_id: MK22FN512VLH12
mcu_data: ksdk2_0
processor_version: 7.0.1
pin_labels:
- {pin_num: '45', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/I2S0_TX_FS/LPUART0_CTS_b, label: LED_BLUE, identifier: LED_BLUE}
- {pin_num: '57', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b/LPUART0_RTS_b, label: LANE0, identifier: DMA0;LANE0}
- {pin_num: '58', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b/LPUART0_CTS_b, label: LANE1, identifier: DMA1;LANE1}
- {pin_num: '59', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/LPUART0_RX/I2C0_SCL, label: LANEq, identifier: LANE2}
- {pin_num: '64', pin_signal: PTD7/UART0_TX/FTM0_CH7/FTM0_FLT1/SPI1_SIN, label: LANE7, identifier: LANE7}
- {pin_num: '63', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, label: LANE6, identifier: LANE6}
- {pin_num: '62', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/FTM0_CH5/FB_AD1/EWM_OUT_b/SPI1_SCK, label: LANE5, identifier: LANE5}
- {pin_num: '61', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/EWM_IN/SPI1_PCS0, label: LANE4, identifier: LANE5;LANE4}
- {pin_num: '60', pin_signal: PTD3/SPI0_SIN/UART2_TX/FTM3_CH3/FB_AD3/LPUART0_TX/I2C0_SDA, label: LANE3, identifier: LANE3}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '45', peripheral: GPIOC, signal: 'GPIO, 2', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/I2S0_TX_FS/LPUART0_CTS_b, direction: OUTPUT,
    gpio_init_state: 'true'}
  - {pin_num: '57', peripheral: GPIOD, signal: 'GPIO, 0', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b/LPUART0_RTS_b, identifier: LANE0,
    direction: OUTPUT}
  - {pin_num: '58', peripheral: GPIOD, signal: 'GPIO, 1', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b/LPUART0_CTS_b, identifier: LANE1, direction: OUTPUT}
  - {pin_num: '59', peripheral: GPIOD, signal: 'GPIO, 2', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/LPUART0_RX/I2C0_SCL, direction: OUTPUT}
  - {pin_num: '60', peripheral: GPIOD, signal: 'GPIO, 3', pin_signal: PTD3/SPI0_SIN/UART2_TX/FTM3_CH3/FB_AD3/LPUART0_TX/I2C0_SDA, direction: OUTPUT}
  - {pin_num: '61', peripheral: GPIOD, signal: 'GPIO, 4', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/EWM_IN/SPI1_PCS0, identifier: LANE4, direction: OUTPUT}
  - {pin_num: '62', peripheral: GPIOD, signal: 'GPIO, 5', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/FTM0_CH5/FB_AD1/EWM_OUT_b/SPI1_SCK, direction: OUTPUT}
  - {pin_num: '63', peripheral: GPIOD, signal: 'GPIO, 6', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, direction: OUTPUT}
  - {pin_num: '64', peripheral: GPIOD, signal: 'GPIO, 7', pin_signal: PTD7/UART0_TX/FTM0_CH7/FTM0_FLT1/SPI1_SIN, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);

    gpio_pin_config_t LED_BLUE_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTC2 (pin 45)  */
    GPIO_PinInit(BOARD_INITPINS_LED_BLUE_GPIO, BOARD_INITPINS_LED_BLUE_PIN, &LED_BLUE_config);

    gpio_pin_config_t LANE0_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD0 (pin 57)  */
    GPIO_PinInit(BOARD_INITPINS_LANE0_GPIO, BOARD_INITPINS_LANE0_PIN, &LANE0_config);

    gpio_pin_config_t LANE1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD1 (pin 58)  */
    GPIO_PinInit(BOARD_INITPINS_LANE1_GPIO, BOARD_INITPINS_LANE1_PIN, &LANE1_config);

    gpio_pin_config_t LANE2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD2 (pin 59)  */
    GPIO_PinInit(BOARD_INITPINS_LANE2_GPIO, BOARD_INITPINS_LANE2_PIN, &LANE2_config);

    gpio_pin_config_t LANE3_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD3 (pin 60)  */
    GPIO_PinInit(BOARD_INITPINS_LANE3_GPIO, BOARD_INITPINS_LANE3_PIN, &LANE3_config);

    gpio_pin_config_t LANE4_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD4 (pin 61)  */
    GPIO_PinInit(BOARD_INITPINS_LANE4_GPIO, BOARD_INITPINS_LANE4_PIN, &LANE4_config);

    gpio_pin_config_t LANE5_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD5 (pin 62)  */
    GPIO_PinInit(BOARD_INITPINS_LANE5_GPIO, BOARD_INITPINS_LANE5_PIN, &LANE5_config);

    gpio_pin_config_t LANE6_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD6 (pin 63)  */
    GPIO_PinInit(BOARD_INITPINS_LANE6_GPIO, BOARD_INITPINS_LANE6_PIN, &LANE6_config);

    gpio_pin_config_t LANE7_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD7 (pin 64)  */
    GPIO_PinInit(BOARD_INITPINS_LANE7_GPIO, BOARD_INITPINS_LANE7_PIN, &LANE7_config);

    /* PORTC2 (pin 45) is configured as PTC2 */
    PORT_SetPinMux(BOARD_INITPINS_LED_BLUE_PORT, BOARD_INITPINS_LED_BLUE_PIN, kPORT_MuxAsGpio);

    /* PORTD0 (pin 57) is configured as PTD0 */
    PORT_SetPinMux(BOARD_INITPINS_LANE0_PORT, BOARD_INITPINS_LANE0_PIN, kPORT_MuxAsGpio);

    /* PORTD1 (pin 58) is configured as PTD1 */
    PORT_SetPinMux(BOARD_INITPINS_LANE1_PORT, BOARD_INITPINS_LANE1_PIN, kPORT_MuxAsGpio);

    /* PORTD2 (pin 59) is configured as PTD2 */
    PORT_SetPinMux(BOARD_INITPINS_LANE2_PORT, BOARD_INITPINS_LANE2_PIN, kPORT_MuxAsGpio);

    /* PORTD3 (pin 60) is configured as PTD3 */
    PORT_SetPinMux(BOARD_INITPINS_LANE3_PORT, BOARD_INITPINS_LANE3_PIN, kPORT_MuxAsGpio);

    /* PORTD4 (pin 61) is configured as PTD4 */
    PORT_SetPinMux(BOARD_INITPINS_LANE4_PORT, BOARD_INITPINS_LANE4_PIN, kPORT_MuxAsGpio);

    /* PORTD5 (pin 62) is configured as PTD5 */
    PORT_SetPinMux(BOARD_INITPINS_LANE5_PORT, BOARD_INITPINS_LANE5_PIN, kPORT_MuxAsGpio);

    /* PORTD6 (pin 63) is configured as PTD6 */
    PORT_SetPinMux(BOARD_INITPINS_LANE6_PORT, BOARD_INITPINS_LANE6_PIN, kPORT_MuxAsGpio);

    /* PORTD7 (pin 64) is configured as PTD7 */
    PORT_SetPinMux(BOARD_INITPINS_LANE7_PORT, BOARD_INITPINS_LANE7_PIN, kPORT_MuxAsGpio);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
