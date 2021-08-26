#include <bits/stdc++.h>

#include "stack.h"

using namespace std;

bool isBalanced(string exp);

int precedence(char);
bool isOperand(char);

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

bool isMatching(char ch, char ch2) {
  if (ch == '[' && ch2 == ']') {
    return true;
  } else if (ch == '{' && ch2 == '}') {
    return true;
  } else if (ch == '(' && ch2 == ')') {
    return true;
  }
  return false;
}

// Parenthesis Matching - Advanced
bool isBalancedAdvanced(string exp) {
  Stack st(exp.length());

  for (int i = 0; i < exp.length(); ++i) {
    if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
      st.push(exp[i]);
    } else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
      if (st.isEmpty()) {
        return false;
      }

      char x = st.pop();
      if (!isMatching(x, exp[i])) {
        return false;
      }
    }
  }

  return st.isEmpty();
}

// Convert from infix to postfix
string convertToPostfix(string infix) {
  Stack st(infix.length() + 2);
  st.push('\0');

  string postfix(infix.length(), '\0');

  int i = 0;
  int j = 0;
  while (i != infix.length()) {
    if (isOperand(infix[i])) {
      postfix[j++] = infix[i++];
    } else {
      if (precedence(infix[i]) > precedence(st.stackTop())) {
        st.push(infix[i++]);
      } else {
        postfix[j++] = st.pop();
      }
    }
  }

  // Put remaining in postfix
  while (!st.isEmpty()) {
    postfix[j++] = st.pop();
  }

  return postfix;
}

bool isOperand(char x) {
  if (x == '+' || x == '-' || x == '*' || x == '/') {
    return false;
  }
  return true;
}

int precedence(char x) {
  if (x == '+' || x == '-') {
    return 1;
  } else if (x == '*' || x == '/') {
    return 2;
  }
  return 0;
}

int main() {
  // string exp = "((a+b)*(c-d))";
  // cout << isBalanced(exp) << '\n';
  string exp = "{([a+b]*[c-d])/e}";
  cout << isBalancedAdvanced(exp) << '\n';

  // string infix = "a+b*c-d/e";
  // string postfix = convertToPostfix(infix);

  // cout << postfix << '\n';
  // cout << postfix.length() << '\n';

  return 0;
}