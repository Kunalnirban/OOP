#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, fact;
  cout << "Enter a number : ";
  cin >> a;

  cout << endl;
  fact = 1;

  int i = a;
  while (i != 1) {
    fact = fact * i;
    i--;
  }

  cout <<"Factorial of the number will be "<< fact;

  return 0;
}