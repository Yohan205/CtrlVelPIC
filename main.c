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
 * RB6 (11) - SDA        |   RB7 (10) - SCL
 * RA5 (2) - LKP
 * RA4 (3) - InSensor
 * RA2 (17) - DAC OUT
 * RB5 (12) - In OPAMP   |   RC2 (14) - Out OPAMP
 * RC5 (6) - Control System In
 * RC4 (6) - Control System Out
*/
#include "mcc_generated_files/system/system.h"
#include "Utils.h"
#include "ssd1306_oled.h"

#define SSD1306_128_64  // ESTABLCER DIMENSIONES DE LA OLED

void LKP(void);
void interruptSensor(void);
void interruptTimer0(void);
void interruptTimer2(void);
void boton1 (void);

uint8_t contador=0;
uint16_t conv1, conv2, valorGuardado;

//int RxMsg;    bool activeMsg=0;
float voltaje1, dutyValue, dutyValue1, DACval = 0;
volatile float frecuencia;
volatile bool flagguardar = true;
volatile char str[8];

/*static float freq_ma_buf[8]; // buffer circular
static uint8_t ma_idx = 0;         // índice actual en buffer
static uint8_t ma_count = 0;       // cuantas muestras válidas tenemos (<= MA_SIZE)
static float freq_ma_sum = 0.0;   // suma acumulada para cálculo eficiente*/


/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    
    Timer0_OverflowCallbackRegister(interruptTimer0);
    Timer1_OverflowCallbackRegister(LKP);
    Timer2_OverflowCallbackRegister(interruptTimer2);
    
    InSensor_SetInterruptHandler(interruptSensor);
    BtnSet_SetInterruptHandler(boton1);
    
    
    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 
    OLED_Init();
    OLED_SetFont(FONT_1);
    OLED_Write_Text(10, 50, "Colla");
    OLED_Update();
    
    while(1)
    {
        conv1 = (uint16_t) ADC_ChannelSelectAndConvert(ADC_CHANNEL_ANB4);   //Lee potenciometro RB4, valor de ref
        conv2 = (uint16_t) ADC_ChannelSelectAndConvert(ADC_CHANNEL_ANC5);
        
        //OPA1_SetResistorLadder(OPA1_R2byR1_is_1); //Ganancia (R2/R1 + 1) 
        dutyValue = (65535.0/80.0) * frecuencia;  // Conversion a duty de los RPS
        dutyValue1 =(65535.0/4095.0)*conv2;
        
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister((uint16_t) dutyValue);
        PWM1_16BIT_LoadBufferRegisters();
        PWM2_16BIT_SetSlice1Output1DutyCycleRegister((uint16_t) dutyValue1);
        PWM2_16BIT_LoadBufferRegisters();
        
 
        
        if (flagguardar) {
            valorGuardado = conv1;
            DACval = (255.0 / 4095.0)*conv1;
        }
        else {
            DACval = (255.0 / 4095.0)*valorGuardado;
        }
        //DACval = (255.0/5.0)*3.3;
        DAC1_SetOutput((uint8_t) DACval);
        
        voltaje1 = (5.0/4095.0)*conv1;
        
        
        
        //printf("%s",str);
        
        /*floatToStr((frecuencia), str, 2, false);
        OLED_SetFont(FONT_2); // Font medio
        OLED_Write_Text(3, 0, "Vel: ");
        OLED_Write_Text(40, 0, str);
        OLED_Update();*/
        
        /*
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

void interruptTimer2(void){
    
}

void interruptSensor(void){
    contador = TMR0_CounterGet();
    frecuencia = 1000.0 / (float)contador; // lectura sin filtrar (RPS)
    /*// Actualizar buffer y suma para media móvil
    freq_ma_sum -= freq_ma_buf[ma_idx];     // quitar vieja contribución
    freq_ma_buf[ma_idx] = freq_raw;         // guardar nueva muestra
    freq_ma_sum += freq_raw;                // añadir nueva contribución

    ma_idx++;
    if (ma_idx >= 8) ma_idx = 0;

    if (ma_count < 8) ma_count++;     // hasta llenarlo

    // frecuencia filtrada (usada por el resto del programa)
    frecuencia = freq_ma_sum / (float)ma_count;*/
    TMR0_CounterSet(0);
}

void boton1 (void){
    flagguardar=~flagguardar;
}

void LKP(void){
    LKP_Toggle();
    
    //printf("%d\n", valorGuardado);
    printf("%s\n",str);
    //__delay_ms(1500);
    //UART1_Write(65);
    
}