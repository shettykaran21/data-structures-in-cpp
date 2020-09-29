#include "stack.h"

#include <iostream>

using namespace std;

Stack::Stack(int size) {
  this->size = size;
  this->s = new int[size];
  this->top = -1;
}

void Stack::display() {
  for (int i = getTop(); i >= 0; --i) {
    cout << this->s[i] << ' ';
  }
  cout << '\n';
}

void Stack::push(int x) {
  if (isFull()) {
    cout << "Stack Overflow\n";
  } else {
    setTop(getTop() + 1);
    this->s[getTop()] = x;
  }
}

int Stack::pop() {
  int x = -1;
  if (isEmpty()) {
    cout << "Stack Underflow\n";
  } else {
    x = this->s[getTop()];
    setTop(getTop() - 1);
  }
  return x;
}

int Stack::peek(int pos) {
  if (pos >= 1 && pos <= getSize()) {
    int index = getTop() - pos + 1;
    return this->s[index];
  } else {
    cout << "Invalid Position\n";
    return -1;
  }
}

int Stack::stackTop() {
  if (isEmpty()) {
    return -1;
  }
  return this->s[getTop()];
}

bool Stack::isEmpty() {
  if (getTop() == -1) {
    return true;
  }
  return false;
}

bool Stack::isFull() {
  if (getTop() == getSize() - 1) {
    return true;
  }
  return false;
}

int Stack::getSize() { return this->size; }
int Stack::getTop() { return this->top; }
void Stack::setSize(int size) { this->size = size; }
void Stack::setTop(int top) { this->top = top; }
