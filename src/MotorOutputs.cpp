#include "vex.h"
#include "RobotConfig.h"

class MotorOutputsClass {
    public:

    void FlipDirectionMotor1(){
        vex::directionType DirectionMotor1 = motor1.direction();
        if(DirectionMotor1 == vex::reverse){
            motor1.spin(vex::forward);
        }else{
            motor1.spin(vex::reverse);
        };
    }

    private:




};

