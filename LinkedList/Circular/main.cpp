#include <bits/stdc++.h>

#include "linked_list.h"
#include "node.h"

using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  LinkedList list;

  list.create(arr, sizeof(arr) / sizeof(arr[0]));

  // list.display();
  // list.displayRecursive(list.getHead());
  // cout << list.count() << '\n';

  list.insertEnd(0);
  list.display();

  return 0;
}