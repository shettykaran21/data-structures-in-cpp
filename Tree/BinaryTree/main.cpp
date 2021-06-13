#include <iostream>

#include "tree.h"

using namespace std;

int main() {
  Tree t;
  t.createTree();
  t.iPreorder();
  t.iInorder();
  t.levelorder();
  cout << t.count(t.root) << "\n";
  cout << t.height(t.root) << "\n";

  return 0;
}