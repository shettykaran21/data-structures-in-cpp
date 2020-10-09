#include <iostream>

#include "circular_queue.h"
#include "queue.h"

using namespace std;

int main() {
  // Queue queue(5);
  // queue.enqueue(4);
  // queue.enqueue(5);
  // queue.enqueue(6);
  // queue.enqueue(10);
  // queue.enqueue(11);
  // queue.dequeue();
  // queue.dequeue();
  // queue.display();

  CircularQueue circular_queue(5);
  circular_queue.enqueue(4);
  circular_queue.enqueue(5);
  circular_queue.enqueue(6);
  circular_queue.enqueue(10);
  // circular_queue.enqueue(11);
  circular_queue.dequeue();
  circular_queue.dequeue();
  circular_queue.display();

  return 0;
}