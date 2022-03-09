#ifndef HASH_H
#define HASH_H

#include "linked_list.h"
#include "node.h"

class Hash {
 private:
  int bucket;
  LinkedList* table;

 public:
  Hash(int bucket);
  int hashFunction(int x);
  void insert(int key);
  void display();
};

#endif