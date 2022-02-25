#include <iostream> 
#include <string> 



std::string cross(int height) { 
    
    std::string result = ""; 

    for(int i = 0; i < height; i++) 
    { 
        for(int j = 0; j < height; j++) 
        { 
            if(j == i || j == height - 1 - i) 
            { 
                result += "*"; 
            } else { 
                result += " ";
            }
        }

        result += "\n";
    }

    return result; 
}

