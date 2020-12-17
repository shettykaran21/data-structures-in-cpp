#include "stack.h"

#include <iostream>

using namespace std;

Stack::Stack(int size) {
  this->size = size;
  this->s = new Node*[size];
  this->top = -1;
}

void Stack::display() {
  for (int i = getTop(); i >= 0; --i) {
    cout << this->s[i] << ' ';
  }
  cout << '\n';
}

void Stack::push(Node* x) {
  if (isFull()) {
    cout << "Stack Overflow\n";
  } else {
    setTop(getTop() + 1);
    this->s[getTop()] = x;
  }
}

Node* Stack::pop() {
  Node* x = NULL;
  if (isEmpty()) {
    cout << "Stack Underflow\n";
  } else {
    x = this->s[getTop()];
    setTop(getTop() - 1);
  }
  return x;
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
