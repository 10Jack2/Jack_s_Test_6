#include "vex.h"
#include "RobotConfig.h"


 class ContorllerInputsClass{
    public:

    static void ControllerButtonAPressed(void){
        Brain.Screen.printAt(10, 20, "A button pressed !!!" );
        motor1.spin(vex::forward);
    };
    static void ControllerButtonBPressed(void){
        Brain.Screen.printAt(10, 20, "B button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonXPressed(void){
        Brain.Screen.printAt(10, 20, "X button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonYPressed(void){
        Brain.Screen.printAt(10, 20, "Y button pressed !!!" );
        Brain.Screen.clearScreen();
    };


    static void ControllerButtonL1Pressed(void){
        Brain.Screen.printAt(10, 20, "L1 button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonL2Pressed(void){
        Brain.Screen.printAt(10, 20, "L2 button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonR1Pressed(void){
        Brain.Screen.printAt(10, 20, "R1 button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonR2Pressed(void){
        Brain.Screen.printAt(10, 20, "R2 button pressed !!!" );
        Brain.Screen.clearScreen();
    };


    static void ControllerButtonUpPressed(void){
        Brain.Screen.printAt(10, 20, "Up button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonDownPressed(void){
        Brain.Screen.printAt(10, 20, "Down button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonLeftPressed(void){
        Brain.Screen.printAt(10, 20, "Left button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    static void ControllerButtonRightPressed(void){
        Brain.Screen.printAt(10, 20, "Right button pressed !!!" );
        Brain.Screen.clearScreen();
    };
    private:
};







