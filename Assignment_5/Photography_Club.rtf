/*
Name of student source file: Photography_Club.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 19th, 2023

Project Title: Age Distribution in Photography Club
Project Description: This program takes a txt file is input for student name and age information and analyzes the data for the oldest and youngest student as well as calculates the average age.
*/

#include <iostream> // I/O functions
#include <iomanip> // I/O formatting functions
#include <fstream> // File I/O functions
#include <string> // String functions and definitions
using namespace std;

int main()
{
  // Declare and initialize variables
  int currentAge, maxAge, minAge, numStudents = 1;
  double sumAge = 0;
  string currentName, maxName, minName;

  // Declare file i/o stream variable and open txt file
  ifstream inFile;
  inFile.open("input-6.txt");

  // Read first line of txt file
  inFile >> currentName >> currentAge;

  // Set first student to max and min 
  maxAge = currentAge;
  maxName = currentName;
  minAge = currentAge;
  minName = minName;

  // Add first age to sum
  sumAge += currentAge;

  // Format header of output
  cout << "  " << setw(20) << setfill('*') << "" << endl;
  cout << "  " << setw(20) << setfill(' ') << "* Photography Club *" << endl;
  cout << "  " << setw(20) << setfill('*') << "" << endl << endl;
  cout << setw(8) << setfill(' ') << left << "Name" << setw(3) << right << "Age" << endl;
  cout << setw(8) << setfill(' ') << left << "====" << setw(3) << right << "===" << endl;

  while (inFile)
  {
    // Output student info
    cout << setw(8) << left << currentName << setw(3) << currentAge << endl;

    // Read next line of input
    inFile >> currentName >> currentAge;

    // Count number of students (starts with 1 because first student read in before entering while loop)
    numStudents++;

    // Checks if currentAge is the new minAge
    if (currentAge <= minAge)
    {
      minAge = currentAge;
      minName = currentName;
    }
    // Checks if currentAge is the new maxAge
    else if (currentAge >= maxAge)
    {
      maxAge = currentAge;
      maxName = currentName;
    }

    // Add currentAge to sum
    sumAge += currentAge;
  }

  inFile.close();

  cout << endl << "The oldest student is " << maxName << ". The student is " << maxAge << " years old." << endl;

  cout << "The youngest student is " << minName << ". The student is " << minAge << " years old." << endl;

  cout << "The average age is " << fixed << showpoint << setprecision(1) << sumAge/numStudents << " years old." << endl;

  return 0;
}