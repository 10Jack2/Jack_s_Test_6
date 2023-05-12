
#include "vex.h"
#include "string"
#include ""

class ScreenPrintingClass {
    public:

    void PrintToScreen(std::string TextToPrint,vex::brain Brain){
        for (int i = 0; i < TextToPrint.length; i += 1) {
            if(TextToPrint[i] == "\n") {
                Yoffset += 20;
                Xoffset = 0;
            } else {
                Brain.Screen.printAt(Xoffset, Yoffset,TextToPrint[i]);
                Xoffset += 4;
            }
            if(x_offset > 420){
                Yoffset += 20;
                Xoffset = 0;
            }
            if(Yoffset > 280){
                Brain.Screen.clearScreen (void)
            }
            
        }
    }

    private:
    int Yoffset = 0;
    int Xoffset = 0;
    


};
