#ifndef __MY_BOARD_H
#define __MY_BOARD_H
#include "stm32f10x.h"
#include <stdio.h>
#include "./usart/debug_usart.h"
//#include "./IIC/myiic.h"
#include "./Delay/delay.h"
#include  "./qs808/qs808_drive.h"
#include  "./power/power_ctrl.h"
#include "./TSM12/keyboard.h"
#include "./rtc/rtc.h"
#include "./data/data_def.h"
#include "stm32f10x_gpio.h"
#include "./RC522/rc522_config.h"
#include "./RC522/rc522_function.h"
#include "./TIMER/timer.h"	
#include "./RC522/rc522_function.h"
#include "./RC522/rc522_config.h"
#include "stm32f10x_adc.h"
#include "stm32f10x_rcc.h"
#include "./led/led.h"
#include "./locklock/gatelock.h"
#include "./STMFLASH/stmflash.h"
#include "./mydebug/mydebug.h"
#include "./vcc_adc/vcc_adc.h"
#include "./UT588C/ut588c.h"
#include "./TSM12/TSM12.h"
#include "./BLE/BLE.h"

#endif
