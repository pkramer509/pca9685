#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <wiringPi.h>

#include "../inc/pca9685.h"


void PCA9685_WriteRegister(uint8_t value)
{
    PCA9685_MODE1_t mode1;

    mode1.raw = 0;

    mode1.fields.restart = 1;
    mode1.fields.extClk = 1;
    mode1.fields.autoIncrement = 1;
    mode1.fields.sleep = 1;

    printf("%x\t%x\n", mode1, mode1.raw);
                            
}

uint8_t PCA9685_ReadRegister(uint8_t address)
{

    return 0;
}


void PCA9685_PrintStatus(void)
{

}


void PCA9685_SetPWM(uint8_t channel, uint16_t dutyCycle)
{

}

void PCA9685_SetFrequency(uint8_t frequency)
{

}

void PCA9685_Restart(void)
{

}

void PCA9685_AutoIncrement(uint8_t state)
{

}

void PCA9685_ExtClk(uint8_t state)
{

}

void PCA9685_Sleep(uint8_t state)
{

}

void PCA9685_SubAddress(uint8_t address, uint8_t state)
{

}

void PCA9685_Invert(uint8_t state)
{

}

void PCA9685_OCH(uint8_t state)
{

}

void PCA9685_Driver(uint8_t state)
{

}

void PCA9685_OutNE(uint8_t state)
{

}
