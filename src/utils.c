//
// Created by Lazaro O'Farrill on 04/11/2022.
//
#include <pic18.h>
#include "utils.h"
#include "config.h"

void delay_ms(unsigned long milliseconds) {
    while (milliseconds > 0) {
        __delay_ms(1);
        milliseconds--;
    }
}

