// C++ Program to demosntrate Virtual Function
#include <bits/stdc++.h>
using namespace std;
class base {
public:
  void display() { 
    cout << "\nDisplay Base" << endl; 
  }
  virtual void show() 
  {
     cout << "Show base"; 
  }
};

class derived : public base {
public:
  void display() {
     cout << "Display derived"; 
  }
  void show() {
     cout << "Show derived"; 
  }
};

int main() {
  base b;
  derived d;
  base *bptr;
  bptr = &b;

  bptr->display();
  bptr->show();

  bptr = &d;
  bptr->display();
  bptr->show();
  return 0;
}