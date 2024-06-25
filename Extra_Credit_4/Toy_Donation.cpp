/*
Name of student source file: Toy_Donation.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 19th, 2023

Project Title: Student Toy Donation 
Project Description: This program takes user input for the number of students, then iteratively prompts user for students' names and how many toys they donated. Fianlly it outputs the total number of toys donated.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  // Declare variables
  int i, numStudents, numToys, totalToys = 0;
  string name;

  // Format and print output header
  cout << "    " << setw(31) << setfill('*') << "" << endl;
  cout << "    " << setw(31) << setfill(' ') << "* School Toys Donation Center *" << endl;
  cout << "    " << setw(31) << setfill('*') << "" << endl << endl;

  // Prompt user for the number of students that donated
  cout << "Please enter the number of students that donated: ";
  cin >> numStudents;
  cout << endl;

  // Iterate for each student
  for (i = 0; i < numStudents; i++)
  {
    // Prompt user for the name and number of toys for each student
    cout << "Please enter the student's name and the number of toys they donated: ";
    cin >> name >> numToys;
    cout << endl << endl;

    totalToys += numToys;
  }

  // Output the total number of toys donated
  cout << "The total number of toys donated is: " << totalToys;

  return 0;
}