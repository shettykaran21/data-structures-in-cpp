#include <bits/stdc++.h>

#include "linked_list.h"

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  LinkedList list;

  list.create(arr, sizeof(arr) / sizeof(arr[0]));

  list.display();
  // list.insertAt(2, 10);
  // list.insertFirst(10);
  // list.insertFirst(20);
  // list.insertEnd(10);
  // list.insertEnd(20);
  // list.display();

  return 0;
}