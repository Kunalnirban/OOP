//C++ Program to read and display data using pointer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int *new_number = &number;

    cout<<"Enter a number : ";
    cin>>*new_number;

    cout<<endl;

    cout<<"Entered number is : "<<*new_number;
    // cout<<"Entered number is : "<<number;

    return 0;
}