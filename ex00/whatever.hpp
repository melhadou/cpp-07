#pragma once

template <typename T> void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T> T min(T one, T two) {
  if (one < two)
    return one;
  return two;
}

template <typename T> T max(T one, T two) {
  if (one > two)
    return one;
  return two;
}
