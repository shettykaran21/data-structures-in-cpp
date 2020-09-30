#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack {
 private:
  Node *head;
  Node *top;

 public:
  Stack();
  void display();
  void push(int);
  int pop();
  int peek(int);
  bool isEmpty();
  bool isFull();
  int stackTop();

  Node *getHead();
};

#endif