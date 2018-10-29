#include "USART1.h"

#define KEY1_COMM1  {0xEB,0x4B,0x07,0xF8,0xC0,0x88,0x22,0x88,0x66,0x2A,0x2D,0x41}

const unsigned char Key1Com1[] = {0xEB,0x4B,0x07,0xF8,0xC0,0x88,0x22,0x88,0x66,0x2A,0x2D,0x41};
const unsigned char Key1Com2[] = {0xEB,0x4B,0x07,0xF8,0xB9,0x3B,0x48,0x33,0x65,0xDD,0x4B,0x6E,0x3A,0x7F,0x71,0x10,0x31,0x87,0x4A};

const unsigned char KeyComm[2][20] = {
  {0xEB,0x4B,0x07,0xF8,0xC0,0x88,0x22,0x88,0x66,0x2A,0x2D,0x41}
};

typedef struct Command{
  unsigned char KeyCom1;
	unsigned char KeyCom2;
}sKeyCommand_t;


//sKeyCommand_t sKeyCommand[] = {
  //(0xEB,0x4B,0x07,0xF8,0xC0,0x88,0x22,0x88,0x66,0x2A,0x2D,0x41,}
//};

typedef struct keyPross{
  unsigned char KeyTime;
	unsigned char KeyVal;
	void (*UartPrintf)(unsigned char*);	 
}sKeyPross_t;

sKeyPross_t sKeyPross;

void OutputCommand(unsigned char KeyVal, unsigned char KeyTime)
{
     
}
void Init_API(void)
{
  sKeyPross.UartPrintf = printf;
}
void OutputCommand_Uart1(sKeyPross_t sKeyPross)
{
     sKeyPross.UartPrintf("123");
}