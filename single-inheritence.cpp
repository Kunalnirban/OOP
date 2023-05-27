// C++ Program to Display Single Inheritance
#include <bits/stdc++.h>
using namespace std;
class A {
public:
  int a, b;
protected :  
  void get_data();
};

class B : protected A {
public:
  void product();
};

void A::get_data() {
  cout << "Enter the value of a and b: ";
  cin >> a >> b;
}

void B::product() {
  get_data();
  cout << "A * B = " << a * b;
}

int main() {
  B b;
  b.product();
  return 0;
}