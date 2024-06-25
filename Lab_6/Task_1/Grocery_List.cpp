/*
Name of student source file: Grocery_List.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 19th, 2023

Project Title: Grocery Price Calculator
Project Description: This program takes user input for the number of items purchased and the price for each item, then calculates the total cost.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // Declare variables
  int numItems, count = 1;
  double itemCost, totalCost = 0.0;

  // Prompt user to input number of items and store in numItems
  cout << "How many items did you purchase today? ";
  cin >> numItems;
  cout << endl;

  // Prompt the user to input the cost of each item purchased
  cout << "Enter the cost of each of the " << numItems << " items you purchased: ";

  // Allow user to input each item's cost until the number of items has been reached
  while (count <= numItems)
  {
    cin >> itemCost;
    totalCost += itemCost; // Add cost of each item
    count++;
  }

  cout << fixed << showpoint << setprecision(2);
  cout << "Total cost = $" << totalCost;

  return 0;
}