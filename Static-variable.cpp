#include<bits/stdc++.h>
using namespace std;
class item{
public:
    int number;
    static int count;
    void getdata(int a){
    number = a;
    count = count + 1;
 }

    void getcount(){
    cout<<"\nCount = "<<count<<endl;
     } 

};

int item :: count;

int main()
{
    cout<<"\nBefore reading Data value, number of objects Created are : "<<endl;

    item a, b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    // reading data

    a.getdata(20);
    b.getdata(60);
    c.getdata(10);

    cout<<"\nAfter reading Data value, number of objects Created are : "<<endl;

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}