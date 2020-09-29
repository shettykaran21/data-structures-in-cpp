#ifndef STACK_H
#define STACK_H

class Stack {
 private:
  int size;
  int top;
  int *s;

 public:
  Stack(int);
  void display();
  void push(int);
  int pop();
  int peek(int);
  int stackTop();
  bool isEmpty();
  bool isFull();

  int getSize();
  int getTop();
  void setSize(int);
  void setTop(int);
};

#endif