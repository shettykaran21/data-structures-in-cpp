#include <bits/stdc++.h>

#include "linked_list.h"
#include "node.h"

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  LinkedList list;

  list.create(arr, sizeof(arr) / sizeof(arr[0]));

  // list.insertFirst(4);
  // list.insertFirst(3);
  // list.insertFirst(2);
  // list.insertFirst(1);
  // list.insertEnd(1);
  // list.insertEnd(2);
  // list.insertEnd(3);
  // list.insertEnd(4);
  // cout << list.count() << '\n';
  // list.display();
  // list.insertAt(2, 10);
  // list.deleteFirst();
  // list.reverse();

  list.display();

  return 0;
}