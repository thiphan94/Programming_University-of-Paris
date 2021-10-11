#include <iostream>
using namespace std;

class Addition {
  int a,b;
  public:
    Addition(int number1, int number2) {
        a = number1;
        b = number2;
    }
    int doSum(){return a+b;}
};

int main() {
  int a,b;
  std::cout << "Enter integers" << std::endl;
  std::cin>>a>>b;
  Addition myObj(a,b);
  std::cout << myObj.doSum() <<std::endl;
  return 0;
}
