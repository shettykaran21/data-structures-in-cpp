#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'

int main() {

  string s1 = "Hello";
  string s2("Hello");
  string s3(s1, 2);
  string s4(s1, 2, 2);
  string s5(5, 'a');
  string s6({'a', 'b', 'c'});
  cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << endl;
  deb(s1.size());
  deb(s1.length());
  deb(s1.capacity());
  s1.reserve(100);
  deb(s1.capacity());
  // s1.reserve(10);
  s1.shrink_to_fit(); // Same as reserve('less than capacity') like above line
  deb(s1.capacity());
  deb(s1.size());
  s1.resize(7);
  deb(s1.size());
  deb(s1);
  s1.resize(9, 'a');
  deb(s1);
  s1.resize(3);

  s1 = "Hello";
  string::iterator itr1 = s1.begin();
  string::iterator itr2 = s1.end();
  deb(s1);
  deb(s1[1]);
  deb(s1.at(1));
  s1.at(1) = 'a';
  deb(s1);
  string s7(itr1, itr2 - 1);
  deb(s7);

  s2 = "Dragon Land";
  s1.assign(s2);
  deb(s1);
  s1.assign(s2, 2, 4);
  deb(s1);
  s1.assign("Wisdom");
  deb(s1);
  s1.assign("Wisdom", 3);
  deb(s1);
  s1.assign(s2, 3);
  deb(s1);

  s1 = "abcdef";
  char buf[20];

  return 0;
}