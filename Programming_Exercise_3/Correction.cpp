/*
Name of student source file: Correction.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 5th, 2023

Project Title: Correction to Area Program
Project Description: This program takes user input for the length and width of a rectangle and outputs the area to a txt file.
*/

#include <iostream> // I/O functions
#include <fstream> // File I/O functions

using namespace std;

int main()
{
  // Declare variables
  double length, width, area;

  // Declare and associate outFile with output.txt
  ofstream outFile;
  outFile.open("output.txt");

  cout << "Please enter the length and width of the rectangle: ";
  cin >> length >> width;

  area = length * width;

  outFile << "The area of the rectangle is: " << area;

  // Close output file
  outFile.close();

  return 0;
}