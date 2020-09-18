#include "Array.h"
#include <bits/stdc++.h>

using namespace std;

Array::Array(int length) {
  this->length = length;
  setA(new int[getLength()]);
}

void Array::display() {
  cout << "Array elements: ";
  for (int i = 0; i < getLength(); ++i) {
    cout << A[i] << " ";
  }
  cout << '\n';
}

void Array::append(int element) {
  increase_length();
  A[getLength() - 1] = element;
}

void Array::increase_length() {
  int *B = new int[getLength() + 1];
  for (int i = 0; i < getLength(); ++i) {
    B[i] = A[i];
  }
  delete[] A;
  A = B;
  B = NULL;
  setLength(getLength() + 1);
}

void Array::insert(int element, int index) {
  if (index >= 0 && index < getLength()) {
    increase_length();
    for (int i = getLength() - 1; i >= index; --i) {
      A[i] = A[i - 1];
    }
    A[index] = element;
  }
}

void Array::delete_at(int index) {
  if (index >= 0 && index < getLength()) {
    for (int i = index; i < getLength(); ++i) {
      A[i] = A[i + 1];
    }
    setLength(getLength() - 1);
  }
}

int Array::search(int key) {
  for (int i = 0; i < getLength(); ++i) {
    if (A[i] == key) {
      // swap(&A[i], &A[i - 1]); // Transiposition
      // swap(&A[i], &A[0]); // Move to head
      return i;
    }
  }
  return -1;
}

int Array::binary_search(int key) {
  int *B = new int[getLength()];
  for (int i = 0; i < getLength(); ++i) {
    B[i] = A[i];
  }

  cout << "B Array Elements: ";
  for (int i = 0; i < getLength(); ++i) {
    cout << B[i] << " ";
  }
  cout << '\n';

  sort(B, B + getLength());

  int l = 0;
  int h = getLength() - 1;
  int mid;

  while (l <= h) {
    mid = (l + h) / 2;

    if (key == A[mid]) {
      return mid;
    } else if (key < A[mid]) {
      h = mid - 1;
    } else if (key > A[mid]) {
      l = mid + 1;
    }
  }
  return -1;
}

void Array::swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int Array::get(int index) {
  if (index >= 0 && index < getLength()) {
    return A[index];
  }
  return -1;
}

void Array::set(int index, int value) {
  if (index >= 0 && index < getLength()) {
    A[index] = value;
  }
}

int Array::max() {
  int max = A[0];

  for (int i = 1; i < getLength(); i++) {
    if (A[i] > max) {
      max = A[i];
    }
  }
  return max;
}

int Array::min() {
  int min = A[0];

  for (int i = 0; i < getLength(); i++) {
    if (A[i] < min) {
      min = A[i];
    }
  }
  return min;
}

int Array::sum() {
  int sum = 0;
  for (int i = 0; i < getLength(); i++) {
    sum += A[i];
  }
  return sum;
}

double Array::avg() {
  return sum() / getLength();
}

void Array::reverse() {
  int B[getLength()];

  for (int i = 0, j = getLength() - 1; i < getLength(), j >= 0; i++, j--) {
    B[j] = A[i];
  }

  for (int i = 0; i < getLength(); i++) {
    A[i] = B[i];
  }
}

void Array::reverse2() {
  for (int i = 0, j = getLength() - 1; i < j; i++, j--) {
    swap(&A[i], &A[j]);
  }
}

void Array::left_shift() {
  for (int i = 1; i <= getLength(); i++) {
    A[i - 1] = A[i];
  }
}

void Array::right_shift() {
  for (int i = getLength() - 1; i >= 0; i--) {
    A[i] = A[i - 1];
  }
}

void Array::left_rotation() {
  int first = A[0];
  left_shift();
  A[getLength() - 1] = first;
}

void Array::right_rotation() {
  int last = A[getLength() - 1];
  right_shift();
  A[0] = last;
}

void Array::insert_in_sorted(int value) {
  increase_length();
  int i = getLength() - 1;
  while (A[i] > value) {
    A[i + 1] = A[i];
    i--;
  }
  A[i + 1] = value;
}

void Array::check_sorted() {
  int flag = 1;
  for (int i = 0; i < getLength() - 1; i++) {
    if (A[i] > A[i + 1]) {
      flag = 0;
      break;
    }
  }
  if (flag == 1) {
    cout << "Array is sorted!! ✔" << '\n';
  } else {
    cout << "Array not sorted!! ❌" << '\n';
  }
}

void Array::negative_one_side() {
  int i = 0, j = getLength() - 1;
  while (i < j) {
    while (A[i] < 0) {
      i++;
    }
    while (A[j] >= 0) {
      j--;
    }
    if (i < j) {
      swap(&A[i], &A[j]);
    }
  }
}

int Array::getLength() {
  return this->length;
}

int *Array::getA() {
  return this->A;
}

void Array::setLength(int length) {
  this->length = length;
}

void Array::setA(int *A) {
  this->A = A;
}