#include <iostream>

#include "queue.h"

using namespace std;

int main() {
  Queue queue;

  queue.enqueue(4);
  queue.enqueue(6);
  queue.enqueue(8);
  queue.enqueue(10);
  queue.dequeue();

  queue.display();

  return 0;
}