// #include "Node.h"
// #include <bits/stdc++.h>

// using namespace std;

// void print_list(Node *n);
// void push_front(Node **head_ref, int new_data);
// void insert_after(Node *prev_node, int new_data);
// void push_back(Node **head_ref, int new_data);
// void delete_node(Node **head_ref, int key);
// void delete_node_at(Node **head_ref, int position);
// void delete_list(Node **head_ref);

// int get_count(Node *head);
// bool search(Node *head, int x);
// int get_nth(Node *head, int index);
// int get_nth_from_last(Node *head, int n);

// int main() {

//   Node *head = NULL;

//   push_back(&head, 1);
//   push_back(&head, 2);
//   push_back(&head, 3);

//   print_list(head);
//   push_front(&head, 0);
//   print_list(head);
//   insert_after(head->next->next, 10);
//   print_list(head);
//   push_back(&head, 14);
//   print_list(head);
//   delete_node(&head, 9);
//   print_list(head);
//   delete_node(&head, 2);
//   print_list(head);
//   delete_node_at(&head, 1);
//   print_list(head);
//   // delete_list(&head);
//   // print_list(head);
//   cout << get_count(head) << '\n';
//   cout << search(head, 14) << '\n';
//   cout << get_nth(head, 2) << '\n';
//   cout << get_nth_from_last(head, 2) << '\n';

//   return 0;
// }

// void print_list(Node *head) {
//   while (head != NULL) {
//     cout << head->data << " ";
//     head = head->next;
//   }
//   cout << "\n";
// }

// void push_front(Node **head_ref, int new_data) {
//   Node *new_node = new Node();
//   new_node->data = new_data;
//   new_node->next = *head_ref;
//   *head_ref = new_node;
// }

// void insert_after(Node *prev_node, int new_data) {
//   if (prev_node == NULL) {
//     cout << "The given node cannot be NULL";
//     return;
//   }
//   Node *new_node = new Node();
//   new_node->data = new_data;
//   new_node->next = prev_node->next;
//   prev_node->next = new_node;
// }

// void push_back(Node **head_ref, int new_data) {
//   Node *new_node = new Node();

//   new_node->data = new_data;
//   new_node->next = NULL;

//   if (*head_ref == NULL) {
//     *head_ref = new_node;
//     return;
//   }

//   Node *last = *head_ref;
//   while (last->next != NULL)
//     last = last->next;

//   last->next = new_node;
//   return;
// }

// void delete_node(Node **head_ref, int key) {
//   if (*head_ref == NULL) {
//     return;
//   }

//   Node *temp = *head_ref, *prev;

//   if (temp != NULL && temp->data == key) {
//     *head_ref = temp->next;
//     delete temp;
//     return;
//   }

//   while (temp != NULL && temp->data != key) {
//     prev = temp;
//     temp = temp->next;
//   }

//   if (temp == NULL) {
//     return;
//   }

//   prev->next = temp->next;
//   delete temp;
// }

// void delete_node_at(Node **head_ref, int position) {
//   if (*head_ref == NULL) {
//     return;
//   }

//   Node *temp = *head_ref, *prev;

//   if (position == 0) {
//     *head_ref = temp->next;
//     delete temp;
//     return;
//   }

//   for (int i = 0; temp != NULL && i < position - 1; i++) {
//     temp = temp->next;
//   }

//   if (temp == NULL || temp->next == NULL) {
//     return;
//   }

//   Node *next = temp->next->next;
//   delete temp->next;
//   temp->next = next;
// }

// void delete_list(Node **head_ref) {
//   Node *current = *head_ref;
//   Node *next;

//   while (current != NULL) {
//     next = current->next;
//     free(current);
//     current = next;
//   }
//   *head_ref = NULL;
// }

// int get_count(Node *head) {
//   int count = 0;
//   Node *current = head;
//   while (current != NULL) {
//     ++count;
//     current = current->next;
//   }
//   return count;
// }

// bool search(Node *head, int x) {
//   Node *current = head;
//   while (current != NULL) {
//     if (current->data == x)
//       return true;
//     current = current->next;
//   }
//   return false;
// }

// int get_nth(Node *head, int index) {
//   Node *current = head;

//   int count = 0;
//   while (current != NULL) {
//     if (count == index) {
//       return current->data;
//     }
//     count++;
//     current = current->next;
//   }
//   assert(0);
// }

// int get_nth_from_last(Node *head, int n) {
//   int len = get_count(head);
//   if (len < n) {
//     return -1;
//   }

//   Node *temp = head;

//   for (int i = 1; i < len - n + 1; ++i) {
//     temp = temp->next;
//   }

//   return temp->data;
// }

#include <bits/stdc++.h>

#include "linked_list.h"
#include "node.h"

using namespace std;

Node *head = NULL;

int main() {
  int arr[] = {7, 4, 0, 1, 6};

  LinkedList list;

  // list.create(arr, sizeof(arr) / sizeof(arr[0]));
  // list.insertFirst(5);
  // list.insertAt(head, 1, 4);
  // list.insertAt(head, 1, 6);
  // list.insertAt(head, 1, 10);

  list.insertEnd(1);
  list.insertEnd(4);
  list.insertEnd(8);
  list.insertEnd(10);

  list.display();
  cout << "Count = " << list.count() << '\n';
  cout << "Sum = " << list.sum() << '\n';
  cout << "Max = " << list.max() << '\n';
  cout << "Key found at index " << list.search(5) << '\n';
  list.display();
  // list.insertFirst(9);
  // list.display();
  // list.insertAt(2, 12);
  // list.display();
  // list.insertInSorted(6);
  // list.display();
  list.deleteFirst();
  list.display();
  list.deleteAt(2);
  list.display();
  cout << list.isSorted() << '\n';

  return 0;
}