#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class LinkedList {
 private:
  Node *head;

 public:
  LinkedList();
  void display();
  int search(int key);
  void insertInSorted(int data);

  Node *getHead();
};

#endif