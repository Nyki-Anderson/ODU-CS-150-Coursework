/*
Name of student source file: Marine_Corp_Weight.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: January 29th, 2023

Project Title: Maximum Weight for the Marine Corp
Project Description: This program prompts the user to input a man's height (between 58 and 80) in inches and calculates their approximate weight in pounds. This is implementing the equation for maximum weight for a man in the United States Marine Corp which can be solved using the quadratic formula.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Declare constants
const double a = 0.040;
const double b = -0.11;
const double c = 3.9;

int main()
{
  // Declare all variables
  double x, y;

  // Prompt user for the man's height in inches
  cout << "Please enter a man's height in inches (must be between 58 and 80 inches): ";

  // Store input in variable x
  cin >> x;

  // Calculate the man's approx weight in lbs
  y = a * pow(x, 2) + b * x + c;

  cout << " inches." << endl << "The maximum weight of the man is " << y << " pounds." << endl;

  return 0;
}