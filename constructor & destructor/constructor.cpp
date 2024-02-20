#include<bits/stdc++.h>
using namespace std;

class test {
    private:
    int val;

    public:
    test(){         // default constructor

    }

    test(int item){    // parameterized constructor
    val = item;
    }

    test(test &ob){      //copy comstructor
    val = ob.val * 5;
    }

    void show_data(){
        cout<<endl;
        cout<<"Value = "<<val<<endl;
    }

};

int main()
{
    test ob1(15);
    ob1.show_data();

    test ob2(ob1);
    ob2.show_data();

    return 0;
}