#include<bits/stdc++.h>
using namespace std;
int fun() {
  static int count = 0;
  count++;
  return count;
}
int main()
{
    cout<<fun()<<endl;
    cout<<fun()<<endl;
    return 0;
}
