#include <iostream>

template <class T>
class Addition {
   private:
    T a, b;
   public:
    Addition(T n1, T n2);
    T doSum();
};

template <class T>
Addition<T>::Addition(T n1, T n2)
{
  a = n1;
  b = n2;
}

template < class T>
T Addition<T>::doSum ()
{
  return a + b;
}


int main() {
  int a,b;
  std::cout << "Enter integers" << std::endl;
  std::cin>>a>>b;
  Addition<int> myObj(a,b);
  std::cout << myObj.doSum() <<std::endl;
  return 0;
}
