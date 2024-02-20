#include<bits/stdc++.h>
using namespace std;

class student{
    private :
    char name[20];

    public :
    void setname(){
        cin>>name;
    }
    void getname(){
        cout<<name;
    }
    
};

int main()
{   
    int n;
    cout<<"Enter the number of objects to be created : ";
    cin>>n;

    student *s = new student[n];

    for(int i = 0; i<n; i++){
        cout<<"Enter name for student s"<<i<<" : ";
        s[i].setname();
    }
    for(int i = 0; i<n; i++){
        cout<<"Name for student s"<<i<<" is ";
        s[i].getname();
        cout<<endl;
    }

    return 0;
}