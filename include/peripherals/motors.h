//
// Created by Lazaro O'Farrill on 04/11/2022.
//

#ifndef PIC18_APP_MOTORS_H
#define PIC18_APP_MOTORS_H

#define FULL_TURN 200

typedef struct Coil {
    unsigned char *port;
    unsigned bit;
} Coil;

typedef Coil *pCoil;

typedef struct StepMotor {
    Coil coils[4];
    unsigned long delay;
} StepMotor;

typedef StepMotor *pMotor;

void moveOneStep(pMotor motor, unsigned[4][4]);

void moveLeft(pMotor motor);

void moveRight(pMotor motor);

void dePower(pMotor motor);

void initMotor(pMotor motor);

#endif //PIC18_APP_MOTORS_H
