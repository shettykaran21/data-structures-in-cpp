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
  int count();
  int countRecursive(Node *p);
  int sum();
  int sumRecursive(Node *p);
  int max();
  int maxRecursive(Node *p);
  int search(int key);
  void insertFirst(int data);
  void insertEnd(int data);
  void insertAt(int index, int data);
  void insertInSorted(int data);
  void deleteFirst();
  void deleteAt(int index);
  bool isSorted();
  void removeDuplicates();
  void reverseByElements();
  void reverseByLinks();

  Node *getHead();
};

#endif