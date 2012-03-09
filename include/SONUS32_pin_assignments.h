/*
** SONUS32_pin_assignments.h   M5 SONUS32 project 
** 
** 2012-03-06 v0.1 cbm
**
*/

// pins for SD card connected to peripheral SPI2
// SDI2 is on pin 12 = RPA4 - PPS as 0010b
#define SDI_PPS 0x02
// SDO2 is on pin 9 = RPA2
#define SDO_PPS 0x04
#define SDO_REG RPA2Rbits.RPA2R
// SCK2 is on pin 26 -- hardwired for SDI2
// Write Protect input is pin 11 = RPB4
#define SDWP    _RB4
// Card Detect input is pin 10 = RPA3
#define SDCD    _RA3
// Card Select output is pin 7 = RPB3
#define SDCS    _RB3
#define SDCS_TRIS _TRISB3
