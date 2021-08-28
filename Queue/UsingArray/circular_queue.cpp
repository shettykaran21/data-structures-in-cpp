#include "circular_queue.h"

#include <iostream>

using namespace std;

CircularQueue::CircularQueue(int size) {
  this->size = size;
  this->front = this->rear = 0;
  this->q = new int[size];
}

void CircularQueue::display() {
  int i = front + 1;
  do {
    cout << this->q[i] << ' ';
    i = (i + 1) % size;
  } while (i != (rear + 1) % size);

  cout << '\n';
}

void CircularQueue::enqueue(int x) {
  if (isFull()) {
    cout << "Queue is full\n";
  } else {
    setRear((rear + 1) % size);
    this->q[rear] = x;
  }
}

int CircularQueue::dequeue() {
  int x = -1;
  if (isEmpty()) {
    cout << "Queue is empty\n";
  } else {
    setFront((front + 1) % size);
    x = this->q[front];
  }
  return x;
}

bool CircularQueue::isEmpty() {
  if (front == rear) {
    return true;
  }
  return false;
}

bool CircularQueue::isFull() {
  if ((rear + 1) % size == front) {
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