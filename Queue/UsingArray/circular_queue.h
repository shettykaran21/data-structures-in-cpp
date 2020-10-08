#ifndef QUEUE_H
#define QUEUE_H

class CircularQueue {
 private:
  int size;
  int front;
  int rear;
  int *q;

 public:
  CircularQueue(int);
  void display();
  void enqueue(int);
  int dequeue();
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