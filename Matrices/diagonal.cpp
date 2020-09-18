#include "diagonal.h"

#include <iostream>

using namespace std;

Diagonal::Diagonal(int length) {
  this->length = length;
  set_A(new int[get_length()]);
}

void Diagonal::Set(int i, int j, int x) {
  if (i == j) {
    A[i - 1] = x;
  }
}

int Diagonal::Get(int i, int j) {
  if (i == j) {
    return A[i - 1];
  }
  return 0;
}

void Diagonal::Display() {
  for (int i = 0; i < get_length(); ++i) {
    for (int j = 0; j < get_length(); ++j) {
      if (i == j) {
        cout << A[i] << ' ';
      } else {
        cout << "0 ";
      }
    }
    cout << '\n';
  }
  cout << '\n';
}

// Getters and Setters
int *Diagonal::get_A() { return this->A; }
void Diagonal::set_A(int *A) { this->A = A; }
int Diagonal::get_length() { return this->length; }
void Diagonal::set_length(int length) { this->length = length; }