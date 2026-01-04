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
    return;
  }
  rear++;
  q[rear] = x;
}

int Queue::dequeue() {
  if (isEmpty()) {
    cout << "Queue is empty\n";
    return -1;
  }
  front++;
  return q[front];
}

int Queue::frontt() {
  if (!isEmpty()) {
    return q[front + 1];
  }
  return -1;
}

int Queue::rearr() {
  if (!isEmpty()) {
    return q[rear];
  }
  return -1;
}

bool Queue::isEmpty() { return front == rear; }

bool Queue::isFull() { return rear == size - 1; }

int Queue::getSize() { return this->size; }
int Queue::getFront() { return this->front; }
int Queue::getRear() { return this->rear; }
void Queue::setSize(int size) { this->size = size; }
void Queue::setFront(int front) { this->front = front; }
void Queue::setRear(int rear) { this->rear = rear; }