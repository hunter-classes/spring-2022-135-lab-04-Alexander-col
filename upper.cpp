#include <iostream>
#include <string>

std::string upper(int height)
{   
    std::string upper = "";
    int hCount;
    int space = 0;
    int count = height;
    while (hCount != height);
    {
        if (space > 0)
        {
            for (int i = 0; i != space; i++)
            {
                upper = upper + " ";
            }
            for (int a = 0; a != count; a++)
            {
                upper = upper + "*";
            }

        }
        else if (space = 0)
        {
            for (int k = 0; k != count; k++)
            {
                upper = upper + "*";
            }
        }


        space++;
        count--;
    }
    hCount++;
    return upper;
}


int main()
{
    std::cout << upper(5);
}