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

controller Controller1 = controller(primary);

// define your global instances of motors and other devices here
motor motor1 = motor(PORT1, ratio18_1, false);
motor motor2 = motor(PORT2, ratio18_1, false);

ContorllerInputsClass ContorllerInputsobject;

int main() {
    Controller1.ButtonA.pressed(ContorllerInputsobject.ControllerButtonAPressed);
    

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
