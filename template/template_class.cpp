#include <iostream>
using namespace std;

template <class myType> 
class Number {
public:
  void swap(myType &a, myType &b);
};

template <class myType> 
void Number<myType>::swap(myType &a, myType &b) {
  myType temp;
  temp = a;
  a = b;
  b = temp;
  cout << "Exchanged values are : " << a << " " << b << endl;
}

int main() {
  Number<double> a;
  a.swap(4.5, 6.7);
  Number<int> b;
  b.swap(4, 6);
  return 0;
}
