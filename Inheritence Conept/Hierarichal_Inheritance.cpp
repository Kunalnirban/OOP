// C++ Program to demonstrate Hierarchical Inheritance
#include <bits/stdc++.h>
using namespace std;

class data {
public:
  int a, b;
  void get_data() {
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    cout << endl;
  }
};

class sum : public data {
public:
  void add() {
    get_data();
    cout << "Sum of " << a << " and " << b << " will be: " << a + b << endl;
  }
};

class multiply : public data {
public:
  void product() {
    get_data();
    cout << "Product of " << a << " and " << b << " will be: " << a * b << endl;
  }
};

int main() {
  sum s;
  s.add();
  multiply m;
  m.product();
  return 0;
}