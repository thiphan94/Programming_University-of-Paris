#include <iostream>
#include <vector>
using namespace std;


int main() {
  int itcount = 0;
  int count, x;
  float total = 0;
  std::cout << "How many number?" << std::endl;
  std::cin >> count;
  std::vector<int>  v (count,0);
  for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
  {
    std::cout << "What is the input number " << itcount << "?" << std::endl;
    std::cin>>*it;
    ++itcount;
  }

  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
  {
      total += *it;
  }
  std::cout << "The average is " <<  total/count << std::endl;

  return 0;
}
