#include "queue.h"

#include <iostream>

using namespace std;

Queue::Queue(int size) {
  this->size = size;
  this->q = new int[size];
  this->front = this->rear = -1;
}

void Queue::display() {
  for (int i = front + 1; i <= rear; ++i) {
    cout << this->q[i] << ' ';
  }
  cout << '\n';
}

void Queue::enqueue(int x) {
  if (isFull()) {
    cout << "Queue is full\n";
  } else {
    setRear(rear + 1);
    this->q[rear] = x;
  }
}

int Queue::dequeue() {
  int x = INT32_MIN;
  if (isEmpty()) {
    cout << "Queue is empty\n";
  } else {
    setFront(front + 1);
    x = this->q[front];
  }
  return x;
}

int Queue::frontt() {
  int x = INT32_MIN;
  if (!isEmpty()) {
    x = this->q[front + 1];
  }
  return x;
}

int Queue::rearr() {
  int x = INT32_MIN;
  if (!isEmpty()) {
    x = this->q[rear];
  }
  return x;
}

bool Queue::isEmpty() {
  if (front == rear) {
    return true;
  }
  return false;
}

bool Queue::isFull() {
  if (rear == size - 1) {
    return true;
  }
  return false;
}

int Queue::getSize() { return this->size; }
int Queue::getFront() { return this->front; }
int Queue::getRear() { return this->rear; }
void Queue::setSize(int size) { this->size = size; }
void Queue::setFront(int front) { this->front = front; }
void Queue::setRear(int rear) { this->rear = rear; }