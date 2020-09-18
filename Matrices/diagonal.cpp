#include "diagonal.h"

#include <iostream>

using namespace std;

Diagonal::Diagonal(int length) {
  this->length = length;
  set_A(new int[get_length()]);
}

void Diagonal::set(int i, int j, int x) {
  if (i == j) {
    A[i - 1] = x;
  }
}

int Diagonal::get(int i, int j) {
  if (i == j) {
    return A[i - 1];
  }
  return 0;
}

void Diagonal::display() {
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
int *Diagonal::getA() { return this->A; }
void Diagonal::setA(int *A) { this->A = A; }
int Diagonal::getLength() { return this->length; }
void Diagonal::setLength(int length) { this->length = length; }