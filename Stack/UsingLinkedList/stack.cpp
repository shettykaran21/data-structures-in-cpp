#include "stack.h"

#include <iostream>

using namespace std;

Stack::Stack() { top = NULL; }

void Stack::display() {
  Node* p = top;
  while (p != NULL) {
    cout << p->data << ' ';
    p = p->next;
  }
  cout << '\n';
}

void Stack::push(int x) {
  Node* new_node = new Node();
  if (isFull()) {
    cout << "Stack Overflow\n";
  } else {
    new_node->data = x;
    new_node->next = top;
    top = new_node;
  }
}

int Stack::pop() {
  int x = -1;
  if (isEmpty()) {
    cout << "Stack Underflow\n";
  } else {
    Node* p = top;
    top = top->next;

    x = p->data;

    delete p;
  }
  return x;
}

int Stack::peek(int pos) {
  Node* p = top;
  for (int i = 0; i < pos - 1; ++i) {
    p = p->next;
  }

  if (p != NULL) {
    return p->data;
  }
  cout << "Invalid position\n";
  return -1;
}

int Stack::stackTop() {
  if (isEmpty()) {
    return -1;
  }
  return top->data;
}

bool Stack::isEmpty() {
  if (top == NULL) {
    return true;
  }
  return false;
}

bool Stack::isFull() {
  Node* new_node = new Node();
  if (new_node == NULL) {
    return true;
  }
  return false;
}
