#include <bits/stdc++.h>

#include "linked_list.h"
#include "node.h"

using namespace std;

Node *head = NULL;

void concat(Node *first, Node *second) {
  Node *p = first;

  while (p->next != NULL) {
    p = p->next;
  }

  p->next = second;
  second = NULL;
}

void mergeSorted(Node *first, Node *second) {
  Node *third = NULL;
  Node *last = NULL;

  if (first->data == second->data) {
    third = first;
    last = first;
    first = first->next;
    last->next = NULL;
  } else {
    third = second;
    last = second;
    second = second->next;
    last->next = NULL;
  }

  while (first != NULL && second != NULL) {
    if (first->data < second->data) {
      last->next = first;
      last = first;
      first = first->next;
      last->next = NULL;
    } else {
      last->next = second;
      last = second;
      second = second->next;
      last->next = NULL;
    }
  }

  if (first != NULL) {
    last->next = first;
  } else {
    last->next = second;
  }
}

bool isLoop(Node *head) {
  Node *p = head;
  Node *q = head;

  do {
    // Move p by one place
    p = p->next;

    // Move q by two places
    q = q->next;
    q = q != NULL ? q->next : q;
  } while (p != NULL && q != NULL && p != q);

  return p == q ? true : false;
}

int main() {
  int arr[] = {7, 4, 0, 1, 6};

  LinkedList list;
  LinkedList list2;

  // list.create(arr, sizeof(arr) / sizeof(arr[0]));
  // list.insertFirst(5);
  // list.insertAt(head, 1, 4);
  // list.insertAt(head, 1, 6);
  // list.insertAt(head, 1, 10);

  list.insertEnd(1);
  list.insertEnd(4);
  list.insertEnd(8);
  list.insertEnd(10);

  list2.insertEnd(9);
  list2.insertEnd(3);
  list2.insertEnd(6);
  list2.insertEnd(12);

  // concat(list.getHead(), list2.getHead());
  mergeSorted(list.getHead(), list2.getHead());

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