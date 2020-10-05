#ifndef STACK_H
#define STACK_H

class Stack {
 private:
  int top;
  int size;
  char *s;

 public:
  Stack(int);
  void push(char);
  char pop();
  bool isEmpty();
  bool isFull();

  int getTop();
  int getSize();
  void setTop(int);
  void setSize(int);
};

#endif