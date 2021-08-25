#include "linked_list.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList() { head = NULL; }

void LinkedList::display() {
  Node *p = head;
  while (p != NULL) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << '\n';
}

int LinkedList::count() {
  Node *p = head;
  int count = 0;
  while (p != NULL) {
    count++;
    p = p->next;
  }
  return count;
}

void LinkedList::insertFirst(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  // If LL is empty
  if (head == NULL) {
    new_node->prev = NULL;
    new_node->next = NULL;
    head = new_node;
    return;
  }

  new_node->prev = NULL;
  new_node->next = head;

  head->prev = new_node;

  // Make new_node as head of list
  head = new_node;
}

void LinkedList::insertEnd(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;
  new_node->next = NULL;

  Node *last_node = head;

  // If the Linked List is empty, then make the new node as head
  if (head == NULL) {
    head = new_node;
    new_node->prev = NULL;
    return;
  }

  // Point last_node to the last node of list
  while (last_node->next != NULL) {
    last_node = last_node->next;
  }

  new_node->prev = last_node;
  last_node->next = new_node;
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
