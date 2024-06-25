/**
 * @program: Car_Sales.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 9, 2023
 *
 * @title: Car Sales
 * @description: This program reads a file named cars.txt that contains sales for a car dealership at the end of the month and outputs the total number of cars sold plus the saleperson selling the maximum number of cars.
 */

// Declare all header files and namespaces
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Declare all variables
  int *carsPtr;          // Declares an integer pointer
  carsPtr = new int[10]; // Declares a dynamic array using pointer
  int sum = 0;           // Sum of all car sales for the month
  int max;               // Max car sales for the month
  int salesPerson;       // Number of salesperson with max car sales

  ifstream inFile; // Input file stream variable

  // Opens file cars.txt
  inFile.open("cars.txt");

  // Iterates through the car sales in cars.txt and stores in dynamic array carsPtr
  for (int j = 0; j < 10; j++)
  {
    // Reads each number for sales
    inFile >> carsPtr[j];

    // Adds each number of sales
    sum = sum + carsPtr[j];
  }

  // Prints total number of cars sold
  cout << "The total number of cars sold = " << sum << endl;

  // Initializes max to value in first slot of carsPtr array
  max = *carsPtr;

  // Initializes salesperson to first salesperson for later comparison
  salesPerson = 1;

  // Iterates through all 10 salespersons' sales for the month
  for (int j = 1; j < 10; j++)
  {
    // Checks if the value in the array is greater than the max, if so, stores new value in max and salesperson variables
    if (max < carsPtr[j])
    {
      max = carsPtr[j];
      salesPerson = j + 1;
    }
  }

  // Prints max number of salesperson with most sales
  cout << "The salesperson selling the maximum number of cars is salesperson "
       << salesPerson << endl;

  // Prints the salesperson with the most cars sold and that number of sales
  cout << "Salesperson " << salesPerson << " sold "
       << max << " cars last month." << endl;
  cout << endl;

  // Deallocates space used by dynamic array
  delete[] carsPtr;

  // Closes txt file
  inFile.close();

  return 0;
}
