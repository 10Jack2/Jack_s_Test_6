
#include "vex.h"
#include "string"


class ScreenPrintingClass {
    public:

    void(string TextToPrint){
        int y_offset = 0;
        int x_offset = 0;
        for (int i = 0; i < len(TextToPrint); i += 1) {
            if(TextToPrint[i] = "\n") {
                y_offset += 20;
                x_offset = 0;
            } else {
                Brain.Screen.printAt(x_offset, y_offset,TextToPrint[i]);
                x_offset += 4;
            }
            if(x_offset > 420){
                y_offset += 20;
                x_offset = 0;
            }
            if(y_offset > 280){
                Brain.Screen.clearScreen (void)
            }
            
        }
    }

    private:
    


};

