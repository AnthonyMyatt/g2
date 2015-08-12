/*
 * http://tinkerin.gs/
 *
 * Copyright (c) 2013 - 2015 Robert Giseburt
 * Copyright (c) 2013 - 2015 Alden S. Hart Jr.
 *
 * This file is part of the Motate Library.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software. If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef G2v9k_pinout_h
#define G2v9k_pinout_h

/* Pinouts for TinyG2 v9k board 
 *
 * 6 axes
 * 4 motors
 * 1 PWM channel
 */

#include <MotatePins.h>

namespace Motate {

    // v9_3x8c - The SAM3X8C is a 100-pin sister to the SAM3X8E that is on the Due
    // The SAM3X8C is missing port C and D.

    _MAKE_MOTATE_PORT32(A, 'A');
    _MAKE_MOTATE_PORT32(B, 'B');

    /*** Pins that are signals and are *not* fin-specific:

    * 0 - Serial RX0 (not on a fin)
    * 1 - Serial TX0 (not on a fin)

    * 2 - I2C SDA
    * 3 - I2C SCL

    * 4 - SPI SCK
    * 5 - SPI MISO
    * 6 - SPI MOSI

    * 7 - ~Sync

    * (8-9 reserved)

    ***/


    /*** Pins that *are* a kinen fin:

    * (Number ralative to 10*x)

    * (smart header)
    * +0 - Sx_SS
    * +1 - Sx_Interrupt

    * (dumb header)
    * +2 - Sx_Step        Sx_D0
    * +3 - Sx_Direction   Sx_D1
    * +4 - Sx_Enable      Sx_D2
    * +5 - Sx_MS0         Sx_D3
    * +6 - Sx_MS1         Sx_D4
    * +7 - Sx_MS2         Sx_D5
    * +8 - Sx_VREF        Sx_A0

    * (9 is reserved)

    ***/


    /*** Pins 100+ are board specific functions.
    * Second (+) SPI or I2C would be here.
    * Special non-kinen devices, LEDs, etc.
    **/


    // First we define Motate::Pin<> object templates,
    // then we define the pin_number aliases.


    // All-Fin pins

    // Pin 0 - Serial RX - missing!
    // Pin 1 - Serial TX - missing!

    _MAKE_MOTATE_PIN(4, A, 'A', 27);	// SPI0_SCKPinNumber
    _MAKE_MOTATE_PIN(5, A, 'A', 25);	// SPI0_MISOPinNumber
    _MAKE_MOTATE_PIN(6, A, 'A', 26);	// SPI0_MOSIPinNumber

    _MAKE_MOTATE_PIN(10, A, 'A', 28);	// Socket1_SPISlaveSelectPinNumber
    _MAKE_MOTATE_PIN(12, A, 'A', 23);	// Socket1_StepPinNumber
    _MAKE_MOTATE_PIN(13, A, 'A', 6);	// Socket1_DirPinNumber
    _MAKE_MOTATE_PIN(14, A, 'A', 22);	// Socket1_EnablePinNumber
    _MAKE_MOTATE_PIN(15, A, 'A', 24);	// Socket1_Microstep_0PinNumber
    _MAKE_MOTATE_PIN(16, A, 'A', 16);	// Socket1_Microstep_1PinNumber
    _MAKE_MOTATE_PIN(17, B, 'B', 16);	// Socket1_Microstep_2PinNumber
    _MAKE_MOTATE_PIN(18, B, 'B', 17);	// Socket1_VrefPinNumber

    _MAKE_MOTATE_PIN(20, B, 'B', 20);	// Socket2_SPISlaveSelectPinNumber
    _MAKE_MOTATE_PIN(22, B, 'B', 0);	// Socket2_StepPinNumber
    _MAKE_MOTATE_PIN(23, B, 'B', 2);	// Socket2_DirPinNumber
    _MAKE_MOTATE_PIN(24, B, 'B', 1);	// Socket2_EnablePinNumber
    _MAKE_MOTATE_PIN(25, A, 'A', 29);	// Socket2_Microstep_0PinNumber
    _MAKE_MOTATE_PIN(26, A, 'A', 21);	// Socket2_Microstep_1PinNumber
    _MAKE_MOTATE_PIN(27, A, 'A', 4);	// Socket2_Microstep_2PinNumber
    _MAKE_MOTATE_PIN(28, B, 'B', 18);	// Socket2_VrefPinNumber

    _MAKE_MOTATE_PIN(30, B, 'B', 21);	// Socket3_SPISlaveSelectPinNumber
    _MAKE_MOTATE_PIN(32, B, 'B', 6);	// Socket3_StepPinNumber
    _MAKE_MOTATE_PIN(33, B, 'B', 8);	// Socket3_DirPinNumber
    _MAKE_MOTATE_PIN(34, B, 'B', 7);	// Socket3_EnablePinNumber
    _MAKE_MOTATE_PIN(35, B, 'B', 5);	// Socket3_Microstep_0PinNumber
    _MAKE_MOTATE_PIN(36, B, 'B', 4);	// Socket3_Microstep_1PinNumber
    _MAKE_MOTATE_PIN(37, B, 'B', 3);	// Socket3_Microstep_2PinNumber
    _MAKE_MOTATE_PIN(38, B, 'B', 19);	// Socket3_VrefPinNumber

    _MAKE_MOTATE_PIN(40, B, 'B', 23);	// Socket4_SPISlaveSelectPinNumber
    _MAKE_MOTATE_PIN(42, B, 'B', 14);	// Socket4_StepPinNumber
    _MAKE_MOTATE_PIN(43, B, 'B', 24);	// Socket4_DirPinNumber
    _MAKE_MOTATE_PIN(44, B, 'B', 22);	// Socket4_EnablePinNumber
    _MAKE_MOTATE_PIN(45, B, 'B', 11);	// Socket4_Microstep_0PinNumber
    _MAKE_MOTATE_PIN(46, B, 'B', 10);	// Socket4_Microstep_1PinNumber
    _MAKE_MOTATE_PIN(47, B, 'B', 9);	// Socket4_Microstep_2PinNumber
    _MAKE_MOTATE_PIN(48, A, 'A', 2);	// Socket4_VrefPinNumber

    _MAKE_MOTATE_PIN(58, A, 'A', 3);	// Socket5_VrefPinNumber

    _MAKE_MOTATE_PIN(100, B, 'B', 26);	// XAxis_MinPinNumber
    _MAKE_MOTATE_PIN(101, A, 'A', 9);	// XAxis_MaxPinNumber
    _MAKE_MOTATE_PIN(102, A, 'A', 10);	// YAxis_MinPinNumber
    _MAKE_MOTATE_PIN(103, A, 'A', 11);	// YAxis_MaxPinNumber
    _MAKE_MOTATE_PIN(104, A, 'A', 12);	// ZAxis_MinPinNumber
    _MAKE_MOTATE_PIN(105, A, 'A', 13);	// ZAxis_MaxPinNumber
    _MAKE_MOTATE_PIN(106, A, 'A', 14);	// AAxis_MinPinNumber
    _MAKE_MOTATE_PIN(107, A, 'A', 15);	// AAxis_MaxPinNumber

    _MAKE_MOTATE_PIN(112, A, 'A', 5);	// Spindle_EnablePinNumber
    _MAKE_MOTATE_PIN(113, A, 'A', 7);	// Spindle_DirPinNumber
    _MAKE_MOTATE_PIN(114, A, 'A', 8);	// Spindle_PwmPinNumber
    _MAKE_MOTATE_PIN(116, A, 'A', 1);	// Coolant_EnablePinNumber

    _MAKE_MOTATE_PIN(117, A, 'A', 18);	// LED_USBRXPinNumber
    _MAKE_MOTATE_PIN(118, A, 'A', 19);	// LED_USBTXPinNumber

    _MAKE_MOTATE_PIN(119, B, 'B', 15);	// SD_CardDetect
    _MAKE_MOTATE_PIN(120, A, 'A', 17);	// Interlock_In

    //UNASSIGNED, and disconnected (but given numbers anyway):
    _MAKE_MOTATE_PIN(200, A, 'A', 0);	//
    _MAKE_MOTATE_PIN(201, B, 'B', 25);	//
    _MAKE_MOTATE_PIN(202, B, 'B', 13);	//
    _MAKE_MOTATE_PIN(203, B, 'B', 27);	//
    _MAKE_MOTATE_PIN(204, A, 'A', 20);	//
    _MAKE_MOTATE_PIN(205, B, 'B', 12);	//
    _MAKE_MOTATE_PIN(206, B, 'B', 28);	//
    _MAKE_MOTATE_PIN(207, B, 'B', 29);	//
    _MAKE_MOTATE_PIN(208, B, 'B', 30);	//
    _MAKE_MOTATE_PIN(209, B, 'B', 31);	//


    // PWM Pin assignments
    // Stupid preprocessor! Workaround for the comma in the TimerChannel name:
#define _MOTATE_TEMP_TC(t,c) Motate::TimerChannel<t,c>
    _MAKE_MOTATE_PWM_PIN('A',  0, Motate::PWMTimer<3>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A',  2, _MOTATE_TEMP_TC(1,0),            /*Peripheral:*/ A, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A',  3, _MOTATE_TEMP_TC(1,1),            /*Peripheral:*/ A, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A',  5, _MOTATE_TEMP_TC(2,0),            /*Peripheral:*/ A, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A',  6, _MOTATE_TEMP_TC(2,1),            /*Peripheral:*/ A, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A',  8, Motate::PWMTimer<0>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('A',  9, Motate::PWMTimer<3>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('A', 12, Motate::PWMTimer<1>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A', 13, Motate::PWMTimer<2>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('A', 19, Motate::PWMTimer<1>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('A', 20, Motate::PWMTimer<2>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('A', 21, Motate::PWMTimer<0>, /*Peripheral:*/ B, /*Inverted:*/ false);

    _MAKE_MOTATE_PWM_PIN('B', 12, Motate::PWMTimer<0>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('B', 13, Motate::PWMTimer<1>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('B', 14, Motate::PWMTimer<2>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('B', 15, Motate::PWMTimer<3>, /*Peripheral:*/ B, /*Inverted:*/ true); // INVERTED!
    _MAKE_MOTATE_PWM_PIN('B', 16, Motate::PWMTimer<0>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('B', 17, Motate::PWMTimer<1>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('B', 18, Motate::PWMTimer<2>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('B', 19, Motate::PWMTimer<3>, /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('B', 25, _MOTATE_TEMP_TC(0,0),            /*Peripheral:*/ B, /*Inverted:*/ false);
    _MAKE_MOTATE_PWM_PIN('B', 27, _MOTATE_TEMP_TC(0,1),            /*Peripheral:*/ B, /*Inverted:*/ false);
#undef _MOTATE_TEMP_TC//(t,c)


    // SPI Pin assignements
    _MAKE_MOTATE_SPI_CS_PIN('A', 28, /* Peripheral:*/ A, /* CS Index:*/ 0);
    _MAKE_MOTATE_SPI_CS_PIN('B', 20, /* Peripheral:*/ B, /* CS Index:*/ 1);
    _MAKE_MOTATE_SPI_CS_PIN('B', 21, /* Peripheral:*/ B, /* CS Index:*/ 2);
    _MAKE_MOTATE_SPI_CS_PIN('B', 23, /* Peripheral:*/ B, /* CS Index:*/ 3);

    _MAKE_MOTATE_SPI_MISO_PIN('A', 25, /* Peripheral */ A);
    _MAKE_MOTATE_SPI_MOSI_PIN('A', 26, /* Peripheral */ A);
    _MAKE_MOTATE_SPI_SCK_PIN('A', 27, /* Peripheral */ A);

    // ADC Pin assignments
    _MAKE_MOTATE_ADC_PIN('A',  2, /* ADC number:*/  0);
    _MAKE_MOTATE_ADC_PIN('A',  3, /* ADC number:*/  1);
    _MAKE_MOTATE_ADC_PIN('A',  4, /* ADC number:*/  2);
    _MAKE_MOTATE_ADC_PIN('A',  6, /* ADC number:*/  3);
    _MAKE_MOTATE_ADC_PIN('A', 16, /* ADC number:*/  7);
    _MAKE_MOTATE_ADC_PIN('A', 22, /* ADC number:*/  4);
    _MAKE_MOTATE_ADC_PIN('A', 23, /* ADC number:*/  5);
    _MAKE_MOTATE_ADC_PIN('A', 24, /* ADC number:*/  6);
    _MAKE_MOTATE_ADC_PIN('B', 12, /* ADC number:*/  8);
    _MAKE_MOTATE_ADC_PIN('B', 13, /* ADC number:*/  9);
    _MAKE_MOTATE_ADC_PIN('B', 17, /* ADC number:*/ 10);
    _MAKE_MOTATE_ADC_PIN('B', 18, /* ADC number:*/ 11);
    _MAKE_MOTATE_ADC_PIN('B', 19, /* ADC number:*/ 12);
    _MAKE_MOTATE_ADC_PIN('B', 20, /* ADC number:*/ 13);
    _MAKE_MOTATE_ADC_PIN('B', 21, /* ADC number:*/ 14);




} // namespace Motate

#endif
