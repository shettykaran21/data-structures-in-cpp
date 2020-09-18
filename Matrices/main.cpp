#include <algorithm>
#include <iostream>
#include <string>

#include "diagonal.h"
#include "lower_triangular.h"
#include "upper_triangular.h"

using namespace std;

int main() {
  int length;
  cout << "Enter dimension of matrix: ";
  cin >> length;

  // ---------Diagonal Matrix-------//
  Diagonal m(length);
  m.set(1, 1, 4);
  m.set(2, 2, 5);
  m.set(3, 3, 6);
  m.set(4, 4, 7);

  cout << "Enter elements: ";
  int a;
  for (int i = 1; i <= length; ++i) {
    cin >> a;
    m.set(i, i, a);
  }
  m.display();

  // ----------Lower Triangular Matrix------//
  // LowerTriangular m(4);
  // cout << "Enter elements: \n";
  // int a;
  // for (int i = 1; i <= length; ++i) {
  //   for (int j = 1; j <= length; ++j) {
  //     cin >> a;
  //     m.set(i, j, a);
  //   }
  // }
  // m.display();

  // ----------Lower Triangular Matrix------//
  // UpperTriangular m(4);
  // cout << "Enter elements: \n";
  // int a;
  // for (int i = 1; i <= length; ++i) {
  //   for (int j = 1; j <= length; ++j) {
  //     cin >> a;
  //     m.set(i, j, a);
  //   }
  // }
  // m.display();

  return 0;
}