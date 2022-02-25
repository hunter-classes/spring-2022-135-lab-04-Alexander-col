#include <iostream>
#include <string>
#include "checkerboard.h"
// Write a program checkerboard.cpp that asks the user 
// to input width and height and prints a rectangular checkerboard of 
// the requested size using asterisks and spaces (alternating).

// Example:

// Input width: 11

// Input height: 6

 // Planning to do if divisable by 2 then it will appear a star 

// Shape:
// * * * * * *
//  * * * * * 
// * * * * * *
//  * * * * *
// * * * * * *checkerboard
//  * * * * *

std::string checkerboard(int width, int height){
    std::string cb = "";
    int wCount = 0;
    int hCount = 0;
    int alt = 0;
    int count = 0;
    
    while (height != hCount)
    {
        if (alt%2 == 0)
        {
            while (width != wCount)
            {
                if (count%2 == 0)
                {
                    cb = cb + "*";
                }
                if (count%2 == 1)
                {
                    cb = cb + " ";
                }
                count++;
                wCount++;
            }
        }
        else if (alt%2 == 1)
        {
            while(width != wCount)
            {
                if (count%2 == 0)
                {
                    cb = cb + " ";
                }
                if (count%2 == 1)
                {
                    cb = cb + "*";
                }

                count++;
                wCount++;
            }
        }




        count = 0;
        alt++;
        hCount++;
        wCount = 0;
        cb = cb + "\n";
    }


    return cb;
}

