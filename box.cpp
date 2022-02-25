#include <iostream>

// Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

// Also, print a line Shape: between user input and the printed shape (to separate input from output).

int main()

{
    int width;
    int height; 
    int wCount = 0;
    int hCount = 0;
    std::cout << "Enter a value for the width: ";
    std::cin >> width;
    std::cout << "Enter a value for the height: ";
    std::cin >> height;
    std::cout << width << "\n" << height << "\n" << std::endl;

    while (hCount != height)
    {
        while (wCount != width)
        {
            std::cout << "*";
            wCount++;
        }
        
        std::cout << "\n";
        wCount = 0;
        hCount++;

    }



    return 0;
}