//Program that read data from user and display data entered by user using pointer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int i;
    int *ptr;
    // arr[i] = *ptr;

    for(i = 0; i<5; i++){
        cout<<"Enter the value at arr["<<i<<"] : ";
        cin>>arr[i];
        // cout<<endl;
    }

    cout << endl;
    for (i = 0; i < 5; i++){
      cout << "Address of value at arr[" << i << "] is "<<ptr+i<<endl;
    }

      return 0;
}