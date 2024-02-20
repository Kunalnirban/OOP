#include<bits/stdc++.h>
using namespace std;

class c{
    private:
    static int counter;
    public:
    static void increase(){
        counter++;
    }

    static int display(){
        return counter;
    }
};

int c :: counter = 0;
int main()
{

    c::increase();
    c::increase();
    c::increase();
    cout << "Counter = " << c::display()<<endl;
    return 0;
}