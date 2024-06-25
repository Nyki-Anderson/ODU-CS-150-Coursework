/*
Name of student source file: Employee_Profile.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: January 29th, 2023

Project Title: Automated Employee Profile Builder
Project Description: This program takes a txt file containing space delimited employee profile information and translates the data into a human-friendly file format.
*/

#include <iostream> // I/O functions
#include <iomanip> // I/O formatting functions
#include <fstream> // File I/O functions
#include <string> // String functions and definitions

using namespace std;

int main()
{
  // Declare input and output stream variables
  ifstream inFile;
  ofstream outFile;

  // Declare all string variables
  string firstName, lastName, department;

  // Declare all floating-point variables
  double grossSalary, bonus, taxes, paycheck, distanceTraveled, travelTime, avgSpeed, costPerCup, salesAmount;

  // Declare int variable
  int coffeeCupsSold;

  // Open both txt files and associate them with ifstream and ofstream variables
  inFile.open("inData.txt");
  outFile.open("outData.txt");

  // Read each value separated by a space character and store in corresponding variable (do this for all four lines of the input file).
  inFile >> firstName >> lastName >> department;
  // Ignore the rest of the line until a newline character is found (do this for all four lines of the input file).
  inFile.ignore(100, '\n');

  inFile >> grossSalary >> bonus >> taxes;
  inFile.ignore(100, '\n');

  inFile >> distanceTraveled >> travelTime;
  inFile.ignore(100, '\n');

  inFile >> coffeeCupsSold >> costPerCup;
  
  // Close input file 
  inFile.close();

  // Calculate paycheck
  paycheck = grossSalary * (1 + 0.01 * bonus) * (1 - 0.01 * taxes);

  // Calculate avgSpeed of commute
  avgSpeed = distanceTraveled / travelTime;

  // Calculate salesAmount
  salesAmount = coffeeCupsSold * costPerCup;

  // Output all employee profile info to outData.txt and fill employee profile with correct data.
  // Output first line of outData.txt with name and department info
  outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;

  // Format all floating-point variables with a precision of 2 decimal points.
  outFile << fixed << showpoint << setprecision(2);

  // Output second line of outData.txt with monthly gross salary, monthly bonus, taxes, and paycheck
  outFile << "Monthly Gross Salary: $" << grossSalary << ",  Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "% " << endl << "Paycheck: $"<< paycheck << endl << endl;

  // Output third line of outData.txt with distance traveled, travel time, and average speed
  outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelTime << " hours" << endl << "Average Speed: " << avgSpeed << " miles per hour" << endl << endl;

  // Output fourth line of outData.txt with number of coffee cups sold, cost per cup, and sales amount
  outFile << "Number of Coffee Cups Sold: " << coffeeCupsSold << ", Cost: $" << costPerCup << " per cup" << endl << "Sales Amount = $" << salesAmount << endl; 

  // Close output file
  outFile.close();

  // Unset fixed formatting 
  outFile.unsetf(ios::fixed);

  // Clear and restore input stream
  inFile.clear();

  return 0;
}
