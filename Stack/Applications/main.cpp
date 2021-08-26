#include <bits/stdc++.h>

#include "stack.h"

using namespace std;

bool isMatching(char, char);

int precedence(char);
bool isOperand(char);

int outStackPrecedence(char);
int inStackPrecedence(char);
bool isOperandAdvanced(char);

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

// Precedences
// +, -: 1 | *, /: 2
int precedence(char x) {
  if (x == '+' || x == '-') {
    return 1;
  } else if (x == '*' || x == '/') {
    return 2;
  }
  return 0;
}

// Convert from infix to postfix with associativity
string convertToPostfixAdvanced(string infix) {
  Stack st(infix.length() + 2);
  st.push('\0');

  string postfix(infix.length(), '\0');

  int i = 0;
  int j = 0;
  while (i != infix.length()) {
    if (isOperandAdvanced(infix[i])) {
      postfix[j++] = infix[i++];
    } else {
      if (outStackPrecedence(infix[i]) > inStackPrecedence(st.stackTop())) {
        st.push(infix[i++]);
      } else if (outStackPrecedence(infix[i]) <
                 inStackPrecedence(st.stackTop())) {
        postfix[j++] = st.pop();
      } else if (outStackPrecedence(infix[i]) ==
                 inStackPrecedence(st.stackTop())) {
        st.pop();
        i++;
      }
    }
  }

  // Put remaining in postfix
  while (!st.isEmpty()) {
    postfix[j++] = st.pop();
  }

  return postfix;
}

/* Precedences
 * Precedence increases for operators with L-R associativity
 * Precedence decreases for operators with R-L associativity
 * Out Stack
 * +, -: 1 | *, /: 3 | ^: 6 | (: 7 | ): 0
 * In stack
 * +, -: 2 | *, /: 4 | ^: 5 | (: 0 | ): -
 */
int outStackPrecedence(char x) {
  if (x == '+' || x == '-') {
    return 1;
  } else if (x == '*' || x == '/') {
    return 3;
  } else if (x == '^') {
    return 6;
  } else if (x == '(') {
    return 7;
  } else if (x == ')') {
    return 0;
  }
  return -1;
}

int inStackPrecedence(char x) {
  if (x == '+' || x == '-') {
    return 2;
  } else if (x == '*' || x == '/') {
    return 4;
  } else if (x == '^') {
    return 5;
  } else if (x == '(') {
    return 0;
  }
  return -1;
}

bool isOperandAdvanced(char x) {
  if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^' || x == '(' ||
      x == ')') {
    return false;
  }
  return true;
}

int main() {
  // string exp = "((a+b)*(c-d))";
  // cout << isBalanced(exp) << '\n';
  // string exp = "{([a+b]*[c-d])/e}";
  // cout << isBalancedAdvanced(exp) << '\n';

  // string infix = "a+b*c-d/e";
  // string postfix = convertToPostfix(infix);

  // cout << postfix << '\n';
  // cout << postfix.length() << '\n';

  string infix = "((a+b)*c)-d^e^f";
  string postfix = convertToPostfixAdvanced(infix);

  cout << postfix << '\n';

  return 0;
}