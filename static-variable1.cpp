#include<bits/stdc++.h>
using namespace std;
void increment(){
    static int counter = 0;
    counter++;
    cout<<"Counter value : "<<counter<<endl;
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        increment();
    }
    return 0;
}