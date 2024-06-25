/*
  Name of student source file: Avg_Test_Score.cpp
  Student Name: Nyki Anderson
  Student UIN: 01179386
  Lab CRN: 28415
  Date: January 22nd, 2023

  Project Title: Average Test Score
  Project Description: This program accepts four test scores as input and calculates the average of the test scores.
*/

#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  double test1, test2, test3, test4, avg;

  // User input for 1st test score
  cout << "Enter the test score 1: ";
  cin >> test1;

  // User input for 2nd test score
  cout << "Enter the test score 2: ";
  cin >> test2;

  // User input for 3rd test score
  cout << "Enter the test score 3: ";
  cin >> test3;

  // User input for 4th test score
  cout << "Enter the test score 4: ";
  cin >> test4;

  // Calculate average of the five test scores
  avg = (test1 + test2 + test3 + test4) / 4;

  // Display average test score
  cout << "The average test score is: " << avg << endl;

  return 0;
}