#include "linked_list.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList() { head = NULL; }

void LinkedList::create(int arr[], int n) {
  Node *new_node, *last_node;

  head = new Node();
  head->data = arr[0];
  head->next = head;

  last_node = head;

  for (int i = 1; i < n; ++i) {
    new_node = new Node();
    new_node->data = arr[i];
    new_node->next = last_node->next;

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

void LinkedList::displayRecursive(Node *p) {
  static bool flag = false;

  if (p != head || flag == false) {
    flag = true;
    cout << p->data << ' ';
    displayRecursive(p->next);
  } else {
    cout << '\n';
  }
  flag = false;
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
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  // If the Linked List is empty
  if (head == NULL) {
    head = new_node;
    head->next = head;
    return;
  }

  Node *last_node = head;
  while (last_node->next != head) {
    last_node = last_node->next;
  }

  last_node->next = new_node;
  new_node->next = head;

  // Make new_node as head of list
  head = new_node;
}

void LinkedList::insertEnd(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  // If the Linked List is empty
  if (head == NULL) {
    head = new_node;
    head->next = head;
    return;
  }

  Node *last_node = head;
  while (last_node->next != head) {
    last_node = last_node->next;
  }
  last_node->next = new_node;
  new_node->next = head;
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
  p->next = new_node;
}

void LinkedList::deleteFirst() {
  Node *p = head;
  Node *last_node = head;

  while (last_node->next != head) {
    last_node = last_node->next;
  }

  // If list contains only one element
  if (last_node == head) {
    delete p;
    head = NULL;
    return;
  }

  head = head->next;
  last_node->next = head;

  delete p;
}

void LinkedList::deleteAt(int index) {
  if (index <= 0 || index > this->count()) {
    return;
  }

  Node *p = head;
  Node *q = NULL;

  for (int i = 0; i < index - 1; ++i) {
    p = p->next;
  }
  q = p->next;
  p->next = q->next;

  delete q;
}

Node * ::LinkedList::getHead() { return this->head; }
