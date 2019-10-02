#include "registers.h"

extern void Delay(unsigned int);
extern void Setup(void);
extern void WriteChar(unsigned int);
extern unsigned int ReadChar();
extern int calibrate(void);
extern void sampleTwoPoints(double sampleDuration, int point1, int point2);
void wait(void);

unsigned int instruction;
unsigned int point1;
unsigned int point2;
unsigned int sampleDuration;
unsigned int stepSize;

unsigned int ALREADY_READ=0;

int STOP;
float stepsPerMM;

extern int currentPosition;
	
int main(void)
{	  
	STOP = 0;
	Setup();

//	WriteChar(0x47);
//	WriteChar(0x4F);
	
	// Enable Timer output trigger for ADC and enable timer
	//TIMER0_CTL |= 0x21;
	wait();
}

void wait (void)
{
	while (1)
	{
		if (instruction == '*')
		{
			STOP = 0;
			WriteChar(instruction);
			calibrate();
			instruction = 0;
		}
		if (instruction == (unsigned int)0x3A)//sample 2 points : opcode
		{
			ALREADY_READ = 0;
			
			sampleTwoPoints((double)sampleDuration, point1*stepsPerMM, point2*stepsPerMM);
			//sampleTwoPoints((double)0.001,100, 300);
			instruction = 0;
			
		}
		if (instruction == (unsigned int)0x2E) 
		{
			ALREADY_READ = 0;
			STOP = 0;
			WriteChar(instruction);
			UART0_ICR |= 0x10;
	//		ReadChar();
	//		TIMER0_CTL &= ~0x21;
	//		TIMER1_ICR &= ~1;
			instruction = 0;
			
		}
		//STOP = 0;
		
	}
}