#include <iostream>
#include <string>
#include "box.h"
// Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

std::string lower (int height)
{
    std::string lower = "";
    int count = 1;
    int hCount = 0;
    while (hCount != height)
    {
        for (int i = 0; i != count; i++)
        {
            lower = lower + "*";

        }
        count++;
        lower = lower + "\n";
        hCount++;
    }
    return lower;
    
}

