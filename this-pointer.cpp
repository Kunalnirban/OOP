#include <bits/stdc++.h>
using namespace std;
class student
{
private:
  int x;

public:
  student() {
     this->x = 10;
      }

  void print() { 
     cout << this->x << endl;
      }
};

int main() {
  student s;
  s.print();

  return 0;
}