#include<bits/stdc++.h>
using namespace std;
int a = 12, b = 23;
int main()
{
    int a = 8, b = 5;
    
    {
      int i = a, j = b;
      int a = 2, b = 9;

      cout << "Values accessing inside block elements" << endl;

      cout << "Value of a is " << a << endl;
      cout << "Value of b is " << b << endl;

      cout << "Values accessing outside block elements" << endl;
      cout << "Value of a is " << i << endl;
      cout << "Value of b is " << j << endl;

      cout << "Values accessing global variables " << endl;

      cout << "Value of a is " << ::a << endl;
      cout << "Value of b is " << ::b << endl;

    }

    cout <<"Outside the block"<<endl;
    cout<<endl;
    
    cout << "Values accessing global variables " << endl;
    cout << "Value of a is " << ::a << endl;
    cout << "Value of b is " << ::b << endl;

    cout << "Values accessing inside block elements" << endl;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;

    return 0;
}