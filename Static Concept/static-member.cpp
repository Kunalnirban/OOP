#include<bits/stdc++.h>
using namespace std;

class test{
private:
    int code;
    static int count;

public :
    void setcode(){
       code = ++ count; 
    }
    void showcode(){
       cout<<"\nObject number : "<<code<<endl;
    }
    static void showcount(){
       cout<<"\nTotal objects created : "<<count<<endl;
    }
};

int test :: count;

int main()
{
    test ob1, ob2;
    ob1.setcode();
    ob2.setcode();

    test :: showcount();
    test ob3;
    ob3.setcode();

    test :: showcount();
    ob1.showcode();
    ob2.showcode();
    ob3.showcode();
    
    return 0;
}