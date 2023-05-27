#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Hello, Kunal";
    hash <string> my_hash;
    size_t hash_value = my_hash(str);
    cout<<hash_value;

    return 0;
}