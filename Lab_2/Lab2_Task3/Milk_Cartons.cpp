/*
  Name of student source file: Milk_Cartons.cpp
  Student Name: Nyki Anderson
  Student UIN: 01179386
  Lab CRN: 28415
  Date: January 22nd, 2023

  Project Title: Calculating Capacity, Cost, and Profit of Milk Cartons
  Project Description: This program accepts an amount of milk in liters as input. It then calculates how many milk cartons will hold that amount of milk, the cost to produce it, and the profit. 
*/

# include <iostream>

using namespace std;

// Declaring constant variables (they DO NOT change) 
const double CARTON_CAPACITY = 3.78;
const double COST_OF_ONE_LITER = 0.38;
const double PROFIT_ON_A_CARTON = 0.27;

int main()
{
  // Declaring variables
  double milkQuantity;
  int numOfMilkCartons;
  double totalCostOfMilk;
  double profit;

  // Requesting input for milk quantity from user
  cout << "Enter, in liters, the total amount of milk produced: ";
  cin >> milkQuantity;

  // New line to keep tidy
  cout << endl;

  // Calculate number of milk cartons needed to contain input quantity of milk
  numOfMilkCartons = static_cast<int>(milkQuantity / CARTON_CAPACITY + 0.5); // cast as integer so no partial cartons

  // Display the number of cartons
  cout << "The number of milk cartons needed to hold the milk is: " << numOfMilkCartons << endl;

  // Calculate the total cost of the milk
  totalCostOfMilk = milkQuantity * COST_OF_ONE_LITER;

  // Display total cost of the milk
  cout << "The cost of producing the milk is: $" << totalCostOfMilk << endl;

  // Calculate the profit off of the number of cartons
  profit = numOfMilkCartons * PROFIT_ON_A_CARTON;

  // Display the total profit for the milk
  cout << "Profit: $" << profit << endl;

  return 0;
}