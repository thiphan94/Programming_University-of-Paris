#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    std::string buffer;
    std::string tmp = "";
    std::ifstream input_file;

    input_file.open("input.txt");
    if (input_file.is_open())
    {
      while (!input_file.eof())
      {
        std::getline(input_file, buffer);
        std::cout << buffer << std::endl;
      }
      std::cout << "=====" << std::endl;
      input_file.close();
    }

    input_file.open("input.txt");
    if (input_file.is_open())
    {
        while (input_file >> buffer)
        {
          std::cout << buffer << std::endl;
        }
      input_file.close();
    }
    return 0;
}
