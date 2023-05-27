#include<bits/stdc++.h>
using namespace std;
class number{
    private:
    int a,b;
    void sum();
    public:
    void read_data();
};
void number::read_data(){
    cout<<"Enter the two number : ";
    cin>>a>>b;
    sum();
}
void number::sum(){
    cout<<a+b;
    cout<<endl;
}

int main()
{   
    int a,i;
    cout<<"Enter number of object : ";
    cin>>a;
    number n[a];

    for(i=0; i<a; i++){
        n[i].read_data();
    }
    return 0;
}