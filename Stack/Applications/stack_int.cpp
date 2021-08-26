#include "stack_int.h"

#include <iostream>

using namespace std;

StackInt::StackInt(int size) {
  this->size = size;
  this->s = new int[size];
  this->top = -1;
}

void StackInt::display() {
  for (int i = getTop(); i >= 0; --i) {
    cout << this->s[i] << ' ';
  }
  cout << '\n';
}

void StackInt::push(int x) {
  if (isFull()) {
    cout << "Stack Overflow\n";
  } else {
    setTop(getTop() + 1);
    this->s[getTop()] = x;
  }
}

int StackInt::pop() {
  int x = -1;
  if (isEmpty()) {
    cout << "Stack Underflow\n";
  } else {
    x = this->s[getTop()];
    setTop(getTop() - 1);
  }
  return x;
}

int StackInt::stackTop() {
  if (isEmpty()) {
    return -1;
  }
  return this->s[getTop()];
}

bool StackInt::isEmpty() {
  if (getTop() == -1) {
    return true;
  }
  return false;
}

bool StackInt::isFull() {
  if (getTop() == getSize() - 1) {
    return true;
  }
  return false;
}

int StackInt::getSize() { return this->size; }
int StackInt::getTop() { return this->top; }
void StackInt::setSize(int size) { this->size = size; }
void StackInt::setTop(int top) { this->top = top; }
