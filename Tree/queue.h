#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue {
 private:
  int size;
  int front;
  int rear;
  Node **q;

 public:
  Queue(int);
  void display();
  void enqueue(Node *);
  Node *dequeue();
  Node *frontt();
  Node *rearr();
  bool isEmpty();
  bool isFull();

  int getSize();
  int getFront();
  int getRear();
  void setSize(int);
  void setFront(int);
  void setRear(int);
};

#endif