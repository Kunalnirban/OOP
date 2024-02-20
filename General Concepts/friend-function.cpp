#include <bits/stdc++.h>
using namespace std;

typedef class student {
private:
  char name[30], grade;
  int roll_number, marks;
  void calculate_grade();
  friend void sortlist(int n);

public:
  void read_data();
  void display_data();
}s;

void s::read_data(){ 
  cin >> name >> roll_number >> marks; 
  }

void s::display_data() {
  calculate_grade();

  cout << name << "\t" << roll_number << "\t \t" << marks << "\t" << grade << endl;
}

void s::calculate_grade() {
  if (marks >= 90)
    grade = 'A';
  else if (marks >= 80)
    grade = 'B';
  else if (marks >= 70)
    grade = 'C';
  else if (marks >= 60)
    grade = 'D';
  else if (marks >= 50)
    grade = 'E';
  else
    grade = 'F';
}

s studob[50];
void sortlist(int n); //function Prototype

int main() {
  int n, i;

  cout << endl;

  cout << "Enter number of students : ";
  cin >> n;

  cout << "Enter Name, Roll_number, Marks of students" << endl;
  for (i = 0; i < n; i++) {
    ::studob[i].read_data();
  }

  cout<<endl;
  cout<<"Merit list of students : "<<endl;

  sortlist(n); // function call
  cout <<"Name"<< "\t"<<"Roll"<< "\t \t"<< "marks"<< "\t"<< "grade"<<endl;

  for (i = 0; i < n; i++) {
    ::studob[i].display_data();
  }

  return 0;
}

void sortlist(int n){
   int i, j ,largest,pos;
   s tempob;
   for(i = 0; i < n-1; i++){
     largest = ::studob[i].marks;
     pos = i;

     for(j = i+1; j < n; j++){
      if(::studob[j].marks > largest){
        largest = ::studob[j].marks;
        pos = j;
      }
     }

     tempob = ::studob[i];
     ::studob[i] = ::studob[pos];
     ::studob[pos] = tempob;
   }
}