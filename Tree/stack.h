#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack {
 private:
  int size;
  int top;
  Node** s;

 public:
  Stack(int);
  void display();
  void push(Node*);
  Node* pop();
  bool isEmpty();
  bool isFull();

  int getSize();
  int getTop();
  void setSize(int);
  void setTop(int);
};

#endif