#include<bits/stdc++.h>
using namespace std;
class MyClass {
private:
  static int counter;

public:
  static void increment() {
     counter++; 
    }
  static int getCount() {
     return counter; 
     }
};

int MyClass::counter = 0;

int main() {
  MyClass a;
   a.increment();
   a.increment();
   a.increment();

  cout << "Counter value: " << a.getCount() << endl;

  return 0;
}