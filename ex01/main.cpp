#include "iostream"
#include "iter.hpp"

template <typename T> void raise(T &a) { a += 65; }

int main(void) {
  int arr[4] = {0, 1, 2, 3};                        // used on int
  std::string strArr[4] = {"m_", "o_", "s_", "t_"}; // other type then int

  std::cout << "--------------  --------------" << std::endl;

  iter(arr, 4, raise<int>);

  std::cout << arr[0] << std::endl;
  std::cout << arr[1] << std::endl;
  std::cout << arr[2] << std::endl;
  std::cout << arr[3] << std::endl;

  std::cout << "--------------  --------------" << std::endl;

  iter(strArr, 4, raise<std::string>);

  std::cout << strArr[0] << std::endl;
  std::cout << strArr[1] << std::endl;
  std::cout << strArr[2] << std::endl;
  std::cout << strArr[3] << std::endl;

  std::cout << "--------------  --------------" << std::endl;
}
