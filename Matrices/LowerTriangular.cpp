#include "LowerTriangular.h"

#include <iostream>

using namespace std;

LowerTriangular::LowerTriangular(int length) {
  this->length = length;
  set_A(new int[(get_length() * (get_length() + 1)) / 2]);
}

void LowerTriangular::Set(int i, int j, int x) {
  if (i >= j) {
    A[(i * (i - 1)) / 2 + (j - 1)] = x;
  }
}

int LowerTriangular::Get(int i, int j) {
  if (i >= j) {
    return A[(i * (i - 1)) / 2 + (j - 1)];
  }
  return 0;
}

void LowerTriangular::Display() {
  for (int i = 1; i <= get_length(); ++i) {
    for (int j = 1; j <= get_length(); ++j) {
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
int *LowerTriangular::get_A() { return this->A; }
void LowerTriangular::set_A(int *A) { this->A = A; }
int LowerTriangular::get_length() { return this->length; }
void LowerTriangular::set_length(int length) { this->length = length; }