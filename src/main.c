#include <stdio.h>
#include "../inc/pca9685.h"

int main(void)
{
    printf("Entry\n");

    PCA9685_WriteRegister(10);

    printf("Exit\n");
    return 0;
}
