#include "upper_triangular.h"

#include <iostream>

using namespace std;

UpperTriangular::UpperTriangular(int length) {
  this->length = length;
  setA(new int[(getLength() * (getLength() + 1)) / 2]);
}

void UpperTriangular::set(int i, int j, int x) {
  if (i <= j) {
    A[(j * (j - 1)) / 2 + (i - 1)] = x;
  }
}

int UpperTriangular::get(int i, int j) {
  if (i <= j) {
    return A[(j * (j - 1)) / 2 + (i - 1)];
  }
  return 0;
}

void UpperTriangular::display() {
  for (int i = 1; i <= getLength(); ++i) {
    for (int j = 1; j <= getLength(); ++j) {
      if (i <= j) {
        cout << A[(j * (j - 1)) / 2 + (i - 1)] << ' ';
      } else {
        cout << "0 ";
      }
    }
    cout << '\n';
  }
  cout << '\n';
}

// Getters and Setters
int *UpperTriangular::getA() { return this->A; }
void UpperTriangular::setA(int *A) { this->A = A; }
int UpperTriangular::getLength() { return this->length; }
void UpperTriangular::setLength(int length) { this->length = length; }