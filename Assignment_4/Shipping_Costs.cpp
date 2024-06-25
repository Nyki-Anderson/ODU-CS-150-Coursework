/*
Name of student source file: Shipping_Costs.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 12th, 2023

Project Title: Shipping Costs by Destination
Project Description: This program accepts user input for a geographical destination and outputs the shipping cost.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Declare constants
const double COST_IN_CONTINENTAL_US = 5.00;
const double COST_IN_HAWAII_ALASKA = 10.00;
const double COST_INTERNATIONAL = 15.00;

int main()
{
  // Declare variables
  int shippingDestination;

  // Output header
  cout << "*****************" << endl << "* Shipping Cost *" << endl << "*****************" << endl << endl;

  // Prompt user for shipping destination
  cout << "Enter 1 for shipping inside the USA except that to Hawaii and Alaska" << endl;
  cout << "Enter 2 for shipping to Hawaii and Alaska" << endl;
  cout << "Enter 3 for international shipping" << endl;

  // Store user input in variable
  cin >> shippingDestination;

  // Format the output to have two decimals
  cout << fixed << showpoint << setprecision(2);

  // Test input for cost bracket
  switch (shippingDestination)
  {
    case 1:
      cout << "The shipping cost is $" << COST_IN_CONTINENTAL_US;
      break;
    case 2:
      cout << "The shipping cost is $" << COST_IN_HAWAII_ALASKA;
      break;
    case 3:
      cout << "The shipping cost is $" << COST_INTERNATIONAL;
      break;
    default:
      cout << "Invalid Input!";
  }

  return 0;
}