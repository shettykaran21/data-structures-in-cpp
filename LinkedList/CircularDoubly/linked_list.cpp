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

int LinkedList::count() {
  Node *p = head;
  int count = 0;
  do {
    count++;
    p = p->next;
  } while (p != head);

  return count;
}

void LinkedList::insertFirst(int data) {
  Node *new_node = new Node();
  new_node->data = data;

  // If LL is empty
  if (head == NULL) {
    head = new_node;
    new_node->prev = head;
    new_node->next = head;
    return;
  }

  new_node->next = head;
  new_node->prev = head->prev;
  head->prev = new_node;
  new_node->prev->next = new_node;

  // Make new_node as head of list
  head = new_node;
}

void LinkedList::insertEnd(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  // If LL is empty
  if (head == NULL) {
    head = new_node;
    new_node->prev = head;
    new_node->next = head;
    return;
  }

  new_node->next = head;
  new_node->prev = head->prev;
  head->prev->next = new_node;
  head->prev = new_node;
}

void LinkedList::insertAt(int index, int data) {
  Node *p = head;

  if (index <= 0 || index > this->count()) {
    return;
  }

  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  for (int i = 0; i < index - 1; ++i) {
    p = p->next;
  }
  new_node->next = p->next;
  p->next->prev = new_node;
  p->next = new_node;
  new_node->prev = p;
}

Node * ::LinkedList::getHead() { return this->head; }
