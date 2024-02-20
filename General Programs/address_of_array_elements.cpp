// Program to display address of each element of an array;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];

    cout<<"Enter array elements : ";
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < 5; i++){
        cout<<"Address of "<<arr[i]<<" is : "<<&arr[i]<<endl;
    }

    return 0;
}