#include <iostream>
#include <vector>

template <typename T>
std::vector<T> mul(std::vector<T> a, std::vector<T> b)
{
  typename std::vector<T> res(a.size());
  typename std::vector<T>::iterator it = a.begin();
  typename std::vector<T>::iterator it2 = b.begin();
  typename std::vector<T>::iterator it3 = res.begin();
  while (it != a.end())
  {
    *it3 = *it * *it2;
    ++it; ++it2; ++it3;
  }
  return res;
}

int main
{
  std::vector<int> a(100,2);
  std::vector<int> b(100,2);
  std::vector<int> res= mul<int>(a,b);
  std::cout << res[0] << std::endl;

  std::vector<float> af(100,2,5);
  std::vector<float> bf(100,2,5);
  std::vector<int> resf= mul<float>(af,bf);
  std::cout << resf[0] << std::endl;
  return 0;
}
