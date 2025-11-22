/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.1.1
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

#include "../pins.h"

void (*InSensor_InterruptHandler)(void);
void (*BtnSet_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0xC0;
    LATC = 0x0;
    /**
    ODx registers
    */
    ODCONA = 0x0;
    ODCONB = 0xC0;
    ODCONC = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0x1B;
    TRISB = 0x30;
    TRISC = 0x6A;

    /**
    ANSELx registers
    */
    ANSELA = 0x7;
    ANSELB = 0x30;
    ANSELC = 0x3D;

    /**
    WPUx registers
    */
    WPUA = 0x10;
    WPUB = 0x0;
    WPUC = 0x2;


    /**
    SLRCONx registers
    */
    SLRCONA = 0x37;
    SLRCONB = 0xF0;
    SLRCONC = 0xFF;

    /**
    INLVLx registers
    */
    INLVLA = 0x3F;
    INLVLB = 0xF0;
    INLVLC = 0xFF;

   /**
    RxyI2C | RxyFEAT registers   
    */
    RB4I2C = 0x0;
    RB6I2C = 0x1;
    /**
    PPS registers
    */
    U1RXPPS = 0x16; //RC6->UART1:RX1;
    RC4PPS = 0x0C;  //RC4->PWM2_16BIT:PWM21;
    RC7PPS = 0x10;  //RC7->UART1:TX1;
    RC0PPS = 0x0A;  //RC0->PWM1_16BIT:PWM11;
    I2C1SCLPPS = 0xF;  //RB7->I2C1:SCL1;
    RB7PPS = 0x21;  //RB7->I2C1:SCL1;
    I2C1SDAPPS = 0xE;  //RB6->I2C1:SDA1;
    RB6PPS = 0x22;  //RB6->I2C1:SDA1;

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x10;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x2;
    IOCCN = 0x0;
    IOCCF = 0x0;

    InSensor_SetInterruptHandler(InSensor_DefaultInterruptHandler);
    BtnSet_SetInterruptHandler(BtnSet_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin InSensor
    if(IOCAFbits.IOCAF4 == 1)
    {
        InSensor_ISR();  
    }
    // interrupt on change for pin BtnSet
    if(IOCCFbits.IOCCF1 == 1)
    {
        BtnSet_ISR();  
    }
}
   
/**
   InSensor Interrupt Service Routine
*/
void InSensor_ISR(void) {

    // Add custom InSensor code

    // Call the interrupt handler for the callback registered at runtime
    if(InSensor_InterruptHandler)
    {
        InSensor_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for InSensor at application runtime
*/
void InSensor_SetInterruptHandler(void (* InterruptHandler)(void)){
    InSensor_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for InSensor
*/
void InSensor_DefaultInterruptHandler(void){
    // add your InSensor interrupt custom code
    // or set custom function using InSensor_SetInterruptHandler()
}
   
/**
   BtnSet Interrupt Service Routine
*/
void BtnSet_ISR(void) {

    // Add custom BtnSet code

    // Call the interrupt handler for the callback registered at runtime
    if(BtnSet_InterruptHandler)
    {
        BtnSet_InterruptHandler();
    }
    IOCCFbits.IOCCF1 = 0;
}

/**
  Allows selecting an interrupt handler for BtnSet at application runtime
*/
void BtnSet_SetInterruptHandler(void (* InterruptHandler)(void)){
    BtnSet_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for BtnSet
*/
void BtnSet_DefaultInterruptHandler(void){
    // add your BtnSet interrupt custom code
    // or set custom function using BtnSet_SetInterruptHandler()
}
/**
 End of File
*/