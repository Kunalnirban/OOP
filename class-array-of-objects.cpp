#include <bits/stdc++.h>
using namespace std;

class student {
private:
  char name[30], grade;
  int roll_number, marks;
  void calculate_grade();

public:
  void read_data();
  void display_data();
};

void student::read_data(){ 
  cin >> name >> roll_number >> marks; 
  }

void student::display_data() {
  calculate_grade();

  cout << name << "\t" << roll_number << "\t" << marks << "\t" << grade << endl;
}

void student::calculate_grade() {
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

int main() {
  int n, i;

  cout << endl;

  cout << "Enter number of students : ";
  cin >> n;

  student s[n];

  cout << "Enter Name, Roll_no, Marks of students" << endl;
  for (i = 0; i < n; i++) {
    s[i].read_data();
  }

  cout << endl;
  cout <<"Name"<< "\t"<<"Roll"<< "\t"<< "marks"<< "\t"<< "grade"<<endl;

  for (i = 0; i < n; i++) {
    s[i].display_data();
  }
  return 0;
}