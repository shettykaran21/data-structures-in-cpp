#include <bits/stdc++.h>

#include "array.h"

using namespace std;

static int *merge_sorted_arrays(Array arr1, Array arr2) {
  int i = 0, j = 0, k = 0;
  int m = arr1.getLength(), n = arr2.getLength();
  int *A = arr1.getA();
  int *B = arr2.getA();
  int *C = new int[m + n];

  while (i < m && j < n) {
    if (A[i] < B[j]) {
      C[k++] = A[i++];
    } else {
      C[k++] = B[j++];
    }
  }

  for (; i < m; ++i) {
    C[k++] = A[i];
  }

  for (; j < n; ++j) {
    C[k++] = B[j];
  }

  return C;
}

void find_missing_elements_sorted(int arr[], int n) {
  int diff = arr[0];
  for (int i = 0; i < n; ++i) {
    if (arr[i] - i != diff) {
      while (diff < arr[i] - i) {
        cout << i + diff << ' ';
        diff++;
      }
    }
  }
  cout << '\n';
}

void find_missing_elements_unsorted(int arr[], int n) {
  int max = *max_element(arr, arr + n);
  int min = *min_element(arr, arr + n);

  int arr2[max + 1] = {0};

  for (int i = 0; i < n; ++i) {
    arr2[arr[i]]++;
  }

  for (int i = min; i < max + 1; ++i) {
    if (arr2[i] == 0) {
      cout << i << " ";
    }
  }
  cout << "\n";
}

void find_duplicates_sorted(int arr[], int n) {
  int last_duplicate = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i + 1] == arr[i] && arr[i] != last_duplicate) {
      last_duplicate = arr[i];
      cout << arr[i] << " ";
    }
  }
  cout << "\n";
}

void find_count_duplicates_unsorted(int arr[], int n) {
  int max = *max_element(arr, arr + n);
  int min = *min_element(arr, arr + n);

  int arr2[max + 1] = {0};

  for (int i = 0; i < n; ++i) {
    arr2[arr[i]]++;
  }

  for (int i = min; i < max + 1; ++i) {
    if (arr2[i] > 1) {
      cout << i << " - " << arr2[i] << " times" << '\n';
    }
  }
  cout << "\n";
}

int main() {
  // int length;
  // cout << "Enter length of array: ";
  // cin >> length;

  // Array arr(length);

  // cout << "Enter elements: ";
  // for (int i = 0; i < arr.getLength(); ++i) {
  //   cin >> arr.getA()[i];
  // }

  // arr.display();
  // arr.append(6);
  // arr.display();
  // arr.insert(9, 0);
  // arr.display();
  // // arr.deleteAt(1);
  // arr.display();
  // cout << arr.search(5) << '\n';
  // arr.display();
  // // cout << arr.binarySearch(5) << '\n';
  // // arr.display();
  // arr.reverse2();
  // arr.display();
  // arr.negativeOneSide();
  // arr.display();

  // Merging sorted arrays
  // Array arr2(6);
  // for (int i = 0; i < arr2.getLength(); ++i) {
  //   cin >> arr2.getA()[i];
  // }
  // Array arr3(arr.getLength() + arr2.getLength());
  // arr3.setA(merge_sorted_arrays(arr, arr2));
  // arr3.display();

  // int arr[] = {1, 2, 3, 5, 8, 9};
  // find_missing_elements_sorted(arr, sizeof(arr) / sizeof(arr[0]));

  // int arr[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
  // find_missing_elements_unsorted(arr, sizeof(arr) / sizeof(arr[0]));

  // int arr[] = {3, 4, 4, 8, 9, 9, 9, 10, 11};
  // find_duplicates_sorted(arr, sizeof(arr) / sizeof(arr[0]));

  // find_count_duplicates_unsorted(arr, sizeof(arr) / sizeof(arr[0]));

  // char c = '\u20b9';
  // cout << sizeof(c) << '\n';

  // string name = "karan";

  // for (int i = 0; i < name.length(); ++i) {
  //   name[i] = toupper(name[i]);
  // }
  // cout << name << '\n';

  return 0;
}
