//Program to display address of each element of an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int *ptr;
    int i;

//Printing address using index of an array
    cout << "<-- Printing address of an array without pointer -->"<<endl;
    for(i=0; i<5; i++){
        cout<<"address of index arr["<<i<<"] is "<<&arr[i]<<endl;
    }

// Printing address of an array using pointer
    cout<<endl;
    cout << "<-- Printing address of an array using pointer -->"<<endl;
     for (i = 0; i < 5; i++) {
      cout << "address of array of index arr[" << i << "] is " << (ptr + i)<< endl;
    }

    return 0;
}