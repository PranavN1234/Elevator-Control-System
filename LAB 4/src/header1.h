#define DELAY1 10000
#define DELAY2 10000
#define DELAY3 5000
#define DELAY4 3000
#define DELAY5 2000
#define DELAY6 15000
#define ON 0x01
#define OFF 0x00
#define NUM_LEDS 0x03

// Buttons
#define GO_button 0x00000002
#define Open_button 0x00000800
#define Close_button 0x00001000
#define floor1_b 0x00040000
#define floor2_b 0x00800000
#define floor3_b 0x00000001

// LEDs
#define Floor1 0x00000004
#define Floor2 0x00100000
#define Floor3 0x00200000

#define OpenLED 0x00000400
#define CloseLED 0x00002000
#define MovingLED 0x00080000

void setupGPIO();
int setLED(int color, int state);
void delay(int milliseconds);
int checkBot(int pin);