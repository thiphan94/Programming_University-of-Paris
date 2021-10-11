#include <iostream>
#include <exception>
using namespace std;


int main() {
  int i, j, n;
  std::cout << "How many number?" << std::endl;
  std::cin >> n;
  int *table;
  try {table = new int[n];}
  catch (bad_alloc& e)
  {
    std::cout << "Cannot allocate!" << std::endl;
    return 1;
  }
  for(i = 0; i<n; i++)
  {
    std::cout << "What is the input number " << i << "?" << std::endl;
    std::cin>>table[i];
  }
  std::cout << "This is your array" << std::endl;
  for (j=0; j<n; j++)
    {
        std::cout << table[j] << "; ";
    }
  std::cout << std::endl;
  delete[] table;

  return 0;
}
