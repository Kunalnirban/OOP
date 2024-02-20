#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter a character ";
    cin>>ch;

    if (!isalpha(ch))
      {
        printf("Error! Non-alphabetic character.");
        }
    else if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
        ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') 
        {
            cout<<endl;
      cout << "Entered character " << ch << " is vowel.";
    } 
    else 
    {
      cout << endl;
      cout << "Entered character " << ch << " is consonent.";
    }

 return 0;
}

