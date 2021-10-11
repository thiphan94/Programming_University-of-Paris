#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(int argc, char**argv) {
  int j, n,number;
  std::cout << "How many number?" << std::endl;
  std::cin >> n;
  int *table;
  try {table = new int[n];}
  catch (bad_alloc& e)
  {
    std::cout << "Cannot allocate!" << std::endl;
    return 1;
  }
  for (size_t i = 0; i < n; ++i)
  {

    std::cout << "What is the input number " << i << "?" << std::endl;

    std::cin>>number;
    table[i] = number;
  }


  cout << "\nUnsorted array:" << endl;
  for(size_t i = 0; i < n; ++i)
      cout << table [i] << " ";
  return 0;
}
