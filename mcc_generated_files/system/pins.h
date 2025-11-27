/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA2 aliases
#define RA2_TRIS                 TRISAbits.TRISA2
#define RA2_LAT                  LATAbits.LATA2
#define RA2_PORT                 PORTAbits.RA2
#define RA2_WPU                  WPUAbits.WPUA2
#define RA2_OD                   ODCONAbits.ODCA2
#define RA2_ANS                  ANSELAbits.ANSELA2
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()           PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define RA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA4 aliases
#define InSensor_TRIS                 TRISAbits.TRISA4
#define InSensor_LAT                  LATAbits.LATA4
#define InSensor_PORT                 PORTAbits.RA4
#define InSensor_WPU                  WPUAbits.WPUA4
#define InSensor_OD                   ODCONAbits.ODCA4
#define InSensor_ANS                  ANSELAbits.ANSELA4
#define InSensor_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define InSensor_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define InSensor_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define InSensor_GetValue()           PORTAbits.RA4
#define InSensor_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define InSensor_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define InSensor_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define InSensor_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define InSensor_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define InSensor_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define InSensor_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define InSensor_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)
#define RA4_SetInterruptHandler  InSensor_SetInterruptHandler

// get/set RA5 aliases
#define LKP_TRIS                 TRISAbits.TRISA5
#define LKP_LAT                  LATAbits.LATA5
#define LKP_PORT                 PORTAbits.RA5
#define LKP_WPU                  WPUAbits.WPUA5
#define LKP_OD                   ODCONAbits.ODCA5
#define LKP_ANS                  ANSELAbits.ANSELA5
#define LKP_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LKP_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LKP_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LKP_GetValue()           PORTAbits.RA5
#define LKP_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LKP_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LKP_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LKP_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LKP_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LKP_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LKP_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LKP_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSELB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define RB5_IN0_TRIS                 TRISBbits.TRISB5
#define RB5_IN0_LAT                  LATBbits.LATB5
#define RB5_IN0_PORT                 PORTBbits.RB5
#define RB5_IN0_WPU                  WPUBbits.WPUB5
#define RB5_IN0_OD                   ODCONBbits.ODCB5
#define RB5_IN0_ANS                  ANSELBbits.ANSELB5
#define RB5_IN0_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_IN0_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_IN0_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_IN0_GetValue()           PORTBbits.RB5
#define RB5_IN0_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_IN0_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_IN0_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_IN0_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_IN0_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define RB5_IN0_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define RB5_IN0_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_IN0_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSELB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSELC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 aliases
#define BtnSet_TRIS                 TRISCbits.TRISC1
#define BtnSet_LAT                  LATCbits.LATC1
#define BtnSet_PORT                 PORTCbits.RC1
#define BtnSet_WPU                  WPUCbits.WPUC1
#define BtnSet_OD                   ODCONCbits.ODCC1
#define BtnSet_ANS                  ANSELCbits.ANSELC1
#define BtnSet_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define BtnSet_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define BtnSet_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define BtnSet_GetValue()           PORTCbits.RC1
#define BtnSet_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define BtnSet_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define BtnSet_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define BtnSet_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define BtnSet_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define BtnSet_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define BtnSet_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define BtnSet_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)
#define RC1_SetInterruptHandler  BtnSet_SetInterruptHandler

// get/set RC2 aliases
#define IO_RC2_TRIS                 TRISCbits.TRISC2
#define IO_RC2_LAT                  LATCbits.LATC2
#define IO_RC2_PORT                 PORTCbits.RC2
#define IO_RC2_WPU                  WPUCbits.WPUC2
#define IO_RC2_OD                   ODCONCbits.ODCC2
#define IO_RC2_ANS                  ANSELCbits.ANSELC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_RC2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_RC2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_RC2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_RC2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSELC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSELC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.WPUC6
#define IO_RC6_OD                   ODCONCbits.ODCC6
#define IO_RC6_ANS                  ANSELCbits.ANSELC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.WPUC7
#define IO_RC7_OD                   ODCONCbits.ODCC7
#define IO_RC7_ANS                  ANSELCbits.ANSELC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the InSensor pin functionality
 * @param none
 * @return none
 */
void InSensor_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for InSensor pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for InSensor at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void InSensor_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for InSensor pin.
 *        This is a dynamic interrupt handler to be used together with the InSensor_SetInterruptHandler() method.
 *        This handler is called every time the InSensor ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*InSensor_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for InSensor pin. 
 *        This is a predefined interrupt handler to be used together with the InSensor_SetInterruptHandler() method.
 *        This handler is called every time the InSensor ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void InSensor_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the BtnSet pin functionality
 * @param none
 * @return none
 */
void BtnSet_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for BtnSet pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for BtnSet at application runtime
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void BtnSet_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for BtnSet pin.
 *        This is a dynamic interrupt handler to be used together with the BtnSet_SetInterruptHandler() method.
 *        This handler is called every time the BtnSet ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*BtnSet_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for BtnSet pin. 
 *        This is a predefined interrupt handler to be used together with the BtnSet_SetInterruptHandler() method.
 *        This handler is called every time the BtnSet ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void BtnSet_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/