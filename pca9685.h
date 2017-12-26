#ifndef __PCA9685_H__
#define __PCA9685_H__
#else

// ~~~~~~~~~~~~~~
// Mode Registers
// ~~~~~~~~~~~~~~

#define PCA9685_MODE1 			0x00 	//Mode register 1

typedef union 
{
	struct
	{
		uint8_t restart:1;
		uint8_t extClk:1;
		uint8_t autoIncrement:1;
		uint8_t sleep:1;
		uint8_t sub1:1;
		uint8_t sub2:1;
		uint8_t sub3:1;
		uint8_t allCall:1;
	}fields;
	uint8_t raw;	
} PCA9685_MODE1_t;

#define PCA9685_MODE2 			0x01 	//Mode register 2

typedef union 
{
	struct
	{
		uint8_t reserved:3;
		uint8_t invert:1;
		uint8_t outputChange:1;
		uint8_t outputDrive:1;
		uint8_t outputNegation:2;
	}fields;
	uint8_t raw;	
}PCA9685_MODE2_t;

// ~~~~~~~~~~~~~~~~~
// Address registers
// ~~~~~~~~~~~~~~~~~
#define PCA9685_SUBADR1 		0x02 	//I2C-bus subaddress 1
#define PCA9685_SUBADR2 		0x03 	//I2C-bus subaddress 2
#define PCA9685_SUBADR3 		0x04 	//I2C-bus subaddress 3
#define PCA9685_ALLCALLADR 		0x05 	//LED All Call I2C-busaddress

typedef union 
{
	struct
	{
		uint8_t address:7;
		uint8_t reserved:1; 
	}fields;
	uint8_t raw;	
}PCA9685_Address_t;

// ~~~~~~~~~~~~~~~~~
// LED/PWM Registers
// ~~~~~~~~~~~~~~~~~

/*
	LED0 (PWM Channel 0)
*/
#define PCA9685_LED0_ON_L 		0x06 	//LED0 output and brightness control byte 0
#define PCA9685_LED0_ON_H 		0x07 	//LED0 output and brightness control byte 1
#define PCA9685_LED0_OFF_L 		0x08 	//LED0 output and brightness control byte 2
#define PCA9685_LED0_OFF_H 		0x09 	//LED0 output and brightness control byte 3

/*
	LED1 (PWM Channel 1)
*/
#define PCA9685_LED1_ON_L 		0x0A 	//LED1 output and brightness control byte 0
#define PCA9685_LED1_ON_H 		0x0B 	//LED1 output and brightness control byte 1
#define PCA9685_LED1_OFF_L 		0x0C 	//LED1 output and brightness control byte 2
#define PCA9685_LED1_OFF_H 		0x0D 	//LED1 output and brightness control byte 3

/*
	LED2 (PWM Channel 2)
*/
#define PCA9685_LED2_ON_L 		0x0E 	//LED2 output and brightness control byte 0
#define PCA9685_LED2_ON_H 		0x0F 	//LED2 output and brightness control byte 1
#define PCA9685_LED2_OFF_L 		0x10 	//LED2 output and brightness control byte 2
#define PCA9685_LED2_OFF_H 		0x11 	//LED2 output and brightness control byte 3

/*
	LED3 (PWM Channel 3)
*/
#define PCA9685_LED3_ON_L 		0x12 	//LED3 output and brightness control byte 0
#define PCA9685_LED3_ON_H 		0x13 	//LED3 output and brightness control byte 1
#define PCA9685_LED3_OFF_L 		0x14 	//LED3 output and brightness control byte 2
#define PCA9685_LED3_OFF_H 		0x15 	//LED3 output and brightness control byte 3

/*
	LED4 (PWM Channel 4)
*/
#define PCA9685_LED4_ON_L 		0x16 	//LED4 output and brightness control byte 0
#define PCA9685_LED4_ON_H 		0x17 	//LED4 output and brightness control byte 1
#define PCA9685_LED4_OFF_L 		0x18 	//LED4 output and brightness control byte 2
#define PCA9685_LED4_OFF_H 		0x19 	//LED4 output and brightness control byte 3
/*
	LED5 (PWM Channel 5)
*/
#define PCA9685_LED5_ON_L 		0x1A 	//LED5 output and brightness control byte 0
#define PCA9685_LED5_ON_H 		0x1B 	//LED5 output and brightness control byte 1
#define PCA9685_LED5_OFF_L 		0x1C 	//LED5 output and brightness control byte 2
#define PCA9685_LED5_OFF_H 		0x1D 	//LED5 output and brightness control byte 3

/*
	LED6 (PWM Channel 6)
*/
#define PCA9685_LED6_ON_L 		0x1E 	//LED6 output and brightness control byte 0
#define PCA9685_LED6_ON_H 		0x1F 	//LED6 output and brightness control byte 1
#define PCA9685_LED6_OFF_L 		0x20 	//LED6 output and brightness control byte 2
#define PCA9685_LED6_OFF_H 		0x21 	//LED6 output and brightness control byte 3

/*
	LED7 (PWM Channel 7)
*/
#define PCA9685_LED7_ON_L 		0x22 	//LED7 output and brightness control byte 0
#define PCA9685_LED7_ON_H 		0x23 	//LED7 output and brightness control byte 1
#define PCA9685_LED7_OFF_L 		0x24 	//LED7 output and brightness control byte 2
#define PCA9685_LED7_OFF_H 		0x25 	//LED7 output and brightness control byte 3

/*
	LED8 (PWM Channel 8)
*/
#define PCA9685_LED8_ON_L 		0x26 	//LED8 output and brightness control byte 0
#define PCA9685_LED8_ON_H 		0x27 	//LED8 output and brightness control byte 1
#define PCA9685_LED8_OFF_L 		0x28 	//LED8 output and brightness control byte 2
#define PCA9685_LED8_OFF_H 		0x29 	//LED8 output and brightness control byte 3

/*
	LED9 (PWM Channel 9)
*/
#define PCA9685_LED9_ON_L 		0x2A 	//LED9 output and brightness control byte 0
#define PCA9685_LED9_ON_H 		0x2B 	//LED9 output and brightness control byte 1
#define PCA9685_LED9_OFF_L 		0x2C 	//LED9 output and brightness control byte 2
#define PCA9685_LED9_OFF_H 		0x2D 	//LED9 output and brightness control byte 3

/*
	LED10 (PWM Channel 10)
*/
#define PCA9685_LED10_ON_L 		0x2E 	//LED10 output and brightness control byte 0
#define PCA9685_LED10_ON_H 		0x2F 	//LED10 output and brightness control byte 1
#define PCA9685_LED10_OFF_L 	0x30 	//LED10 output and brightness control byte 2
#define PCA9685_LED10_OFF_H 	0x31 	//LED10 output and brightness control byte 3

/*
	LED11 (PWM Channel 11)
*/
#define PCA9685_LED11_ON_L 		0x32 	//LED11 output and brightness control byte 0
#define PCA9685_LED11_ON_H 		0x33 	//LED11 output and brightness control byte 1
#define PCA9685_LED11_OFF_L 	0x34 	//LED11 output and brightness control byte 2
#define PCA9685_LED11_OFF_H 	0x35 	//LED11 output and brightness control byte 3

/*
	LED12 (PWM Channel 12
*/
#define PCA9685_LED12_ON_L 		0x36 	//LED12 output and brightness control byte 0
#define PCA9685_LED12_ON_H 		0x37 	//LED12 output and brightness control byte 1
#define PCA9685_LED12_OFF_L 	0x38 	//LED12 output and brightness control byte 2
#define PCA9685_LED12_OFF_H 	0x39 	//LED12 output and brightness control byte 3

/*
	LED13 (PWM Channel 13)
*/
#define PCA9685_LED13_ON_L 		0x3A 	//LED13 output and brightness control byte 0
#define PCA9685_LED13_ON_H 		0x3B 	//LED13 output and brightness control byte 1
#define PCA9685_LED13_OFF_L 	0x3C 	//LED13 output and brightness control byte 2
#define PCA9685_LED13_OFF_H 	0x3D 	//LED13 output and brightness control byte 3

/*
	LED14 (PWM Channel 14)
*/
#define PCA9685_LED14_ON_L 		0x3E 	//LED14 output and brightness control byte 0
#define PCA9685_LED14_ON_H 		0x3F 	//LED14 output and brightness control byte 1
#define PCA9685_LED14_OFF_L 	0x40 	//LED14 output and brightness control byte 2
#define PCA9685_LED14_OFF_H 	0x41 	//LED14 output and brightness control byte 3

/*
	LED15 (PWM Channel 15)
*/
#define PCA9685_LED15_ON_L 		0x42 	//LED15 output and brightness control byte 0
#define PCA9685_LED15_ON_H 		0x43 	//LED15 output and brightness control byte 1
#define PCA9685_LED15_OFF_L 	0x44 	//LED15 output and brightness control byte 2
#define PCA9685_LED15_OFF_H 	0x45 	//LED15 output and brightness control byte 3

/*
	ALL 
*/
#define PCA9685_ALL_LED_ON_L 	0xFA 	//load all the LEDn_ON registers, byte 0
#define PCA9685_ALL_LED_ON_H 	0xFB 	//load all the LEDn_ON registers, byte 1
#define PCA9685_ALL_LED_OFF_L 	0xFC 	//load all the LEDn_OFF registers, byte 0
#define PCA9685_ALL_LED_OFF_H 	0xFD 	//load all the LEDn_OFF registers, byte 1

typedef union
{
	struct
	{
		uint8_t value:8;
	}fields;
	uint8_t raw;
}PCA9685_LED_ON_L_t;

typedef union
{
	struct
	{
		uint8_t reserved:3;
		uint8_t fullOn:1;
		uint8_t value:4; 
	}fields;
	uint8_t raw;
}PCA9685_LED_ON_H_t;

typedef union
{
	struct
	{
		uint8_t value:8;
	}fields;
	uint8_t raw;
}PCA9685_LED_OFF_L_t;

typedef union
{
	struct
	{
		uint8_t reserved:3;
		uint8_t fullOff:1;
		uint8_t value:4; 
	}fields;
	uint8_t raw;
}PCA9685_LED_OFF_H_t;

// ~~~~~~~~~~~~~~~~~~
// PRESCALER REGISTER
// ~~~~~~~~~~~~~~~~~~


#define PCA9685_PRE_SCALE	 	0xFE 	//prescaler for PWM output frequency 

typedef union 
{
	struct
	{
		uint8_t PreScale:8;
	}fields;
	uint8_t raw;	
}PCA9685_PreScale_t;

/*
/   PROTOTYPES
*/

void PCA9685_WriteRegister(uint8_t value);
uint8_t PCA9685_ReadRegister(uint8_t address);

void PCA9685_PrintStatus(void);
void PCA9685_SetPWM(uint8_t channel, uint16_t dutyCycle);
void PCA9685_SetFrequency(uint8_t frequency);


void PCA9685_Restart(void);
void PCA9685_AutoIncrement(uint8_t state);
void PCA9685_ExtClk(uint8_t state);
void PCA9685_Sleep(uint8_t state);
void PCA9685_SubAddress(uint8_t address, uint8_t state);

void PCA9685_Invert(uint8_t state);
void PCA9685_OCH(uint8_t state);
void PCA9685_Driver(uint8_t state);
void PCA9685_OutNE(uint8_t state); 


#endif
