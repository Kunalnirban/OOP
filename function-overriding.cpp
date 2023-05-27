// C++ Program to demostrate Function overriding
#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    void display(){
        cout<<"Base function";
    }
};
class derived : public base{
    public :
    void display(){
        cout<<"Derived function";
    }
};

int main()
{
    derived dob;
    dob.display();
    return 0;
}