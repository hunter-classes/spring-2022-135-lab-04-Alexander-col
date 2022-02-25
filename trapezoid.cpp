
#include <iostream>
#include "trapezoid.h"


std::string trapezoid(int width, int height) 
{ 
    std::string answer = "";
    int space = 0; 

    int symb = width; 
    

    if(width / 2 >= height || (width + 1) / 2 >= height) // to catch the measurments that are unable to be a trapezoid
    { 
        for(int i = 0; i != height; i++) 
        { 
            for(int j = space; j != 0; j--) 
            { 
                answer += " "; 
            }

            for(int k = symb; k != 0; k--) 
            { 
                answer += "*";
            }
            
            symb -= 2;
            answer += "\n";
            space += 1;
        }
    } else 
    { 
        return "Impossible shape!"; //unable to be trapezoid 
    }


    return answer;
}

