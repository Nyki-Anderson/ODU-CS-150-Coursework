/**
 * @program: Weekly_Sales.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 19th, 2023
 *
 * @title: Weekly Sales Report
 * @description: This function takes user input for sales each day of the week. It calculates and prints the total sales for the week and then lists each day of the week and its respective sales.
 */

// Include header files and namespaces
#include <iostream>
#include <iomanip>
using namespace std;

// Declare function prototypes
void inputSales(int weeklySales[], int &totalSales);
void sortSales(int weeklySales[], int dayOfWeek[]);
void printWeeklyReport(const int weeklySales[], const int dayOfWeek[], int totalSales);

int main()
{
  // Declare variables
  int weeklySales[7], dayOfWeek[7], totalSales = 0;

  // Get user input for the weekly sales and calculate total sales
  inputSales(weeklySales, totalSales);

  // Sort sales in ascending order
  sortSales(weeklySales, dayOfWeek);

  // Print weekly sales, day of week, and total sales
  printWeeklyReport(weeklySales, dayOfWeek, totalSales);

  return 0;
}

/**
 * @name inputSales
 * @description: Prompts user to input sales for each day of the week and outputs total sales
 *
 * @param int [] - array index for weeklySales
 * @param int - reference to totalSales
 * @return void
 */
void inputSales(int weeklySales[], int &totalSales)
{
  // Declare indexing variable
  int day;

  // Iterate through each day of the week
  for (day = 0; day < 7; day++)
  {
    // Prompts user to input sale for each day ands stores in weeklySales array
    cout << "Enter the sales for day " << day + 1 << ": $";
    cin >> weeklySales[day];

    // Each day added to totalSales
    totalSales += weeklySales[day];
  }
}

/**
 * @name sortSales
 * @description: Sorts each day of sales in ascending order and stores this in weeklySales. Also keeps track of day of the week in parallel array.
 *
 * @param int[] - array index of weeklySales to hold sales each day in ascending order
 * @param int[ - array index of dayOfWeek to hold day of week from original order before sort, is paralllel to weeklySales
 * @return void
 */
void sortSales(int weeklySales[], int dayOfWeek[])
{
  // Declare local variables
  int smallValue, smallIndex, tempValue, topUnsorted = 0, day;

  // Iterates through unsorted indexes of the array is less than 7
  for (topUnsorted = 0; topUnsorted < 7; topUnsorted++)
  {
    // Resets the smallest value to the value at the top of the unsorted indexs of weeklySales
    smallValue = weeklySales[topUnsorted];
    smallIndex = topUnsorted;

    // Iterates through each day starting with the top of the unsorted part of the array
    for (day = topUnsorted + 1; day < 7; day++)
    {
      // If the daily sales is less than the smallest value, store that value in smallValue and store the index in samllIndex
      if (weeklySales[day] <= smallValue)
      {
        smallValue = weeklySales[day];
        smallIndex = day;
      }
    }
    // Store the previous value in topUnsorted to a temporary variable
    tempValue = weeklySales[topUnsorted];

    // Stores the smallest value at the top of the unsorted part of weeklySales
    weeklySales[topUnsorted] = smallValue;

    // Puts the previous value in the topUnsorted into the index where the smallest value use to be in WeeklySales
    weeklySales[smallIndex] = tempValue;

    // Stores the index that corresponds to the smallest value in corresponding parallel array dayOfWeek
    dayOfWeek[topUnsorted] = smallIndex;
  }
}

/**
 * @name printWeeklyReport
 * @description: Prints the weekly sales in ascending order with corresponding day of week
 *
 * @param const int[] - immutable weeklySales (cannot be changed) holding sales for each day in ascending order
 * @param const int[] - immutable dayOfWeek (cannot be changed) holding original day of week for each day of sales
 * @param int - calculated total sales
 * @return void
 */
void printWeeklyReport(const int weeklySales[], const int dayOfWeek[], int totalSales)
{
  // Declare indexing variable
  int day;

  // Prints total sales
  cout << "Total Sales: $" << totalSales << endl;

  // Prints nicely formatted header
  cout << setw(5) << left << "Day" << setw(10) << "Sales" << endl;

  // Iterates through each day
  for (day = 0; day < 7; day++)
  {
    // Prints daily sales and day of week sale occurred on
    cout << setw(5) << left << dayOfWeek[day] + 1 << setw(10) << weeklySales[day] << endl;
  }
}