#ifndef BST_H
#define BST_H

#include "node.h"

class BST {
 public:
  Node *root;

  void insert(int x);
  Node *rInsert(int x);
  void inorder(Node *p);
};

#endif