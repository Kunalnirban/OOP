// Program to demonstrate passing object as argument to a function using Pass by
// refrence

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

void student::read_data() {
  cout << endl;

  cout << "Enter the name of student : ";
  cin >> name;
  // cout << endl;

  cout << "Enter roll number : ";
  cin >> roll_number;
  // cout << endl;

  cout << "Enter marks : ";
  cin >> marks;
}

void student::display_data() {
  calculate_grade();

  cout << endl;

  cout << "Name of student is : " << name << endl;
  cout << "Roll number of student is : " << roll_number << endl;
  cout << "Marks of the student is : " << marks << endl;
  cout << "Grade of the student are : " << grade << endl;
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

void test(student &sob) {
  sob.read_data();
  cout << endl;
  cout << "Display in test ()" << endl;
  sob.display_data();
}

int main() {
  student studob;
  test(studob);
  cout << endl;
  cout << "Diasplay in main()" << endl;
  studob.display_data();

  return 0;
}