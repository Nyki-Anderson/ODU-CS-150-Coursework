/*
  Name of student source file: Cylinder_Volume.cpp
  Student Name: Nyki Anderson
  Student UIN: 01179386
  Lab CRN: 28415
  Date: January 22nd, 2023

  Name of Project: Volume of a Cylinder Calculator
  Project Description: This program calculates the volume of a cylinder given the area of the cross-sectional circle and length of the cylinder.
*/

#include <iostream>

using namespace std;

// Declare constant for number pi
const double NUMBER_PI = 3.14159;

int main()
{
  // Declare variables
  double radius, length, area, volume;

  // Request radius and length of the cylinder
  cout << "Please enter the radius of the cylinder: ";
  cin >> radius;
  cout << "Please enter the length of the cylinder: ";
  cin >> length;
  cout << endl;

  // Calculate and display the area of the cylinder
  area = radius * radius * NUMBER_PI;
  cout << "The area of the cylinder is: " << area << endl;
  
  // Calculate and display the volume of the cylinder
  volume = area * length;
  cout << "The volume of the cylinder is: " << volume << endl;

  return 0;
}

