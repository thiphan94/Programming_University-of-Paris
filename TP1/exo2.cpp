#include <iostream>
#include <string>
using namespace std;


int main() {
    std::cout << "Which string do you want to print?" << std::endl;
    std::string n;
    std::getline(std::cin,n);
    for(int i = 0; i<n.length() + 4; ++i)
      std::cout << "*" ;
    std::cout << std::endl;
    std::cout << "* " << n << " *" << std::endl;
    for(int i = 0; i<n.length() + 4; ++i)
      std::cout << "*" ;
    std::cout << std::endl;
    return 0;
}
