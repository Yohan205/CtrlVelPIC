 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
 * SDA - RB6        |   SCL - RB7
 * RA5 - LKP
 * RA4 - InSensor
 * RA2 - DAC OUT
 * RB5 - In OPAMP   |   RC2 - Out OPAMP
*/
#include "mcc_generated_files/system/system.h"
#include "ssd1306_oled.h"

#define SSD1306_128_64  // ESTABLCER DIMENSIONES DE LA OLED

void LKP(void);
void interruptSensor(void);
void interuptTimer(void);

uint8_t contador=0;
//uint16_t conv1;
float voltaje1, dutyVal;
float  DACval =0;
volatile float frecuencia;
char Char[5], CharF[5];

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    OLED_Init();
    Timer2_OverflowCallbackRegister(LKP);
    
    Timer0_OverflowCallbackRegister(interuptTimer);
    InSensor_SetInterruptHandler(interruptSensor);

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 
    
    //DAC1_SetOutput((uint8_t) DACval);
    while(1)
    {
        DACval = (255.0/5.0)*3.3;
        //DACval = (255.0/80.0)*frecuencia;
        dutyVal = (65535.0/80.0) * frecuencia;
        voltaje1 = (5.0/255.0)*DACval;
        
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister((uint16_t) dutyVal);
        PWM1_16BIT_LoadBufferRegisters();
        DAC1_SetOutput((uint8_t) DACval);
        OPA1_SetResistorLadder(OPA1_R2byR1_is_1); //Ganancia (R2/R1 + 1) 
        
        
        /*/floatToChar((contador), Char, 1);

        OLED_SetFont(FONT_2); // Font medio
        //OLED_Write_Text(3, 0, "CONT: ");
        //OLED_Write_Text(46, 0, Char);
        //OLED_Update();

        floatToChar((frecuencia), CharF, 1);

        OLED_Write_Text(3, 20, "FREQ: ");
        OLED_Write_Text(46, 20, CharF);

        floatToChar((voltaje1), Char, 1);

        OLED_Write_Text(3, 40, "VOLT: ");
        OLED_Write_Text(46, 40, Char);
        OLED_Update();*/
    }    
}

void interuptTimer(void){
    frecuencia = 0;  
}

void interruptSensor(void){
    contador = TMR0_CounterGet();
    frecuencia = ( 1000.0 / contador);
    TMR0_CounterSet(0);
}

void LKP(void){
    LKP_Toggle();
}