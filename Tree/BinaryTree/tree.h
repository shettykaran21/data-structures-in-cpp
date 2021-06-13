#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree {
 public:
  Node *root;

  Tree();
  void createTree();
  void preorder(Node *p);
  void postorder(Node *p);
  void inorder(Node *p);
  void levelorder();

  void iPreorder();
  void iInorder();

  int count(Node *p);
  int height(Node *p);
};

#endif