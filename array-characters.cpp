#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *ptr = NULL;
    ptr = new char[20];
    // char *ptr = new char[20]; 
    *ptr = 'Hello';
    
    for(int i = 0; i<5; i++){
        cout<<*ptr;
    }
    delete ptr;
    return 0;
}