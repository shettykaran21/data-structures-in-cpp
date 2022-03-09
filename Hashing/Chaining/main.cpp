#include <bits/stdc++.h>

#include "hash.h"

using namespace std;

int main() {
  Hash hashTable(10);
  hashTable.insert(10);
  hashTable.insert(22);
  hashTable.insert(20);

  hashTable.display();

  return 0;
}