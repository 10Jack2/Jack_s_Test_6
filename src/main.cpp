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
motor motor1 = motor(PORT1, ratio18_1, false);
motor motor2 = motor(PORT2, ratio18_1, false);

ContorllerInputsClass ContorllerInputsobject;

//Setsup the callback events for each button on the contorller
//these are the functions that will be called when each button is pressed
//The functions are in a seperate object which is created from the the class above
void CallBackSetup(){
    printf("Call Back Setup function called...");
    //callback functions for A,B,X and Y buttons
    Controller1.ButtonA.pressed(ContorllerInputsobject.ControllerButtonAPressed);
    Controller1.ButtonB.pressed(ContorllerInputsobject.ControllerButtonBPressed);
    Controller1.ButtonX.pressed(ContorllerInputsobject.ControllerButtonXPressed);
    Controller1.ButtonY.pressed(ContorllerInputsobject.ControllerButtonYPressed);

    //callback functions for the bumbpers on the front of the controller
    Controller1.ButtonL1.pressed(ContorllerInputsobject.ControllerButtonL1Pressed);
    Controller1.ButtonL2.pressed(ContorllerInputsobject.ControllerButtonL2Pressed);
    Controller1.ButtonR1.pressed(ContorllerInputsobject.ControllerButtonR1Pressed);
    Controller1.ButtonR2.pressed(ContorllerInputsobject.ControllerButtonR2Pressed);

    //callback functions for the up,donw,left and right arrow buttons
    Controller1.ButtonUp.pressed(ContorllerInputsobject.ControllerButtonUpPressed);
    Controller1.ButtonDown.pressed(ContorllerInputsobject.ControllerButtonDownPressed);
    Controller1.ButtonLeft.pressed(ContorllerInputsobject.ControllerButtonLeftPressed);
    Controller1.ButtonRight.pressed(ContorllerInputsobject.ControllerButtonRightPressed);
    printf("Call back setup function compleated");
}


int main() {
    printf("Main loop started...");
    CallBackSetup();
    

    motor1.setVelocity(20,percent);
    motor2.setVelocity(50,percent);
    while(1) {
        motor1.spin(forward);
        motor2.spin(reverse);
        this_thread::sleep_for(1000);
        motor1.spin(reverse);
        motor2.spin(forward);
        this_thread::sleep_for(1000);
    }
    return 0;
}
