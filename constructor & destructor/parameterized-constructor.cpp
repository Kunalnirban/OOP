#include<bits/stdc++.h>
using namespace std;

typedef class stack{
    private :
    int s[20], top, size;
    

  public:
    stack(int sz){
        size  = sz;
        top = -1;
    }
    int push(int item);
    int pop();

}st;

int st::push(int item){
    if(top < size-1){
        top = top + 1;
        s[top] = item;
        return 1;
    }
    else{
        return 0;
    }
}

int st::pop() {
    int val;
    if (top < 0){
        return -9999;
    }

    else{
        val = s[top];
        top = top - 1;
        return val;
    }
}

int main()
{
    int item, choice, result;
    int sz;

    cout<<"Enter size of stack : ";
    cin>>sz;

    cout<<endl;

    st sob(sz); // calling constructor
    
    do{
      cout << "-----Menu-----"<<endl;
      cout<<"1. PUSH \n2. POP \n3. EXIT"<<endl;

      cout<<"Enter your choice : ";
      cin>>choice;

      cout<<endl;

      switch (choice)
      {
        case 1:
            cout<<"Enter item to be Pushed : ";
            cin>>item;
            cout<<endl;
            result = sob.push(item);
            if (result == 0){
                cout<<endl;
                cout<<"Stack is full"<<endl;
            }
            else{
                cout<<item<<" is sucessfully pushed !"<<endl;
            }
            break;

        case 2:
        {

            result = sob.pop();
                if (result == -9999){
                    cout<<"POP operation unsucessfull. Stack is empty"<<endl;
                }
                else
                {
                    cout<<"POP operation Sucessfull. Popped item = "<<result<<endl;
                }
                break;
        }

        case 3:
            cout<<"Exited Sucessfully !!!";
            exit(0);
            

        default: 
            cout<<"!! Invalid Choice. Please enter choice from 1 to 3"<<endl;
            break;
      }
    }
    while (choice != 3);
    
    return 0;
}