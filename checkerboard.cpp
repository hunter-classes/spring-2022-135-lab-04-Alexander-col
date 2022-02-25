#include <iostream>

// Write a program checkerboard.cpp that asks the user 
// to input width and height and prints a rectangular checkerboard of 
// the requested size using asterisks and spaces (alternating).

// Example:

// Input width: 11

// Input height: 6

 

// Shape:
// * * * * * *
//  * * * * * 
// * * * * * *
//  * * * * *
// * * * * * *
//  * * * * *

int main()
{
    std::cout << "Hello World!" << std::endl;
    int width;
    int height; 
    int wCount = 0;
    int hCount = 0;
    std::cin >> width;
    std::cout << (width/2) << "\n";

    return 0;
}
