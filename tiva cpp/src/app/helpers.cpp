#include "helpers.h"
#include "stdlib.h"

void Helpers::EnableInterrupts(void)
{ 
     __asm("CPSIE i");
}


void Helpers::DisableInterrupts(void)
{ 
    __asm("CPSID i");
}

/**
* Calculates the prescaler value for the motor step and sample duration timers.
*/
unsigned int Helpers::getPrescaler(double seconds){
    volatile double preload = 0xFFFFFFFF;
    volatile double prescaler = (seconds * 16000000)/(preload+1) -1;
    volatile double fractional = prescaler - ((long)prescaler);
    if (fractional > 0.0001){
            prescaler += 1;
    }
    return (unsigned int)prescaler;
}
/**
 * Calculates the preload value for the motor step and sample duration timers. 
 */
unsigned int Helpers::getPreload(double seconds, int prescaler){
    int secondsWholeNum = (long)seconds;
    double secondsFraction = seconds - secondsWholeNum;
    
    volatile int preloadInt = (secondsWholeNum * 16000000) / (prescaler + 1) -1;
    volatile double preloadDouble = (secondsFraction * 16000000)/(prescaler + 1) -1;
    volatile double preloadRemainder = preloadDouble - (long)preloadDouble;
 
    preloadInt += (long)preloadDouble;
    
    //volatile double fractional = preload - ((long)preload);
    if (preloadRemainder > 0.5){
            return (int)preloadInt + 1;
    }

    return (unsigned int)preloadInt;
    
}

/**
 * Converts a string value to integer. Used for parsing instruction data values.
 */
int Helpers::ToInt(char* string) {
    char *ptr;
    return strtol(string, &ptr, 10);
}

/**
 * Converts a string value to a double. Used for parsing instruction data values.
 */
double Helpers::ToDouble(char* string) {
    char *ptr;
    return strtod(string, &ptr);
}


bool Helpers::IsDouble(char* string) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == '.') {
            return true;
        }
    }

    return false;
}