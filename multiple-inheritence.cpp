// C++ Program to demonstrate Multiple Inheritance 
#include <bits/stdc++.h>
using namespace std;

class A {
public:
  int a;
  void get_data() {
    cout << "Enter the value of a: ";
    cin >> a;
  }
};

class B {
public:
  int b;
  void get_data() {
    cout << "Enter the value of b: ";
    cin >> b;
  }
};

class C : protected A, protected B {
public:
  void sum();
};

void C::sum() {
  A::get_data();
  B::get_data();
  cout << "Sum = " << a + b;
}

int main() {
  C c;
  c.sum();
  return 0;
}