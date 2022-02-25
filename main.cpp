#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"
int main()
{
        // box(width, height); Task A
    std::cout << "Task A:\n";

    std::cout << "box(3,5):\n";
    std::cout << box(5,5);

    std::cout << "box(7,4):\n";
    std::cout << box(8,8);

    std::cout << "box(6,6):\n";
    std::cout << box(3,7);

    std::cout << "\n------------------\n"; // seperator

    // checkerboard(width, height); Task B
    std::cout << "Task B:\n"; 

    std::cout << "checkerboard(23, 3):\n";
    std::cout << checkerboard(23, 3);

    std::cout << "checkerboard(7, 4):\n";
    std::cout << checkerboard(7, 4);

    std::cout << "checkerboard(9, 3):\n";
    std::cout << checkerboard(9, 3);

    std::cout << "\n------------------\n"; // seperator

    // cross(size); Task C
    std::cout << "Task C:\n";

    std::cout << "cross(7):\n"; 
    std::cout << cross(7); 

    std::cout << "cross(3):\n"; 
    std::cout << cross(3); 

    std::cout << "cross(12):\n"; 
    std::cout << cross(12); 

    std::cout << "\n------------------\n"; // seperator

    // lower(length): Task D
    std::cout << "Task D:\n";

    std::cout << "lower(3):\n"; 
    std::cout << lower(3); 

    std::cout << "lower(7)\n";
    std::cout << lower(7); 

    std::cout << "lower(5)\n"; 
    std::cout << lower(5);

    std::cout << "\n------------------\n"; // seperator

    // upper(length): Task E
    std::cout << "Task E:\n";

    std::cout << "upper(3):\n";
    std::cout << upper(3);

    std::cout << "upper(2):\n";
    std::cout << upper(2);
    
    std::cout << "upper(9):\n";
    std::cout << upper(9);

    std::cout << "\n------------------\n"; // seperator

    // trapezoid(width, height): Task F
    std::cout << "Task F:\n";

    std::cout << "trapezoid(24, 10):\n"; 
    std::cout << trapezoid(24, 10);

    std::cout << "trapezoid(10, 6):\n";
    std::cout << trapezoid(10, 6);

    std::cout << "trapezoid(12, 7):\n";
    std::cout << trapezoid(6, 3);

    std::cout << "\n------------------\n"; // seperator
 
    // checkerboard3x3(width, height): Task G
    std::cout << "Task G:\n";
    std::cout << "checkerboard3x3(6, 6):\n";
    std::cout << checkerboard3x3(6,6);

    std::cout << "checkerboard3x3(12, 3):\n";
    std::cout << checkerboard3x3(12,3);

    std::cout << "checkerboard3x3(13, 5):\n";
    std::cout << checkerboard3x3(13,5);
return 0;

}