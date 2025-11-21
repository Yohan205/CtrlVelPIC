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
#include "Utils.h"

#define SSD1306_128_64  // ESTABLCER DIMENSIONES DE LA OLED

void LKP(void);
void interruptSensor(void);
void interruptTimer0(void);
void interruptTmr1(void);
void boton1 (void);
volatile bool flagguardar = true;

uint8_t contador=0;
uint16_t conv1;
float valorGuardado;

//int RxMsg;    bool activeMsg=0;
float voltaje1, dutyVal, DACval = 0;
volatile float frecuencia;
char str[8], CharF[8];

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    OLED_Init();
    
    Timer2_OverflowCallbackRegister(LKP);
    Timer1_OverflowCallbackRegister(interruptTmr1);
    Timer0_OverflowCallbackRegister(interruptTimer0);
    
    InSensor_SetInterruptHandler(interruptSensor);
     BtnSet_SetInterruptHandler(boton1);
    
    
    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 
    
    
    while(1)
    {
        dutyVal = (65535.0/80.0) * frecuencia;  // Conversion a duty
        
        //voltaje1 = (5.0/255.0)*DACval;
        
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister((uint16_t) dutyVal);
        PWM1_16BIT_LoadBufferRegisters();
        //OPA1_SetResistorLadder(OPA1_R2byR1_is_1); //Ganancia (R2/R1 + 1) 
        conv1 = (uint16_t) ADC_ChannelSelectAndConvert(ADC_CHANNEL_ANB4);
        
        
        if (flagguardar) {
        
            DACval = (255.0 / 4095.0)*conv1;
        }
        else {
       
            DACval = valorGuardado;
        }
       // DACval = (255.0/5.0)*3.3;
        DAC1_SetOutput((uint8_t) DACval);
        
        voltaje1 = (5.0/4095.0)*conv1;
        
        
        floatToStr(voltaje1, str, 2, 1);
        //printf("%s",str);
        
        
        
        /*
        if (UART1_IsRxReady()){
            RxMsg = getch();
            putch(RxMsg);
        }
        
        if (RxMsg == 49){
            LKP_SetHigh();
            //UART1_Write(131);
            
        } else if (RxMsg == 48){
            LKP_SetLow();
        }*/
        
        
        /*
        OLED_SetFont(FONT_2); // Font medio
        OLED_Write_Text(3, 0, "CONT: ");
        OLED_Write_Text(46, 0, Char);
        //OLED_Update();

        floatToChar((frecuencia), CharF, 1);

        OLED_Write_Text(3, 20, "FREQ: ");
        OLED_Write_Text(46, 20, CharF);
        OLED_Update();

        floatToChar((voltaje1), Char, 1);

        OLED_Write_Text(3, 40, "VOLT: ");
        OLED_Write_Text(46, 40, Char);*/
        
    }    
}


void interruptTimer0(void){
    frecuencia = 0;  
}

void interruptSensor(void){
    contador = TMR0_CounterGet();
    frecuencia = ( 1000.0 / contador);
    TMR0_CounterSet(0);
}

void LKP(void){
    LKP_Toggle();
    //UART1_Write(65);
    //printf("%d\n",conv1);
    
}

void boton1 (void){
    
    flagguardar=~flagguardar;
     
    
}
   


void interruptTmr1(void){
    printf("%d\n",conv1);
    //printf("%s \n",str);
    //__delay_ms(1500);
    //UART1_Write(65);
    
}