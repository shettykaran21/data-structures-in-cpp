#include "tree.h"

#include <iostream>

#include "node.h"
#include "queue.h"
#include "stack.h"

using namespace std;

Tree::Tree() { this->root = NULL; }

void Tree::createTree() {
  Node *p, *t;
  int x;
  Queue q(100);

  cout << "Enter root value: ";
  cin >> x;

  root = new Node();
  root->data = x;

  q.enqueue(root);

  while (!q.isEmpty()) {
    p = q.dequeue();
    cout << "Enter left child of " << p->data << ": ";
    cin >> x;

    if (x != -1) {
      t = new Node();
      t->data = x;

      p->left = t;
      q.enqueue(t);
    }

    cout << "Enter right child of " << p->data << ": ";
    cin >> x;
    if (x != -1) {
      t = new Node();
      t->data = x;

      p->right = t;
      q.enqueue(t);
    }
  }
}

void Tree::preOrder(Node *p) {
  if (p) {
    cout << p->data << " ";
    preOrder(p->left);
    preOrder(p->right);
  }
}

void Tree::iPreOrder() {
  Node *p = this->root;
  Stack s(100);

  while (p || !s.isEmpty()) {
    if (p) {
      cout << p->data << " ";
      s.push(p);
      p = p->left;
    } else {
      p = s.pop();
      p = p->right;
    }
  }
  cout << "\n";
}

void Tree::inOrder(Node *p) {
  if (p) {
    inOrder(p->left);
    cout << p->data << " ";
    inOrder(p->right);
  }
  cout << "\n";
}

void Tree::iInOrder() {
  Node *p = this->root;
  Stack s(100);

  while (p || !s.isEmpty()) {
    if (p) {
      s.push(p);
      p = p->left;
    } else {
      p = s.pop();
      cout << p->data << " ";
      p = p->right;
    }
  }
  cout << "\n";
}

void Tree::postOrder(Node *p) {
  if (p) {
    postOrder(p->left);
    postOrder(p->right);
    cout << p->data << " ";
  }
}

void Tree::levelOrder() {
  Node *p = this->root;
  Queue q(100);
  cout << p->data << " ";
  q.enqueue(p);

  while (!q.isEmpty()) {
    p = q.dequeue();

    if (p->left) {
      cout << p->left->data << " ";
      q.enqueue(p->left);
    }

    if (p->right) {
      cout << p->right->data << " ";
      q.enqueue(p->right);
    }
  }
  cout << "\n";
}

int Tree::count(Node *p) {
  int x = 0, y = 0;

  if (p) {
    x = count(p->left);
    y = count(p->right);
    return x + y + 1;
  }
  return 0;
}

int Tree::height(Node *p) {
  int x = 0, y = 0;
  if (!p) {
    return 0;
  }
  x = height(p->left);
  x = height(p->right);

  if (x > y) {
    return x + 1;
  } else {
    return y + 1;
  }
}