#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void virtual display(){
        cout<<"Base class";
    }
};
class B: public A{
    public:
    void display(){
        cout<<"Derived class";
    }      
};
int main()
{
    A* a;
    B b;
    a = &b;
    a->display();
    return 0;
}