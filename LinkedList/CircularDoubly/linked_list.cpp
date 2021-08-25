#include "linked_list.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList() { head = NULL; }

void LinkedList::create(int arr[], int n) {
  Node *new_node, *last_node;

  head = new Node();
  head->data = arr[0];
  head->next = head;
  head->prev = head;
  last_node = head;

  for (int i = 1; i < n; ++i) {
    new_node = new Node();
    new_node->data = arr[i];
    new_node->next = head;
    new_node->prev = last_node;
    head->prev = new_node;

    last_node->next = new_node;
    last_node = new_node;
  }
}

void LinkedList::display() {
  Node *p = head;

  do {
    cout << p->data << " ";
    p = p->next;
  } while (p != head);

  cout << '\n';
}

Node * ::LinkedList::getHead() { return this->head; }
