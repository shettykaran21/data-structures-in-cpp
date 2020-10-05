#include <bits/stdc++.h>

#include "stack.h"

using namespace std;

// Parenthesis Matching
bool isBalanced(string exp) {
  Stack st(exp.length());

  for (int i = 0; i < exp.length(); ++i) {
    if (exp[i] == '(') {
      st.push(exp[i]);
    } else if (exp[i] == ')') {
      if (st.isEmpty()) {
        return false;
      }
      st.pop();
    }
  }

  return st.isEmpty();
}

int main() {
  string exp = "((a+b)*(c-d))";

  cout << isBalanced(exp) << '\n';

  return 0;
}