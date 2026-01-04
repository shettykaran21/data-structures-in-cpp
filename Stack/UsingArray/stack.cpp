#include "stack.h"

#include <iostream>

using namespace std;

Stack::Stack(int size) {
  this->size = size;
  this->s = new int[size];
  this->top = -1;
}

void Stack::display() {
  for (int i = top; i >= 0; --i) {
    cout << s[i] << ' ';
  }
  cout << '\n';
}

void Stack::push(int x) {
  if (isFull()) {
    cout << "Stack Overflow\n";
    return;
  }

  s[++top] = x;
}

int Stack::pop() {
  if (isEmpty()) {
    cout << "Stack Underflow\n";
    return -1;
  }

  return s[top--];
}

int Stack::peek(int pos) {
  if (pos >= 1 && pos <= size) {
    int index = top - pos + 1;
    return s[index];
  } else {
    cout << "Invalid Position\n";
    return -1;
  }
}

int Stack::stackTop() {
  if (isEmpty()) {
    return -1;
  }
  return s[top];
}

bool Stack::isEmpty() { return top == -1; }

bool Stack::isFull() { return top == size - 1; }

int Stack::getSize() { return this->size; }
int Stack::getTop() { return this->top; }
void Stack::setSize(int size) { this->size = size; }
void Stack::setTop(int top) { this->top = top; }
