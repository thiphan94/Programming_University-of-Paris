#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

void go_through(std::vector<std::string> a)
{
  for (std::vector<std::string>::iterator it = a.begin(); it != a.end(); ++it)
  {
      *it = "test2";
  }
}


void go_through_ref(std::vector<std::string>& a)
{
  for (std::vector<std::string>::iterator it = a.begin(); it != a.end(); ++it)
  {
      *it = "test2";
  }
}

int main() {
  std::vector<std::string> a(100000000, "test");
  std::time_t timer = std::time(nullptr);
  go_through(a);
  std::cout<<"Passage par valeur: "<<std::time(nullptr) - timer<<"s"<<std::endl;
  timer = std::time(nullptr);
  go_through_ref(a);
  std::cout<<"Passage par reference:"<<std::time(nullptr) - timer <<"s"<<std::endl;
  return 0;
}
