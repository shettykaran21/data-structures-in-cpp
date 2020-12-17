#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree {
 public:
  Node *root;

  Tree();
  void createTree();
  void preOrder(Node *p);
  void postOrder(Node *p);
  void inOrder(Node *p);
  void levelOrder();

  void iPreOrder();
  void iInOrder();

  int count(Node *p);
  int height(Node *p);
};

#endif