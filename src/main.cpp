/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       10jac                                                     */
/*    Created:      5/12/2023, 1:54:06 PM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "RobotConfig.h"

#include "ControllerInputs.cpp"

using namespace vex;



// A global instance of vex::brain used for printing to the V5 brain screen
brain Brain;

vex::controller Controller1 = vex::controller(vex::primary);

// define your global instances of motors and other devices here
vex::motor motor1 = vex::motor(vex::PORT1, vex::ratio18_1, false);
vex::motor motor2 = vex::motor(vex::PORT2, vex::ratio18_1, false);

bool Loop = true;

//Setsup the callback events for each button on the contorller
//these are the functions that will be called when each button is pressed
//The functions are in a seperate object which is created from the the class above
void CallBackSetup(){
    printf("Call Back Setup function called...");
    //callback functions for A,B,X and Y buttons
    Controller1.ButtonA.pressed(ControllerButtonAPressed);
    Controller1.ButtonB.pressed(ControllerButtonBPressed);
    Controller1.ButtonX.pressed(ControllerButtonXPressed);
    Controller1.ButtonY.pressed(ControllerButtonYPressed);

    //callback functions for the bumbpers on the front of the controller
    Controller1.ButtonL1.pressed(ControllerButtonL1Pressed);
    Controller1.ButtonL2.pressed(ControllerButtonL2Pressed);
    Controller1.ButtonR1.pressed(ControllerButtonR1Pressed);
    Controller1.ButtonR2.pressed(ControllerButtonR2Pressed);

    //callback functions for the up,donw,left and right arrow buttons
    Controller1.ButtonUp.pressed(ControllerButtonUpPressed);
    Controller1.ButtonDown.pressed(ControllerButtonDownPressed);
    Controller1.ButtonLeft.pressed(ControllerButtonLeftPressed);
    Controller1.ButtonRight.pressed(ControllerButtonRightPressed);
    printf("Call back setup function compleated");
}


int main() {
    printf("Main loop started...");
    CallBackSetup();

    
    
    
    return 0;
}
