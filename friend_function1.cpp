#include<bits/stdc++.h>
using namespace std;
class number{
    private:
    int b = 12, a =5;
    public:
      friend void myfriend(number ob);
};

void myfriend(number ob){
    cout<<"value of a : "<<ob.a<<endl;
    cout<<"value of b : "<<ob.b;
}

int main()
{ 
    number ob1;
    myfriend(ob1);
    return 0;
}