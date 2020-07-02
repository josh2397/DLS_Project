#include "DLS.h"
 
DLS::DLS () {
    //Setup::SensorADCSetup();
    Setup::Uart0TerminalSetup();

    //queue = new Queue();
}

void DLS::readSerial(char inChar){

    strcat(DLS::inputString, &inChar);

    if (inChar == '\n') {
        queue.enqueue(inputString);
        char * lastInstruction = queue.peek();
        for (int i = 0; i < strlen(lastInstruction); i++){
            Helpers::WriteChar(lastInstruction[i]);
        }
        
        strcpy(inputString, "");
        return;
    }
}

void DLS::eventLoop(){

    for (;;) {
        //char *currentInstruction = queue->peek();

//        if (strcmp(currentInstruction, Instruction::G00)) {
//            // spinMotor();
//            Helpers::WriteChar(currentInstruction[0]);
//        }
    }
}

// void spinMotor() {
//     for (int x = 0; x < StepsPerRev; x++) {
//         digitalWrite(stepPin, HIGH);
        
//         delayMicroseconds(800);
//         digitalWrite(stepPin, LOW);
        
//         delayMicroseconds(800);

//     }
// }
