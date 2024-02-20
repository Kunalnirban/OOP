#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, i;
    cout<<"Enter a number ";
    cin>>a;

    for (i = 2; i <= a/2; i++)
    {
        if(a % i == 0){
            cout<<"Number is Composite";
            break;
        }
    }
    if(i == a/2){
        cout<<"Number is Prime";
    }
    
 return 0;
}