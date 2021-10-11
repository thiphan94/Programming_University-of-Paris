#include <iostream>
#include <vector>

using namespace std;

int main() {
  int i, j, n;
  std::cin >> n;
  std::vector<int> vector1;
  std::vector<int> vector2;
  //vector of result
  std::vector<int> vector_res;

  for(i = 0; i< 2*n; i++)
  {
    int number;
    std::cin>>number;
    if (i < n)
    {
      vector1.push_back(number);
    }
    else
    {
      vector2.push_back(number);
    }
  }
  for(j = 0; j < n; j++)
  {
    vector_res.push_back(vector1[j]*vector2[j]);
  }

  for (auto it = vector_res.begin(); it != vector_res.end(); ++it)
  {
    std::cout << *it;
    //print space while index of value is smaller n-1
    if (it < vector_res.end()-1)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}
