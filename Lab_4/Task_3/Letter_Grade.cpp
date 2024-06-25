/*
Name of student source file: Letter_Grade.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 5th, 2023

Project Title: Letter Grade Messages
Project Description: This program prompts the user for their letter grade and outputs a message depending on that grade.
*/

#include <iostream>

using namespace std;

int main()
{
  // Declare variable
  char letterGrade;

  // Prompt user to input their letter grade
  cout << "Please enter your letter grade: ";
  cin >> letterGrade;
  
  // Determine the message based on the input letter grade (uppercase and lowercase are accepted)
  switch (letterGrade)
  {
    case 'a':
    case 'A':
      cout << "Excellent.";
      break;
    case 'b':
    case 'B':
      cout << "Very Good.";
      break;
    case 'c':
    case 'C':
      cout << "Passing.";
      break;
    case 'd':
    case 'D':
    case 'f':
    case 'F':
      cout << "Not Good, Go Study.";
      break;
    default:
      cout << "That is not a possible grade.";
      break;
  }

  return 0;
}