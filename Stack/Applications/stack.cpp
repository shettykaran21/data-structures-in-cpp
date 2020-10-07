#include "stack.h"

#include <iostream>

using namespace std;

Stack::Stack(int size) {
  this->size = size;
  this->top = -1;
  this->s = new char[size];
}

void Stack::push(char x) {
  if (isFull()) {
    cout << "Stack Overflow\n";
  } else {
    setTop(getTop() + 1);
    this->s[getTop()] = x;
  }
}

char Stack::pop() {
  char x = char(0);
  if (isEmpty()) {
    cout << "Stack Underflow\n";
  } else {
    x = this->s[getTop()];
    setTop(getTop() - 1);
  }
  return x;
}

char Stack::stackTop() {
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

void Stack::setSize(int size) { this->size = size; }
void Stack::setTop(int top) { this->top = top; }
int Stack::getSize() { return this->size; }
int Stack::getTop() { return this->top; }