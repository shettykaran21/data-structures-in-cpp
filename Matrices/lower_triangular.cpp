#include "lower_triangular.h"

#include <iostream>

using namespace std;

LowerTriangular::LowerTriangular(int length) {
  this->length = length;
  setA(new int[(getLength() * (getLength() + 1)) / 2]);
}

void LowerTriangular::set(int i, int j, int x) {
  if (i >= j) {
    A[(i * (i - 1)) / 2 + (j - 1)] = x;
  }
}

int LowerTriangular::get(int i, int j) {
  if (i >= j) {
    return A[(i * (i - 1)) / 2 + (j - 1)];
  }
  return 0;
}

void LowerTriangular::display() {
  for (int i = 1; i <= getLength(); ++i) {
    for (int j = 1; j <= getLength(); ++j) {
      if (i >= j) {
        cout << A[i * (i - 1) / 2 + (j - 1)] << ' ';
      } else {
        cout << "0 ";
      }
    }
    cout << '\n';
  }
  cout << '\n';
}

// Getters and Setters
int *LowerTriangular::getA() { return this->A; }
void LowerTriangular::setA(int *A) { this->A = A; }
int LowerTriangular::getLength() { return this->length; }
void LowerTriangular::setLength(int length) { this->length = length; }