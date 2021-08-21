#include <bits/stdc++.h>

#include "linked_list.h"
#include "node.h"

using namespace std;

Node *head = NULL;

int main() {
  int arr[] = {7, 4, 0, 1, 6};

  LinkedList list;

  // list.create(arr, sizeof(arr) / sizeof(arr[0]));
  // list.insertFirst(5);
  // list.insertAt(head, 1, 4);
  // list.insertAt(head, 1, 6);
  // list.insertAt(head, 1, 10);

  list.insertEnd(1);
  list.display();
  list.insertEnd(4);
  list.insertEnd(8);
  list.insertEnd(10);

  // list.display();
  // cout << "Count = " << list.count() << '\n';
  // cout << "Sum = " << list.sum() << '\n';
  // cout << "Max = " << list.max() << '\n';
  // cout << "Key found at index " << list.search(5) << '\n';
  // list.display();
  // list.insertFirst(9);
  // list.display();
  // list.insertAt(2, 12);
  // list.display();
  // list.insertInSorted(6);
  // list.display();
  // list.deleteFirst();
  // list.display();
  // list.deleteAt(2);
  // list.display();
  // cout << list.isSorted() << '\n';
  // list.removeDuplicates();
  // list.reverseByLinks();
  list.display();

  return 0;
}