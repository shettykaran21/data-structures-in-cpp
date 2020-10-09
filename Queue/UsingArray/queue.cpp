#include "queue.h"

#include <iostream>

using namespace std;

Queue::Queue(int size) {
  this->size = size;
  this->q = new int[getSize()];
  this->front = this->rear = -1;
}

void Queue::display() {
  for (int i = getFront() + 1; i <= getRear(); ++i) {
    cout << this->q[i] << ' ';
  }
  cout << '\n';
}

void Queue::enqueue(int x) {
  if (isFull()) {
    cout << "Queue is full\n";
  } else {
    setRear(getRear() + 1);
    this->q[getRear()] = x;
  }
}

int Queue::dequeue() {
  int x = INT32_MIN;
  if (isEmpty()) {
    cout << "Queue is empty\n";
  } else {
    setFront(getFront() + 1);
    x = this->q[getFront()];
  }
  return x;
}

int Queue::frontt() {
  int x = INT32_MIN;
  if (!isEmpty()) {
    x = this->q[getFront() + 1];
  }
  return x;
}

int Queue::backk() {
  int x = INT32_MIN;
  if (!isEmpty()) {
    x = this->q[getRear()];
  }
  return x;
}

bool Queue::isEmpty() {
  if (getFront() == getRear()) {
    return true;
  }
  return false;
}

bool Queue::isFull() {
  if (getRear() == getSize() - 1) {
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