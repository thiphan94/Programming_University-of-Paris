#include <iostream>

using namespace std;

int main() {
  int i, j, n;

  std::cin >> n;
  int space = n;
  if (n <= 2)
  {
    std::cout << "Tree is too small." << std::endl;
  }
  else
  {
    for(i = 0; i<=n; i++)
    {
      //draw the top of the tree
      if (i < n)
      {
        for (j=0; j<(n-i)-1; j++)
        {
            std::cout << " ";
        }
        for (j=0; j< (2*i+1); j++)
        {
            std::cout << "*";
        }
      }
      //draw the bottom of the tree
      else
      {
        for (j=0; j <= n; j++)
        {
            if (j == n - 2 | j == n)
            {
              std::cout << "|";

            }
            else
            {
              std::cout << " ";
            }
        }
      }
    std::cout << std::endl;
    }
  }
  return 0;
}
