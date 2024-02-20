#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;

    cout<<"Enter a number ";
    cin>>a;

    switch(a){
        case 1:
            cout<<"Monday";
            break;

        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
          break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;

        default:
            cout<<"Not a valid input";
    }


 return 0;
}