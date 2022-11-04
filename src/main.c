//
// Created by Lazaro O'Farrill on 03/11/2022.
//

#include "config.h"
#include <xc.h>
#include <proc/pic18f4550.h>
#include <pic18.h>
#include "stdbool.h"
#include "peripherals/motors.h"
#include "utils.h"


int main() {
    TRISB0 = 0; //RB0 as Output PIN
    TRISD = 0x00;

    StepMotor motor1 = {
            {
                    {
                            &PORTD,
                            0
                    }, {
                            &PORTD,
                            1
                    }, {
                            &PORTD,
                            2
                    }, {
                            &PORTD,
                            3
                    }
            },
            10
    };

    StepMotor motor2 = {
            {
                    {
                            &PORTD,
                            4
                    }, {
                            &PORTD,
                            5
                    }, {
                            &PORTD,
                            6
                    }, {
                            &PORTD,
                            7
                    }
            },
            10
    };


    for (int i = 0; i != 200; i++) {
        moveRight(&motor1);
        moveLeft(&motor2);
    }
    return 0;
}

