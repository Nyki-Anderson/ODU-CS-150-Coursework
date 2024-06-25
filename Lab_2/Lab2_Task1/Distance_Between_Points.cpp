/*
  Name of student source file: Distance_Between_Points.cpp
  Student Name: Nyki Anderson
  Student UIN: 01179386
  Lab CRN: 28415
  Date: January 22nd, 2023

  Project Title: Distance Between Two Points
  Project Description: This program takes user input for two cartesian coordinates and calculates the distance between them.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // Declare variables
  double x1, x2, y1, y2, side1, side2, distance;

  // Displaying the request for input
  cout << "Enter the values for x1, y1, x2, and y2: " << endl;

  // User input for each coordinate
  cin >> x1 >> y1 >> x2 >> y2;

  // Calculate the distance between two points
  side1 = x2 - x1;
  side2 = y2 - y1;
  distance = sqrt((side1 * side1) + (side2 * side2));

  // Display distance
  cout << "The distance between (" << x1 << "," << x2 << ") and (" << x2 << "," << y2 << ") is: " << distance << endl;

  return 0;
}
