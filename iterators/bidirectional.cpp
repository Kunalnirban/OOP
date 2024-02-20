#include <bits/stdc++.h>
using namespace std;
int main() {
  list<int> v1 = {1, 2, 3, 4, 5};

  list<int>::iterator i1;

  for (i1 = v1.begin(); i1 != v1.end(); i1++) {
    *i1 = 1;
  }

  for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
    cout << (*i1) << " ";
  }
  return 0;
}