/*
 * File:   Utils.c
 * Author: cyoha
 *
 * Created on November 15, 2025, 2:43 PM
 */

#include "Utils.h"
#include "mcc_generated_files/system/system.h"

// Convierte un entero positivo a string
// Devuelve cuántos caracteres escribió
uint8_t uIntToStr(uint16_t val, char *res)
{
    uint8_t started = 0;   // para evitar ceros a la izquierda
    uint8_t idx = 0;
    uint8_t d;

    for (uint8_t i = 0; i < 5; i++)
    {
        d = 0;
        while (val >= powers10[i]) {
            val -= powers10[i];
            d++;
        }

        if (d > 0 || started || i == 4) {
            res[idx++] = d + '0';
            started = 1;
        }
    }

    return idx;
}

void floatToStr(float n, char *res, uint8_t precision, bool endLine)
{
    uint8_t i = 0;

    // Manejar signo
    if (n < 0.0f)
    {
        res[i++] = '-';
        n = -n;
    }

    // Parte entera
    uint16_t int_part = (uint16_t)n;

    // Convertir entero con la misma función
    i += uIntToStr(int_part, res + i);

    // Punto decimal
    res[i++] = '.';

    // Parte fraccionaria
    float frac_part = n - (float)int_part;
    
    for (uint8_t p = 0; p < precision; p++)
    {
        frac_part *= 10.0f;
        uint8_t digit = (uint8_t)frac_part;
        res[i++] = digit + '0';
        frac_part -= digit;
    }

    // Terminación
    res[i] = endLine ? '\n' : 32;
}


void uint16ToStr(uint16_t n, char *res, bool endLine)
{
    uint8_t len = uIntToStr(n, res);

    // Terminación
    res[len] = endLine ? '\n' : 32;
}
