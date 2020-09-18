#include "UpperTriangular.h"

#include <iostream>

using namespace std;

UpperTriangular::UpperTriangular(int length) {
  this->length = length;
  set_A(new int[(get_length() * (get_length() + 1)) / 2]);
}

void UpperTriangular::Set(int i, int j, int x) {
  if (i <= j) {
    A[(j * (j - 1)) / 2 + (i - 1)] = x;
  }
}

int UpperTriangular::Get(int i, int j) {
  if (i <= j) {
    return A[(j * (j - 1)) / 2 + (i - 1)];
  }
  return 0;
}

void UpperTriangular::Display() {
  for (int i = 1; i <= get_length(); ++i) {
    for (int j = 1; j <= get_length(); ++j) {
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
int *UpperTriangular::get_A() { return this->A; }
void UpperTriangular::set_A(int *A) { this->A = A; }
int UpperTriangular::get_length() { return this->length; }
void UpperTriangular::set_length(int length) { this->length = length; }