#include <iostream>

#include "tree.h"

using namespace std;

int main() {
  Tree t;
  t.createTree();
  t.iPreOrder();
  t.iInOrder();
  t.levelOrder();
  cout << t.count(t.root) << "\n";
  cout << t.height(t.root) << "\n";

  return 0;
}