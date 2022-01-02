/*  External-Button-Template
*   Operate an LED output with a button input. Configured so button1 controls led1.
*
*   Board: NUCLEO L476RG
*   Author: James Chandler 2021
*/

#include "mbed.h"

//define output pins
DigitalOut led1(PC_0);

//define input pins
DigitalIn button1(PC_10);

//declare initialisation functions
void init_buttons();
void init_leds();

int main(){
    init_buttons();           //initalise buttons
    init_leds();               //initalise led

    while(1){

       led1.write(button1.read()); //assign button1 state to led1.
    }
}

void init_buttons(){
    button1.mode(PullNone);  //turn off internal pull up / pull down resistors
}

void init_leds(){
    led1.write(0);   //turn off leds by default
}
