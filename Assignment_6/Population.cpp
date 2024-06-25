/**
 * @program: Population.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: February 26th, 2023
 * 
 * @title: Population Growth
 * @description: This program prompts user to input the population and rate of growth for two towns and then outputs the year that town A is greater than or equal to town B. 
*/

/**
 * Header File Declarations
*/
#include <iostream>
#include <iomanip>
#include <cmath>

/**
 * Standard Library
*/
using namespace std;

/**
 * User-Defined Function Prototype Declarations
*/
void popGrowth(int&, int&, double, double);
void printResults(int, int, int);

int main()
{
  // Declare variables
  int popA, popB, year = 0;
  double growthA, growthB;

  // Neatly display program header
  cout << "  " << setw(16) << setfill('*') << "" << endl;
  cout << "  " << setw(16) << "*  Population  *" << endl;
  cout << "  " << setw(16) << setfill('*') << "" << endl << endl << endl;

  // Prompt user to input the population of town and town B as well as the growth rate for both towns
  cout << "Please enter the population of town A: "; 
  cin >> popA;
  cout << "Please enter the population of town B: ";
  cin >> popB;
  cout << "Please enter the rate of growth of town A: ";
  cin >> growthA;
  cout << "Please enter the rate of growth of town B: ";
  cin >> growthB;
  cout << endl;

  // Checks if town A's population is already greater than or equal to town B's population OR if town A's growth rate is slower than town B's growth rate to prevent infinite loop
  if (popA >= popB || growthA <= growthB)
  {
    // Output error message
    cout << "Incorrect input! The population of town A should be less than town B and town A's growth rate should be greater than town B. Ending program...";
  }
  // If the population of town A is still less than population of town B, continue to calculate the growth of town A and B
  else {
    while (popA < popB)
    {
      // Increment the year before performing the growth rate calculation so that the printResults function has the correct year
      year++;

      // Function call to popGrowth
      popGrowth(popA, popB, growthA, growthB);
    }

    // Function call to printResults
    printResults(popA, popB, year);
  }

  return 0;
}

/**
 * * popGrowth *
 * 
 * @details - Calculates the rate of growth in the 
 * 
 * @param int& a - address of population A
 * @param int& b - address of population B
 * @param double rateA - rate of growth for population A
 * @param double rateB - rate of growth for population B
 * 
 * @return void
*/
void popGrowth(int& a, int& b, double rateA, double rateB)
{
  // Convert rates to decimal form
  rateA = rateA / 100;
  rateB = rateB / 100;

  // Adds growth rate to population and maintain the values as integers 
  a += floor(static_cast<float>(a) * rateA);
  b += floor(static_cast<float>(b) * rateB);
}

/**
 * * printResults *
 * 
 * @details - Prints the results of when the population of town A is greater than or equal to the population of town B.
 * 
 * 
 * @param int a - population of town A
 * @param int b - population of town B
 * @param int y - year of calculation
 * 
 * @return void
*/
void printResults(int a, int b, int y)
{
  cout << "After " << y << " year(s) the population of town A will be greater than or equal to the population of town B." << endl;

  cout << "After " << y << "  year(s) the population of town A is " << a << endl;

  cout << "After " << y << " year(s) the population of town B is " << b << endl;
}