// C++ program to demonstrate output iterator
#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  vector<int>::iterator i1;
  for (i = v.begin(); i != v.end(); ++i) {
    *i = 1;
  }
  return 0;
}