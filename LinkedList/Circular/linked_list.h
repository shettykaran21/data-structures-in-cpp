#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class LinkedList {
 private:
  Node *head;

 public:
  LinkedList();
  void create(int arr[], int n);
  void display();
  void displayRecursive(Node *p);
};

#endif