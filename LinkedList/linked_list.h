#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class LinkedList {
 private:
  Node *head;

 public:
  LinkedList();
  void Create(int arr[], int n);
  void Display();
  void DisplayRecursive(Node *p);
  int Count();
  int CountRecursive(Node *p);
  int Sum();
  int SumRecursive(Node *p);
  int Max();
  int MaxRecursive(Node *p);
  int Search(int key);
  void InsertFirst(int data);
  void InsertEnd(int data);
  void InsertAt(int index, int data);
  void InsertInSorted(int data);
  void DeleteFirst();
  void DeleteAt(int index);
  bool isSorted();

  Node *get_head();
};

#endif