#include "Array.hpp"
#include "iostream"

int main(void) {

  try {
    Array<std::string> stringArr(3);
    Array<int> intArr(3);
    const Array<int> carr(4);

    std::cout << carr[2] << std::endl;

    intArr[0] = 0;
    intArr[1] = 1;
    intArr[2] = 2;

    stringArr[0] = "mohamed";
    stringArr[1] = "said";
    stringArr[2] = "kamal";

    Array<std::string> copyStringArr(stringArr);
    // copyArr = arr;

    std::cout << "------------------ ------------------" << std::endl;

    size_t i = 0;
    while (i < intArr.size()) {
      std::cout << intArr[i] << std::endl;
      i++;
    }

    std::cout << "------------------ copy arr ------------------" << std::endl;
    i = 0;
    while (i < copyStringArr.size()) {
      std::cout << copyStringArr[i] << std::endl;
      i++;
    }
    std::cout << "------------------ ------------------" << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}

// #include "Array.hpp"
// #include <iostream>
// #include <stdlib.h>

// #define MAX_VAL 750

// int main(int, char **) {
//   Array<int> numbers(MAX_VAL);
//   int *mirror = new int[MAX_VAL];
//   srand(time(NULL));
//   for (int i = 0; i < MAX_VAL; i++) {
//     const int value = rand();
//     numbers[i] = value;
//     mirror[i] = value;
//   }
//   // SCOPE
//   {
//     Array<int> tmp = numbers;
//     Array<int> test(tmp);
//   }

//   for (int i = 0; i < MAX_VAL; i++) {
//     if (mirror[i] != numbers[i]) {
//       std::cerr << "didn't save the same value!!" << std::endl;
//       return 1;
//     }
//   }
//   try {
//     numbers[-2] = 0;
//   } catch (const std::exception &e) {
//     std::cerr << e.what() << '\n';
//   }
//   try {
//     numbers[MAX_VAL] = 0;
//   } catch (const std::exception &e) {
//     std::cerr << e.what() << '\n';
//   }

//   for (int i = 0; i < MAX_VAL; i++) {
//     numbers[i] = rand();
//   }
//   delete[] mirror; //
//   return 0;
// }
