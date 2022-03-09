#include "linked_list.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList() { head = NULL; }

void LinkedList::display() {
  Node *p = head;
  while (p != NULL) {
    cout << " --> " << p->data;
    p = p->next;
  }
  cout << '\n';
}

int LinkedList::search(int key) {
  Node *p = head;
  Node *q = NULL;

  int index = 0;
  while (p != NULL) {
    if (key == p->data) {
      q->next = p->next;
      p->next = head;
      head = p;

      return index;
    }
    q = p;
    p = p->next;

    index++;
  }
  return -1;
}

void LinkedList::insertInSorted(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  Node *p = head;
  Node *q = NULL;

  // When there is empty list
  if (head == NULL) {
    head = new_node;
    return;
  }

  while (p != NULL && p->data < data) {
    q = p;
    p = p->next;
  }

  // If new node is inserted before head
  if (p == head) {
    new_node->next = head;
    head = new_node;
  } else {
    new_node->next = q->next;
    q->next = new_node;
  }
}
