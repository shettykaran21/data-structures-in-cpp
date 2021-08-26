#ifndef STACK_INT_H
#define STACK_INT_H

class StackInt {
 private:
  int size;
  int top;
  int *s;

 public:
  StackInt(int);
  void display();
  void push(int);
  int pop();
  int stackTop();
  bool isEmpty();
  bool isFull();

  int getSize();
  int getTop();
  void setSize(int);
  void setTop(int);
};

#endif