#include "bst.h"

#include <iostream>

#include "node.h"

using namespace std;

void BST::insert(int x) {
  Node *p = this->root;
  Node *new_node, *q;

  if (root == NULL) {
    new_node = new Node();
    new_node->data = x;
  } else {
    while (p != NULL) {
      q = p;

      if (x < p->data) {
        p = p->left;
      } else if (x > p->data) {
        p = p->right;
      } else {
        break;
      }
    }
    new_node = new Node();
    new_node->data = x;

    if (x < q->data) {
      q->left = new_node;
    } else {
      q->right = new_node;
    }
  }
}

void BST::inorder(Node *p) {}