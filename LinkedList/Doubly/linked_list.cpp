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