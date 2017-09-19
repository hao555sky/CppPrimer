#include <iostream>
#include <typeinfo>

int main()
{
  const int i = 42; // const int
  auto j = i; // int 
  const auto &k = i; // const int &
  auto *p = &i; // const int * 对常量取地址是一种底层const
  const auto j2 = i, &k2 = i; // const int ; const int &

  std::cout << "i is " << typeid(i).name() << std::endl;
  std::cout << "j is " << typeid(j).name() << std::endl;
  std::cout << "k is " << typeid(k).name() << std::endl;
  std::cout << "p is " << typeid(p).name() << std::endl;
  std::cout << "j2 is " << typeid(j2).name() << std::endl;
  std::cout << "k2 is " << typeid(k2).name() << std::endl;

  std::cout << "i and j  have same type? "
            << std::is_same<decltype(i), decltype(j)>::value << "\n";
  std::cout << "i and k  have same type? "
            << std::is_same<decltype(i), decltype(k)>::value << "\n";
  std::cout << "i and j2 have same type? "
            << std::is_same<decltype(i), decltype(j2)>::value << "\n";
  std::cout << "j and j2 have same type? "
            << std::is_same<decltype(j), decltype(j2)>::value << "\n";
  std::cout << "k and k2 have same type? "
            << std::is_same<decltype(k), decltype(k2)>::value << "\n";

  return 0;
}