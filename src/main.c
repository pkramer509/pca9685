#include <stdio.h>
#include <pca9685.h>
#include "../inc/pca9685.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    uint8_t value;
    PCA9685_MODE1_t mode1;
    PCA9685_MODE2_t mode2;

    printf(ANSI_COLOR_BLUE "Entry" ANSI_COLOR_RED "\n");    //ANSI_COLOR_RED catches SUDO exception, clears after init.

    PCA9685_init(0x60, 200);
    printf(ANSI_COLOR_RESET);
    PCA9685_Restart();

    mode1.fields.extClk = 0;
    mode1.fields.sleep = 1;
    mode1.fields.allCall = 0;

    PCA9685_WriteRegister(PCA9685_MODE1, mode1.raw);

    value = PCA9685_ReadRegister(PCA9685_MODE1);
    printf("0x%x\n", value);

    value = PCA9685_ReadRegister(PCA9685_MODE2);
    printf("0x%x\n", value);

    PCA9685_PrintStatus();
    printf("\n");

    PCA9685_Restart();

    mode1.fields.extClk = 0;
    mode1.fields.sleep = 0;
    mode1.fields.allCall = 0;

    PCA9685_WriteRegister(PCA9685_MODE1, mode1.raw);
    PCA9685_PrintStatus();
    printf("\n");

    PCA9685_Channel_e channel;

    channel = all;

    value = all;

    printf("%d\n", channel);

    printf(ANSI_COLOR_BLUE "Exit\n" ANSI_COLOR_RESET);
    return 0;
}
