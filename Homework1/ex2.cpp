#include <iostream>

using namespace std;

int main() {
  int i, j;
  //array of answers
  const char *res[9] = {"c","c","a","d","a","a","b","b","b"};
  std::string answer;
  int question[5];
  for(i = 0; i<5; i++)
  {
    std::cin >> question[i];
  }
  for(j = 0; j<5; j++)
  {
    answer += res[question[j]-1];
  }
  for(j = 0; j<5; j++)
  {
    std::cout << answer[j];
    if (j < 4)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}
