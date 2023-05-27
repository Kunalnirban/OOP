#include<bits/stdc++.h>
using namespace std;

typedef class student{
    public :
    static int total;
    student (){
        total++;
    }
}st;
int st :: total = 0;
int main()
{
    st s1;
    cout<<s1.total<<endl;
    st s2;
    cout<<s2.total;

    return 0;
}