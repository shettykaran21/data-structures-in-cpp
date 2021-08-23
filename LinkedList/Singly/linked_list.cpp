#include "linked_list.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList() { head = NULL; }

void LinkedList::create(int arr[], int n) {
  Node *new_node, *last_node;

  head = new Node();
  head->data = arr[0];
  head->next = NULL;
  last_node = head;

  for (int i = 1; i < n; ++i) {
    new_node = new Node();
    new_node->data = arr[i];
    new_node->next = NULL;

    last_node->next = new_node;
    last_node = new_node;
  }
}

void LinkedList::display() {
  Node *p = head;
  while (p != NULL) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << '\n';
}

void LinkedList::displayRecursive(Node *p) {
  if (p != NULL) {
    cout << p->data << ' ';
    displayRecursive(p->next);
  } else {
    cout << '\n';
  }
}

int LinkedList::count() {
  Node *p = head;
  int count = 0;
  while (p != NULL) {
    count++;
    p = p->next;
  }
  return count;
}

int LinkedList::countRecursive(Node *p) {
  if (p == NULL) {
    return 0;
  }

  return countRecursive(p->next) + 1;
}

int LinkedList::sum() {
  Node *p = head;

  int sum = 0;
  while (p != NULL) {
    sum += p->data;
    p = p->next;
  }
  return sum;
}

int LinkedList::sumRecursive(Node *p) {
  if (p == NULL) {
    return 0;
  }

  return sumRecursive(p->next) + p->data;
}

int LinkedList::max() {
  Node *p = head;

  int max = INT32_MIN;
  while (p != NULL) {
    if (p->data > max) {
      max = p->data;
    }
    p = p->next;
  }
  return max;
}

int LinkedList::maxRecursive(Node *p) {
  int x = 0;
  if (p == NULL) {
    return INT32_MIN;
  }

  x = maxRecursive(p->next);
  if (x > p->data) {
    return x;
  } else {
    return p->data;
  }
}

// int LinkedList::search(int key) {
//   Node *p = head;

//   int count = 0;
//   while (p != NULL) {
//     if (key == p->data) {
//       return count;
//     }
//     p = p->next;
//     count++;
//   }
//   return -1;
// }

// Searching with Move to head
int LinkedList::search(int key) {
  Node *p = head;
  Node *q = NULL;

  int count = 0;
  while (p != NULL) {
    if (key == p->data) {
      q->next = p->next;
      p->next = head;
      head = p;

      return count;
    }
    q = p;
    p = p->next;

    count++;
  }
  return -1;
}

void LinkedList::insertFirst(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  new_node->next = head;

  // Make new_node as head of list
  head = new_node;
}

void LinkedList::insertEnd(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;
  new_node->next = NULL;

  Node *last_node = head;

  // If the Linked List is empty, then make the new node as head
  if (head == NULL) {
    head = new_node;
    return;
  }

  // Point last_node to the last node of list
  while (last_node->next != NULL) {
    last_node = last_node->next;
  }

  last_node->next = new_node;
}

void LinkedList::insertAt(int index, int data) {
  Node *p = head;

  if (index <= 0 || index > this->count()) {
    return;
  }

  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  for (int i = 0; i < index - 1; ++i) {
    p = p->next;
  }
  new_node->next = p->next;
  p->next = new_node;
}

void LinkedList::insertInSorted(int data) {
  // Create and set data of new node
  Node *new_node = new Node();
  new_node->data = data;

  Node *p = head;
  Node *q = NULL;

  // When there is empty list
  if (head == NULL) {
    head = new_node;
    return;
  }

  while (p != NULL && p->data < data) {
    q = p;
    p = p->next;
  }

  // If new node is inserted before head
  if (p == head) {
    new_node->next = head;
    head = new_node;
  } else {
    new_node->next = q->next;
    q->next = new_node;
  }
}

void LinkedList::deleteFirst() {
  Node *p = head;
  head = head->next;

  delete p;
}

void LinkedList::deleteAt(int index) {
  if (index <= 0 || index > this->count()) {
    return;
  }

  Node *p = head;
  Node *q = NULL;

  for (int i = 0; i < index; ++i) {
    q = p;
    p = p->next;
  }
  q->next = p->next;

  delete p;
}

bool LinkedList::isSorted() {
  Node *p = head;
  int temp = INT32_MIN;

  while (p != NULL) {
    if (p->data < temp) {
      return false;
    }

    temp = p->data;
    p = p->next;
  }
  return true;
}

// Remove duplicates from sorted linked list
void LinkedList::removeDuplicates() {
  Node *p = head;
  Node *q = head->next;

  while (q != NULL) {
    if (q->data == p->data) {
      p->next = q->next;
      delete q;
      q = p->next;
    } else {
      p = q;
      q = q->next;
    }
  }
}

void LinkedList::reverseByElements() {
  int n = this->count();
  int arr[n];

  Node *p = head;

  for (int i = 0; i < n; ++i) {
    arr[i] = p->data;
    p = p->next;
  }

  p = head;
  for (int i = n - 1; i >= 0; --i) {
    p->data = arr[i];
    p = p->next;
  }
}

// Preferred over reverseByElements
void LinkedList::reverseByLinks() {
  Node *p = head;
  Node *q = NULL;
  Node *r = NULL;

  while (p != NULL) {
    r = q;
    q = p;
    p = p->next;

    // Reverse links
    q->next = r;
  }
  head = q;
}

Node * ::LinkedList::getHead() { return this->head; }