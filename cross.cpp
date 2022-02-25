#include <iostream>

int main()
{
  int height;
  int hCount = 0;
  std::cin >> height;
  int dis = (height - 2);
  int fordis = 0;

  while (hCount != height)
  {
    std::cout << "X";
    if (dis > 0)
      {
        for (int i= 0; i != fordis; i++)
          {
            std::cout << " ";
          }
        for (int i= 0; i != dis; i++)
          {
            std::cout << " ";
          }
      }
      std::cout << "X";
      std::cout << "\n" << std::endl;
      dis--;
      hCount++;
      fordis++;
  }


  return 0;
}