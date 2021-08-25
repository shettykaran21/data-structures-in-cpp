#include <bits/stdc++.h>

#include "linked_list.h"

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  LinkedList list;

  list.create(arr, sizeof(arr) / sizeof(arr[0]));

  list.display();

  return 0;
}