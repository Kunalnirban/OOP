#include<bits/stdc++.h>
using namespace std;

float area(int radius){
    return 3.14*radius*radius;
}
float area(int length, int breadth) 
{
     return length * breadth; 
}

int main()
{
    int radius, length, breadth;
    cout<<"Enter radius, length, breadth : ";
    cin>>radius>>length>>breadth;
    cout<<endl;
    cout<<"Area of circle: "<<area(radius)<<endl;
    cout<<"Area of rectangle: "<<area(length, breadth)<<endl;
    return 0;
}