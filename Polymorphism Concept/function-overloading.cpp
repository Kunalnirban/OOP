// C++ Program to demostrate function Overloading
#include <bits/stdc++.h>
using namespace std;

float shape_area(int r) { return (3.14 * r * r); }
float shape_area(int b, int h) { return (0.5 * b * h); }
float shape_area(float l, float b) { return (l * b); }
int main() {
  int radius, base, height;
  float length, breadth, area;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  cout << "Enter the base of triangle : ";
  cin >> base;

  cout << "Enter the height of triangle : ";
  cin >> height;

  cout << "Enter the length of rectangle: ";
  cin >> length;

  cout << "Enter the breadth of rectangle: ";
  cin >> breadth;

  area = shape_area(radius);
  cout <<"area of circle is : "<<area<<endl;

  area = shape_area(base, height);
  cout <<"area of triangle is : "<<area<<endl;

  area = shape_area(length, breadth);
  cout << "area of rectangle is : " << area << endl;

  return 0;
}
