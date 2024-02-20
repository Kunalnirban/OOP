#include<bits/stdc++.h>
using namespace std;

float divide(float a, float b) {
  if (b == 0) {
    throw "\nDivisor can not be ";
  } else {
    return (a / b);
  }
}
int main()
{
  float x, y, result;
  cout << "Enter two numbers : ";
  cin >> x >> y;
  cout << endl;

  try {
    result = divide(x, y);
    cout << "Result will be : " << result;
    }
    catch(char message[]){
        cout<<message;
    }

    return 0;
}