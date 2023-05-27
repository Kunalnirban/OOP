#include<bits/stdc++.h>
using namespace std;
template <class myType>
void swap(myType &oldval, myType &newval){
    myType temp;
    temp = oldval;
    oldval = newval;
    newval = temp;
}

int main()
{
    int x = 8, y = 9;
    swap(x,y);
    cout<<"Exchanged integer values are : "<<x<<" and "<<y<<endl;

    float f1 = 4.675, f2 = 81.3245;
    swap(f1,f2);
    cout<<"Exchanged Float values are : "<<f1<<" and "<<f2<<endl;

    char c1 = 'A', c2 = 'B';
    swap(c1,c2);
    cout<<"Exchanged Character values are : "<<c1<<" and "<<c2<<endl;

    return 0;
}