// Program to demonstrate constructor with default argument
#include <bits/stdc++.h>
using namespace std;

typedef class test {
private:
  int val;

public:
  test(int item = 50) { // constructor with default argument
    val = item;
  }

  void show_data() {
    cout << endl;
    cout << "Value = " << val << endl;
  }

} t;

int main() {
  t ob1;
  ob1.show_data();
  return 0;
}