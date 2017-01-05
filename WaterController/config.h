/*
 * Serial Port Speed Default to 38400
 */
#define BAUDRATE 38400

/*
 * Define Required PINS
 * Uno, Ethernet A4 (SDA), A5 (SCL)
 * SD Card uses Pin 10,11,12,13
 * RTC uses IC2
 * LCD uses IC2 address x27
 * Bluetooth connected to pin 0 and 1 tx/rx
 */
 
#define relay 8
#define 
byte LedRed       = 7;
byte LedGreen     = 6;
byte LedBlue      = 5;
byte ButtonStart  = 4;
byte ButtonStop   = 3;
byte FlowSensor   = 2;
byte SensorInterrupt = 0; // 0 = digital pin 2


/** LED Settings 
 *  
 *  
 */
#define COMMON_ANODE
#define LedRed 7
#define LedGreen 6
#define LedBlue 5

/*
 * Setup Keyboard
 *
 */

#define KeyBoard A0
#define button1 00
#define button2 00
#define button3 00
#define button4 00
#define button5 00


 
