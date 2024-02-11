#include "Array.hpp"
#include "iostream"

int main(void) {

  try {

    Array<int> arr(3);
    Array<int> axrr(3);

    const Array<int> carr(1);

    std::cout << carr[0] << std::endl;

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;

    std::cout << "------------------ ------------------" << std::endl;

    size_t i = 0;
    while (i < arr.size()) {
      std::cout << arr[i] << std::endl;
      i++;
    }
    std::cout << "------------------ ------------------" << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
