#pragma once

#include <cstddef>
#include <stdexcept>

template <typename T> class Array {
private:
  size_t arr_size;
  T *arr;

public:
  Array<T>();
  Array<T>(unsigned int n);
  Array<T>(Array<T> const &rhs);
  Array<T> &operator=(Array<T> const &rhs);
  ~Array<T>();

  T &operator[](size_t index);
  const T &operator[](size_t index) const;
  size_t size() const;
};

template <typename T> Array<T>::Array() : arr_size(0) {
  this->arr = new T[0]();
}
template <typename T> Array<T>::Array(unsigned int n) : arr_size(n) {
  this->arr = new T[n]();
}

template <typename T> Array<T>::Array(Array<T> const &rhs) {
  for (size_t i = 0; i < this->arr_size; i++) {
    if (rhs.arr[i])
      this->arr[i] = rhs.arr[i];
  }
}

template <typename T> Array<T> &Array<T>::operator=(Array<T> const &rhs) {
  if (this != &rhs) {
    if (this->arr)
      delete this->arr;
    this->arr = new T[rhs.arr_size]();
    this->arr_size = rhs.arr_size;
    for (size_t i = 0; i < this->arr_size; i++) {
      if (rhs.arr[i])
        this->arr = rhs.arr[i];
    }
  }
  return *this;
}

template <typename T> size_t Array<T>::size() const { return this->arr_size; }

template <typename T> const T &Array<T>::operator[](size_t index) const {
  if (index >= this->arr_size)
    throw std::out_of_range("Index out of range");
  return this->arr[index];
}

template <typename T> T &Array<T>::operator[](size_t index) {
  if (index >= this->arr_size)
    throw std::out_of_range("Index out of range");
  return this->arr[index];
}

template <typename T> Array<T>::~Array() {
  if (this->arr)
    delete[] this->arr;
}
