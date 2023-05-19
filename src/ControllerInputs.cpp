#include "vex.h"
#include "RobotConfig.h"
#include "MotorOutputs.cpp"

 class ContorllerInputsClass{
    public:
    //-----------A,B,X & Y buttons-----------------------------

    static void ControllerButtonAPressed(void){
        Brain.Screen.printAt(10, 20, "A button pressed !!!" );
        printf("A button pressed !!!");
    };
    static void ControllerButtonBPressed(void){
        Brain.Screen.printAt(10, 20, "B button pressed !!!" );
        printf("B button pressed !!!");
    };
    static void ControllerButtonXPressed(void){
        Brain.Screen.printAt(10, 20, "X button pressed !!!" );
        printf("X button pressed !!!");
    };
    static void ControllerButtonYPressed(void){
        Brain.Screen.printAt(10, 20, "Y button pressed !!!" );
        printf("Y button pressed !!!");
    };
    //-----------Bumper buttons--------------------------------

    static void ControllerButtonL1Pressed(void){
        Brain.Screen.printAt(10, 20, "L1 button pressed !!!" );
        printf("L1 button pressed !!!");
    };
    static void ControllerButtonL2Pressed(void){
        Brain.Screen.printAt(10, 20, "L2 button pressed !!!" );
        printf("L2 button pressed !!!");
    };
    static void ControllerButtonR1Pressed(void){
        Brain.Screen.printAt(10, 20, "R1 button pressed !!!" );
        printf("R1 button pressed !!!");
    };
    static void ControllerButtonR2Pressed(void){
        Brain.Screen.printAt(10, 20, "R2 button pressed !!!" );
        printf("R2 button pressed !!!");
    };
    //-----------Up,Down,<,> buttons---------------------------

    static void ControllerButtonUpPressed(void){
        Brain.Screen.printAt(10, 20, "Up button pressed !!!" );
        printf("Up button pressed !!!");
    };
    static void ControllerButtonDownPressed(void){
        Brain.Screen.printAt(10, 20, "Down button pressed !!!" );
        printf("Down button pressed !!!");
    };
    static void ControllerButtonLeftPressed(void){
        Brain.Screen.printAt(10, 20, "Left button pressed !!!" );
        printf("Left button pressed !!!");
    };
    static void ControllerButtonRightPressed(void){
        Brain.Screen.printAt(10, 20, "Right button pressed !!!" );
        printf("Right button pressed !!!");
    };
    private:

};







