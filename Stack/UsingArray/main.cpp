#include <iostream>

#include "stack.h"

using namespace std;

int main() {
  Stack stack(5);

  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.push(50);
  stack.push(60);
  // cout << stack.pop() << '\n';
  // stack.pop();
  // stack.pop();
  cout << stack.peek(1) << '\n';

  stack.display();

  return 0;
}