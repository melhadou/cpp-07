#pragma once

#include <cstddef>

template <typename Adrr, typename Func>
void iter(Adrr &arr, size_t length, Func func) {
  for (size_t i = 0; i < length; i++) {
    func(arr[i]);
  }
}
