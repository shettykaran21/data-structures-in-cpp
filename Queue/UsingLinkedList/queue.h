#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue {
 private:
  Node *front;
  Node *rear;

 public:
  Queue();
  void display();
  void enqueue(int);
  int dequeue();
  int frontt();
  int rearr();
  bool isEmpty();
  bool isFull();
};

#endif