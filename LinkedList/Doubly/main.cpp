#include <bits/stdc++.h>

#include "linked_list.h"
#include "node.h"

using namespace std;

int main() {
  LinkedList list;
  list.insertFirst(4);
  list.insertFirst(3);
  list.insertFirst(2);
  list.insertFirst(1);

  list.display();

  return 0;
}