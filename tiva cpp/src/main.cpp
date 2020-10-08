#include "serial.h"
#include "DLS.h"
#include "tm4c123gh6pm.h"
#include <stdint.h>

extern "C" void UART0_Handler (void);
extern "C" void ADC0SS3_Handler (void);
extern "C" void SysTick_Handler(void);

DLS dls;

int main(void)
{
    Serial::WriteString("Enter an instruction: ");
    dls.EventLoop();

    while(1);
}

void UART0_Handler(void) {
    char c = Serial::ReadChar();
    dls.ReadSerial(c);
    Serial::WriteChar(c);
}

void ADC0SS3_Handler (void)
{
    ADC0_ISC_R |= 0x8;

    // Get Data from FIFO
    unsigned int sensorData = ADC0_SSFIFO3_R;
    dls.driver.sampleTotal += sensorData;
    dls.driver.numSamples++;
}

//void delayMS(int n)
//{
//    int i, j;

//    for (i = 0; i < n; i++)
//        for(j = 0; j < 3180; j++)
//        {
//        }

//}

void SysTick_Handler(void){
	dls.driver.totalTimeElapsed += 1.048575;
}
