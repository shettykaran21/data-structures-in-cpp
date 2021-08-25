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
  int count();
  void insertFirst(int data);
  void insertEnd(int data);
  void insertAt(int index, int data);

  Node *getHead();
};

#endif