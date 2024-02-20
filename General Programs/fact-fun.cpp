#include <bits/stdc++.h>
using namespace std;

int factorial(int a) {
  int i = a;
  int fact = 1;

  while (i != 1) {
    fact = fact * i;
    i--;
  }
  return fact;
}
int main() {
  int a;

  cout << "Enter a number ";
  cin >> a;

  cout << endl;

  int result = factorial(a);

  cout << result;

  return 0;
}