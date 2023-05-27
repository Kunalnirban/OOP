#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p = NULL;
    p = new int;
    // int *p = new int;
    *p = 10;
    cout<< *p;
    delete p;

    return 0;
}