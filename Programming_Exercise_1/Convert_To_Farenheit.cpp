/*
Name of student source file: Convert_To_Farenheit.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: 01/22/2023

Project Title: Convert Celcius to Farenheit
Project Description: This program takes user input for the temperature in Celcius and converts it into the Farenheit temperature.
*/

#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  double celcius, farenheit;

  // Request temperature input in Celsius
  cout << "Please enter the temperature in Celcius (C): ";
  cin >> celcius;
  cout << endl;

  // Calculate Farenhait temperature
  farenheit = celcius * 1.80 + 32;

  // Display temperature in Farenheit
  cout << "The temperature in Farenheit (F) is: " << farenheit << endl;

  return 0;
}