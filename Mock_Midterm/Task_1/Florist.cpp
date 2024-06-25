/**
* @program: Florist.cpp
* @author: Nyki Anderson
* @uin: 01179386
* @lab: 28415
* @date: March 2, 2023
*
* @title: Florist Discounts
* @description: This program prompts the user to input the number of dozens of roses to purchase, then if they qualify a discount, this will be applied to their total. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Declare all constants
*/
const double REGULAR_PRICE = 20.0;
const double DISCOUNT_ON_10 = 0.1;
const double DISCOUNT_ON_20 = 0.2;
const double DISCOUNT_ON_30 = 0.3;

/**
 * Declare all function prototypes
*/
void OutputHeader();
void InputDozens(int&);
void CalculateTotal(int, double&, double&, char&);
void Receipt(double, double, char);
void ErrorMessage();

int main()
{
  // Declare all variables
  int numDozens;
  double discountAmount, totalPrice;
  char discountApplied;

  // Output formatted header
  OutputHeader();
  
  // Get user input for number of dozens of roses
  InputDozens(numDozens);

  // Checks if input number of roses is greater than 0 
  if (numDozens >= 0)
  {
    // If user qualifies for a discount discountApplied will be true and discountAmount will be updated, else just the totalPrice will be updated
    CalculateTotal(numDozens, discountAmount, totalPrice, discountApplied);

    // Outputs receipt
    Receipt(totalPrice, discountAmount, discountApplied);
    return 0;
  }
  // Else output error message
  else 
    ErrorMessage();
}

/**
 * @name OutputHeader
 * @description: Outputs a nicely formatted header to output stream
*/
void OutputHeader()
{
  cout << setw(29) << setfill('*') << "" << endl;
  cout << "*   Dominion Florist Shop   *" << endl;
  cout << setw(29) << setfill('*') << "" << endl;
}

/**
 * @name InputDozens
 * @description: Prompts the user to input the number of dozens of roses they want to purchase and stores in numDozens address
 * 
 * @param int& - address of number of dozens of roses
*/
void InputDozens(int& numDozens)
{
  cout << "Please enter the number of dozens of roses: ";
  cin >> numDozens;
}

/**
 * @name CalculateTotal
 * @description: Calculates the total price for the purchase and determines if the number of dozens of roses qualifies the user for a discount. If so, the discount is calculated and subtracted from the total price and an indicator for discount applied is updated. All of these values are stored in the memory address of their respective variables
 * 
 * @param int - number of dozens of roses input
 * @param double& - address of discounted amount
 * @param double& - address of total price of purchase
 * @param char& - address of discount applied indicator (may be '1', '2', or '3' depending on discount qualified for)
*/
void CalculateTotal(int numDozens, double& discountAmount, double& totalPrice, char& discountApplied)
{
  // Calculates total price using regular price per dozen
  // If no discounts are applied, this will be the total price
  totalPrice = numDozens * REGULAR_PRICE;

  // Tests if number of roses is at least 30, if so discount is calculated, total price is updated and discount applied is given a value of 3
  if (numDozens >= 30)
  {
    discountApplied = '3';
    discountAmount = totalPrice * DISCOUNT_ON_30;
    totalPrice -= discountAmount;
  }
  // Tests if number of roses is at least 20, if so discount is calculated, total price is updated, and discount applied is given a value of 2
  else if (numDozens >= 20)
  {
    discountApplied = '2';
    discountAmount = totalPrice * DISCOUNT_ON_20;
    totalPrice -= discountAmount;
  }
  // Tests if number of roses is at least 10, if so discount is calculated, total price is updated, and discount applied is given a value of 1
  else if (numDozens >= 10)
  {
    discountApplied = '1';
    discountAmount = totalPrice * DISCOUNT_ON_10;
    totalPrice -= discountAmount;
  }
}

/**
 * @name Receipt
 * @description: Outputs total price of purchase, if discounts were applied, outputs the discount applied and discount amount as well.
 * 
 * @param double - value of total price
 * @param double - value of discounted amount
 * @param char  - value of discount applied indicator
*/
void Receipt(double totalPrice, double discountAmount, char discountApplied)
{
  // Formats numeric output to show 2 decimal places (monetary)
  cout << fixed << showpoint << setprecision(2);

  // Determines whether or not a discount has been applied based on discountApplied indicator 
  switch (discountApplied)
  {
    case '1':
    case '2':
    case '3':
      // If discountApplied is '1', '2', or '3' then output a message detailing the discount qualified for and the discount amount (does not print if user does not qualify for a discount)
      cout << "This purchase qualifies for a " << discountApplied << "0% discount!" << endl;
      cout << "The total amount of this discount is $" << discountAmount << endl;
  }

  // Output total price of purchase (always prints)
  cout << "The total amount of this purchase is $" << totalPrice;
}

/**
 * @name ErrorMessage
 * @description: Outputs an error message if number of dozens of roses is not at least 0
*/
void ErrorMessage()
{
  cout << "ERROR! Number of dozens must be greater than 0...";
}