#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    char name[30], grade;
    int roll_number, marks;
    void calculate_grade()
    {
        if (marks >= 90 )
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

public:
    read_data(){
    cout << endl;

    cout << "Enter the name of student : ";
    cin >> name;
    // cout << endl;

    cout << "Enter roll number : ";
    cin >> roll_number;
    // cout << endl;

    cout << "Enter marks : ";
    cin >> marks;
    
    calculate_grade();

    }
    
    void display_data(){
    cout << endl;

    cout << "Name of student is : " << name << endl;
    cout << "Roll number of student is : " << roll_number << endl;
    cout << "Marks of the student is : " << marks << endl;
    cout << "Grade of the student are : " << grade << endl;
    }
};

int main()
{
    student s1;
    s1.read_data();
    s1.display_data();

    return 0;
}