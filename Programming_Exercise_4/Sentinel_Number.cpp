/*
Name of student source file: Sentinel_Number.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 12th, 2023

Project Title: Sentinel Number Sum
Project Description: This program takes user input for a string of numbers to add, delimited by -1 (without adding -1) and outputs the sum.
*/

#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  int total = 0, number;

  // Prompt user for input
  cout << "Enter the numbers to be added and end with -1: ";

  // Store first number in user input
  cin >> number;

  // Until number = -1, add numbers together
  while (number != -1) {
          // Sum numbers 
          total = total + number;

          // Store next number in user input
          // Must have way to end while loop
          cin >> number;
      }
  // Output sum of numbers     
  cout << endl;
  cout << "Total = " << total << endl;

  return 0;
}