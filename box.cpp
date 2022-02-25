#include <iostream>
#include <string>
#include "box.h"
// Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

// Also, print a line Shape: between user input and the printed shape (to separate input from output).

std::string box(int width, int height)
{
    std::string box = "";
    int wCount = 0;
    int hCount = 0;

    while (hCount != height)
    {
        while (wCount != width)
        {
            box = box + "*";
            wCount++;
        }
        
        box + "\n";

        wCount = 0;
        hCount++;
        
        box = box + "\n";

    }

    return box;
}
