// C++ Program to demonstrate Multilevel Inheritance
#include <bits/stdc++.h>
using namespace std;
class A {
public:
  int a;
};

class B : protected A {
public:
  int b;
};

class C :protected B {
public:
  void product();
  void get_data();
};

void C::get_data() {
  cout << "Enter the value of a and b: ";
  cin >> a >> b;
}

void C::product() {
  get_data();
  cout << "A * B = " << a * b;
}

int main() {
  C c;
  c.product();
  return 0;
}