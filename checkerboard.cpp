#include <iostream>

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
// * * * * * *
//  * * * * *

int main()
{
    std::cout << "Hello World!" << std::endl;
    int width;
    int height; 
    int wCount = 0;
    int hCount = 0;
    int alt = 0;
    int count = 0;

    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << "Enter Width: ";
    std::cin >> width;
    std::cout << height << " " << width << std::endl;
    
    while (height != hCount)
    {
        if (alt%2 == 0)
        {
            while (width != wCount)
            {
                if (count%2 == 0)
                {
                    std::cout << "*";
                }
                if (count%2 == 1)
                {
                    std::cout << " ";
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
                    std::cout << " ";
                }
                if (count%2 == 1)
                {
                    std::cout << "*";
                }

                count++;
                wCount++;
            }
        }




        count = 0;
        alt++;
        hCount++;
        wCount = 0;
        std::cout << "\n";
    }


    return 0;
}
