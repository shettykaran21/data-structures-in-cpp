#include <bits/stdc++.h>

#include "hash.h"

using namespace std;

int main() {
  Hash hashTable(5);
  hashTable.insert(1);
  hashTable.insert(10);
  hashTable.insert(23);
  hashTable.insert(64);
  hashTable.insert(12);
  hashTable.insert(44);

  hashTable.display();

  return 0;
}