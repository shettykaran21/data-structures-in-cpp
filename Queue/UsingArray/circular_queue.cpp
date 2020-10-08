#include "circular_queue.h"

#include <iostream>

using namespace std;

CircularQueue::CircularQueue(int size) {
  this->size = size;
  this->front = this->rear = 0;
  this->q = new int[size];
}

void CircularQueue::display() {
  int i = getFront() + 1;
  do {
    cout << this->q[i] << ' ';
    i = (i + 1) % getSize();
  } while (i != (getRear() + 1) % getSize());

  cout << '\n';
}

void CircularQueue::enqueue(int x) {
  if (isFull()) {
    cout << "Queue is full\n";
  } else {
    setRear((getRear() + 1) % getSize());
    this->q[getRear()] = x;
  }
}

int CircularQueue::dequeue() {
  int x = -1;
  if (isEmpty()) {
    cout << "Queue is empty\n";
  } else {
    setFront((getFront() + 1) % getSize());
    x = this->q[getFront()];
  }
  return x;
}

bool CircularQueue::isEmpty() {
  if (getFront() == getRear()) {
    return true;
  }
  return false;
}

bool CircularQueue::isFull() {
  if ((getRear() + 1) % getSize() == getFront()) {
    return true;
  }
  return false;
}

int CircularQueue::getSize() { return this->size; }
int CircularQueue::getFront() { return this->front; }
int CircularQueue::getRear() { return this->rear; }
void CircularQueue::setSize(int size) { this->size = size; }
void CircularQueue::setFront(int front) { this->front = front; }
void CircularQueue::setRear(int rear) { this->rear = rear; }