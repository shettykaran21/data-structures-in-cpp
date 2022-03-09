#include "hash.h"

#include <iostream>

#include "linked_list.h"
#include "node.h"

using namespace std;

int Hash::hashFunction(int x) { return x % this->bucket; }

Hash::Hash(int bucket) {
  this->bucket = bucket;
  this->table = new LinkedList[bucket];
}

void Hash::insert(int key) {
  int index = hashFunction(key);
  table[index].insertInSorted(key);
}

void Hash::display() {
  for (int i = 0; i < bucket; ++i) {
    cout << i;
    table[i].display();
  }
}