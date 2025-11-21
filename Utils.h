/* 
 * File:   Utils.h
 * Author: cyoha
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef UTILS_H
#define	UTILS_H

#include <xc.h> // include processor files - each processor file is guarded. 
#include "mcc_generated_files/system/system.h"

#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <math.h>

const uint16_t powers10[] = {10000, 1000, 100, 10, 1};


void floatToStr(float n, char *res, uint8_t precision, bool endLine);
void uint16ToStr(uint16_t n, char *res, bool endLine);

#endif	/* UTILS_H */

