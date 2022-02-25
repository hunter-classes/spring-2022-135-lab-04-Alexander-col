#include <iostream>
#include <string>
#include "upper.h"
std::string upper(int height) 
{ 
    std::string answer = ""; 
    for(int row = 1; row <= height; row++) 
    { 
        for(int col = 1; col <= height; col++) 
        { 
            if(row <= col) 
            { 
                answer = answer + "*";
            } else 
            { 
                answer = answer + " ";
            }
        }

        answer = answer + "\n";
    }

    return answer; 
}

