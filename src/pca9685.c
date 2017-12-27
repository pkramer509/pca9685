#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <pca9685.h>

#include "../inc/pca9685.h"

#define tcOFF       "\x1b[31m"
#define tcON        "\x1b[32m"
#define tcRESET     "\x1b[0m"

static uint8_t i2c_fd;

uint8_t PCA9685_init(uint8_t i2cAddress, uint8_t i2cSpeed)
{
    uint8_t status;

    status = wiringPiSetup();
    if (status != 0)
    {
        return ((uint8_t) -1);
    }

    i2c_fd = wiringPiI2CSetup(i2cAddress);
}

void PCA9685_WriteRegister(uint8_t address, uint8_t value)
{
    wiringPiI2CWriteReg8(i2c_fd, address, value);
}

uint8_t PCA9685_ReadRegister(uint8_t address)
{
    return wiringPiI2CReadReg8(i2c_fd, address);
}


void PCA9685_PrintStatus(void) {
    PCA9685_MODE1_t mode1;
    PCA9685_MODE2_t mode2;

    mode1.raw = PCA9685_ReadRegister(PCA9685_MODE1);
    mode2.raw = PCA9685_ReadRegister(PCA9685_MODE2);

    printf("\nRESET\t"tcRESET);

    if (mode1.fields.extClk == 1) {
        printf(tcON"EXTCLK\t"tcRESET);
    } else {
        printf(tcOFF"EXTCLK\t"tcRESET);
    }

    if (mode1.fields.autoIncrement == 1) {
        printf(tcON"AUTO\t"tcRESET);
    } else {
        printf(tcOFF"AUTO\t"tcRESET);
    }

    if (mode1.fields.sleep == 1) {
        printf(tcON"SLEEP\t"tcRESET);
    } else {
        printf(tcOFF"SLEEP\t"tcRESET);
    }

    if (mode1.fields.sub1 == 1) {
        printf(tcON"SUB1\t"tcRESET);
    } else {
        printf(tcOFF"SUB1\t"tcRESET);
    }

    if (mode1.fields.sub2 == 1) {
        printf(tcON"SUB2\t"tcRESET);
    } else {
        printf(tcOFF"SUB2\t"tcRESET);
    }

    if (mode1.fields.sub3 == 1) {
        printf(tcON"SUB3\t"tcRESET);
    } else {
        printf(tcOFF"SUB3\t"tcRESET);
    }

    if (mode1.fields.allCall == 1) {
        printf(tcON"ALLCALL\n"tcRESET);
    } else {
        printf(tcOFF"ALLCALL\n"tcRESET);
    }

    if (mode2.fields.invert == 1) {
        printf(tcON"INVRT\t"tcRESET);
    } else {
        printf(tcOFF"INVRT\t"tcRESET);
    }

    if (mode2.fields.outputChange == 1) {
        printf(tcON"OCH\t"tcRESET);
    } else {
        printf(tcOFF"OCH\t"tcRESET);
    }

    if (mode2.fields.outputDrive == 1) {
        printf(tcON"OUTDRV\t"tcRESET);
    } else {
        printf(tcOFF"OUTDRV\t"tcRESET);
    }

    if (mode2.fields.outputNegation == 1) {
        printf(tcON"OUTNE\n"tcRESET);
    } else {
        printf(tcOFF"OUTNE\n"tcRESET);
    }
}

void PCA9685_SetPWM(uint8_t channel, uint16_t dutyCycle)
{

}

void PCA9685_SetFrequency(uint8_t frequency)
{

}

void PCA9685_Restart(void)
{
    PCA9685_MODE1_t mode1;

    mode1.fields.restart = 1;
    wiringPiI2CWriteReg8(i2c_fd, PCA9685_MODE1, mode1.raw);
}