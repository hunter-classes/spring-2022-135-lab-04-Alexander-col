#include <iostream>
std::string checkerboard3x3(int width, int height) { 
    std::string answer = ""; 

    bool three_star = true, three_space = false;
    int stars = 0;
    int spaces = 0;

    // used for col
    bool line = true; 
    int line_count = 0; 

    for(int i = 0; i != height; i++)  
    {
        line_count++;

        for(int j = 0; j < width; j++) 
        { 
            if(stars == 3) { 
                three_star = !three_star;
                three_space = !three_space; 
                stars = 0; 
            }

            if(spaces == 3) 
            { 
                three_star = !three_star; 
                three_space = !three_space; 
                spaces = 0; 
            }

            if(three_star)
             { 
                answer += "*";
                stars++;
            }
            
            if(three_space)
             { 
                answer += " ";
                spaces++;
            }
        }

        if(line_count > 5) 
        { 
            line = true; 
            line_count = 0; 
        }

        if(line_count < 3 && line) 
        { 
            three_star = true;
            three_space = false;
            if(line_count == 3) 
            { 
                line = !line; 
            }
        } else { 
            three_star = false;
            three_space = true;
        }

        answer += "\n"; 
        spaces = 0; 
        stars = 0;               
    }

    return answer;
}