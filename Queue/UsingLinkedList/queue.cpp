#include "queue.h"

#include <iostream>

using namespace std;

Queue::Queue() {
  this->front = NULL;
  this->rear = NULL;
}

void Queue::display() {
  Node *p = front;

  while (p != NULL) {
    cout << p->data << ' ';
    p = p->next;
  }
  cout << '\n';
}

void Queue::enqueue(int x) {
  if (isFull()) {
    cout << "Queue is full\n";
  } else {
    Node *new_node = new Node();
    new_node->data = x;
    new_node->next = NULL;

    // Special case when first node is added
    if (isEmpty()) {
      front = rear = new_node;
    } else {
      rear->next = new_node;
      rear = new_node;
    }
  }
}

int Queue::dequeue() {
  int x = INT32_MIN;
  if (isEmpty()) {
    cout << "Queue is empty\n";
  } else {
    Node *p = front;
    front = front->next;

    x = p->data;
    delete p;
  }
  return x;
}

int Queue::frontt() {
  int x = INT32_MIN;
  if (!isEmpty()) {
    x = front->data;
  }
  return x;
}

int Queue::rearr() {
  int x = INT32_MIN;
  if (!isEmpty()) {
    x = rear->data;
  }
  return x;
}

bool Queue::isEmpty() {
  if (front == NULL) {
    return true;
  }
  return false;
}

bool Queue::isFull() {
  Node *new_node = new Node();
  if (new_node == NULL) {
    return true;
  }
  return false;
}