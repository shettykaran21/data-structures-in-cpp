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
  m.Set(1, 1, 4);
  m.Set(2, 2, 5);
  m.Set(3, 3, 6);
  m.Set(4, 4, 7);

  cout << "Enter elements: ";
  int a;
  for (int i = 1; i <= length; ++i) {
    cin >> a;
    m.Set(i, i, a);
  }
  m.Display();

  // ----------Lower Triangular Matrix------//
  // LowerTriangular m(4);
  // cout << "Enter elements: \n";
  // int a;
  // for (int i = 1; i <= length; ++i) {
  //   for (int j = 1; j <= length; ++j) {
  //     cin >> a;
  //     m.Set(i, j, a);
  //   }
  // }
  // m.Display();

  // ----------Lower Triangular Matrix------//
  // UpperTriangular m(4);
  // cout << "Enter elements: \n";
  // int a;
  // for (int i = 1; i <= length; ++i) {
  //   for (int j = 1; j <= length; ++j) {
  //     cin >> a;
  //     m.Set(i, j, a);
  //   }
  // }
  // m.Display();

  return 0;
}