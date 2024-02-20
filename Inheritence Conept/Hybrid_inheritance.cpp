// C++ Program to demonstrate Hybrid Inheritance

#include <bits/stdc++.h>
using namespace std;
class A {
public:
  int a, b;
};

class B : public A {
public:
  void get_a() {
    cout << "Enter value of a : ";
    cin >> a;
  }
};

class C : public A {
public:
  void get_b() {
    cout << "Enter value of b : ";
    cin >> b;
  }
};

class D : public B, public C {
public:
  void product() {
    get_a();
    get_b();
    cout << "Product of a & b is : " << B::a * C::b;
  }
};

int main() {
  D d;
  d.product();

  return 0;
}
