#include<bits/stdc++.h>
using namespace std;
template <class myType>

class stack{
    private:
    myType s[20];
    int top, size;

    public:
        stack(int sz = 20){
            top = -1;
            size = sz;
        }

        int push(myType item);
        int pop(myType item);
};

template <class myType>
int stack <myType> :: push(myType item){
    if(top < size - 1){
        top = top + 1;
        s[top] = item;
        return 1;
    }
    else{
        return 0;
    }
}

template <class myType>
int stack <myType> :: pop(myType &item){
    if(top > -1){
        item = s[top];
        top = top - 1;
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int size, result;
    int ival;
    float fval;

    cout<<"Enter the size of stack : ";
    cin>>size;
    cout<<size;

    stack <int> sob(size);
    result = sob.push(20);
    if(result == 1){
        cout<<"Item pushed sccessfully !!!"<<endl;
    }
    else{
        cout<<"Stack is full"<<endl;
    }

    
    result = sob.pop(ival);
    if(result == 1){
        cout<<"Item poppeed sccessfully !!!"<<endl;
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }

    stack <float> fob(5);
    result = fob.push(22.67);
    if(result == 1){
        cout<<"Item pushed sccessfully !!!"<<endl;
    }
    else{
        cout<<"Stack is full"<<endl;
    }
    
    result = fob.pop(fval);
    if(result == 1){
        cout<<"Item poppeed sccessfully !!!"<<endl;
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }

    return 0;
}