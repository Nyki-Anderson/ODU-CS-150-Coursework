/**
 * @program: Credit_Card.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 26th, 2023
 *
 * @title: Yearly Credit Card Statement
 * @description: This program reads in an input file with each month's name and statement balance, organizes this information into a struct datatype, sorts the statement by statement balance, and prints a report of all of this information, including the month with the maximum balance.
 */

// Include all header files and namespaces
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef struct
 * @def statementType - holds information for a yearly credit card statement
 *
 * @member: string month - holds an array for each month in the year
 * @member: double balance - holds an array for the balance each month in the year
 */
struct statementType
{
  string month[12];
  double balance[12];
};

// Declare function prototypes
void readStatement(ifstream &inData, statementType &monthlyStatement);
void sortStatement(statementType &sortedMonthlyStatement);
void monthlyStatementHeader();
void printUnsortedStatement(statementType monthlyStatement);
void sortedStatementHeader();
void printSortedStatement(statementType sorteMonthlyStatement);

int main()
{
  // Declare variables
  statementType monthlyStatement;       // Holds the monthly credit card statements (unsorted)
  statementType sortedMonthlyStatement; // Holds the monthly credit card statements (sorted)
  ifstream inData;                      // File input stream variable

  // Reads the data form input.txt and stores in monthlyStatement struct
  readStatement(inData, monthlyStatement);

  // Copies the members of monthlyStatement struct into sortedMonthlyStatement struct
  sortedMonthlyStatement = monthlyStatement;

  // Sorts the monthlyStatement struct contents in descending order by balance
  sortStatement(sortedMonthlyStatement);

  // Prints monthly statement header
  monthlyStatementHeader();

  // Prints unsorted balance statement for each month
  printUnsortedStatement(monthlyStatement);

  // Prints sorted statement header
  sortedStatementHeader();

  // Prints sorted balance statement for each month as well as the month in which the balance was the hightes
  printSortedStatement(sortedMonthlyStatement);

  return 0;
}

/**
 * @typedef Function
 * @name readStatement
 * @description: This function reads the data from input.txt and stores it into the corresponding members of the monthlyStatement struct.
 *
 * @param ifstream& - Reference to ifstream variable inData to read from file
 * @param statementType& - Reference to monthlyStatement struct variable holding the month and statement for each month
 *
 * @return void
 */
void readStatement(ifstream &inData, statementType &monthlyStatement)
{
  // Open input.txt
  inData.open("input.txt");

  // While there is still data in the file..
  while (inData)
  {
    // Iterate through reading and storing each month of statement data
    for (int month = 0; month < 12; month++)
      // Read month and statement value and store in corresponding monthlyStatement member array
      inData >> monthlyStatement.month[month] >> monthlyStatement.balance[month];

    // Ignore blank characters until next line character is found
    inData.ignore(100, '\n');
  }
  // Close input.txt
  inData.close();
}

/**
 * @typedef Function
 * @name sortStatement
 * @description: This function sorts the contents of sortedMonthlyStatement struct variable using selection sort.
 *
 * @param statementType& - Reference to the unsorted sortedMonthlyStatement struct variable. After this function, it holds the sorted contents of sortedMonthlyStatement
 *
 * @return void
 */
void sortStatement(statementType &sortedMonthlyStatement)
{
  // Decalre local variables
  int topUnsorted = 0; // Top of unsorted part of arrays sortedMonthlyStatement.month and sortedMonthlyStatement.balance
  int maxIndex;        // Index of max value
  double tempBalance;  // Temporary holder of balance at topUnsorted index
  double maxBalance;   // Balance of max value
  string tempMonth;    // Temporary holder of month at topUnsorted index

  // Iterate through sortedMonthlyStatment.balance and .month arrays, leaving remamining value untouched as it should be already placed there by end of sort
  for (int i = 0; i < 11; i++)
  {
    // Reset maxBalance after each iteration to the value at topUnsorted index
    maxBalance = sortedMonthlyStatement.balance[topUnsorted];

    // Iterate through every index of sortedMonthlyStatement.balance to find the max value for sort function
    for (int j = topUnsorted; j < 12; j++)
    {
      // If the value at the current index is greater than the maxBalance, change maxBalance to that value
      if (sortedMonthlyStatement.balance[j] >= maxBalance)
      {
        // Keep track of maxBalance and maxIndex
        maxBalance = sortedMonthlyStatement.balance[j];
        maxIndex = j;
      }
    }
    // Temporarily store the values currently at sortedMonthlyStatement.balance and .month members so they can be swapped with the current maxBalance indices
    tempBalance = sortedMonthlyStatement.balance[topUnsorted];
    tempMonth = sortedMonthlyStatement.month[topUnsorted];

    // Store the new maxBalance and it corresponding month at the top of the unsorted part of the arrays
    sortedMonthlyStatement.balance[topUnsorted] = sortedMonthlyStatement.balance[maxIndex];
    sortedMonthlyStatement.month[topUnsorted] = sortedMonthlyStatement.month[maxIndex];

    // Swap the old values at the top of the unsorted arrays and place them in the new maxBalance's previous index
    sortedMonthlyStatement.balance[maxIndex] = tempBalance;
    sortedMonthlyStatement.month[maxIndex] = tempMonth;

    // Increase topUnsorted by one so that it corresponds to the new top of unsorted part of the arrays
    topUnsorted++;
  }
}

/**
 * @typedef Fucntion
 * @name monthlyStatementHeader
 * @description: This function prints a nicely formatted header for the monthly statement header. It takes no parameters and returns nothing.
 */
void monthlyStatementHeader()
{
  cout << setw(33) << setfill('*') << "" << endl;
  cout << "* Credit Card Monthly Statement *" << endl;
  cout << setw(33) << setfill('*') << "" << endl;
  cout << endl;
}

/**
 * @typedef Function
 * @name printUnsortedStatement
 * @description: Prints the data for each month and its balance into a neatly formatted chart.
 *
 * @param statementType - Holds the (unsorted) monthly statememnt balances and their corresponding month
 * @return void
 */
void printUnsortedStatement(statementType monthlyStatement)
{
  // Iterate through each month and print the month with its corresponding balance. Shows the balances with two decimals to indidcate currency.
  for (int i = 0; i < 12; i++)
  {
    cout << fixed << showpoint << setprecision(2) << setfill(' ');
    cout << left << setw(15) << monthlyStatement.month[i] << right << setw(8) << monthlyStatement.balance[i] << endl;
  }
}

/**
 * @typedef Function
 * @name sortedStatementHeader
 * @description: Prints a neatly formatted header for the sorted monthly statement
 */
void sortedStatementHeader()
{
  cout << setw(33) << setfill('*') << "" << endl;
  cout << "*         Sorted Data           *" << endl;
  cout << setw(33) << setfill('*') << "" << endl;
  cout << endl;
}

/**
 * @typedef Function
 * @name printSortedStatement
 * @description: Prints a neatly formatted table for the sorted monthly statement and also prints the month with the max balance.
 *
 * @param statementType - Holds the values of the sortedMonthlyStatment struct variable
 * @return void
 */
void printSortedStatement(statementType sortedMonthlyStatement)
{
  // Iterate through each month and prints the month as well as the corresponding balance for that month. The values of balance array are displayed with two decimals, indicating currency.
  for (int i = 0; i < 12; i++)
  {
    cout << fixed << showpoint << setprecision(2) << setfill(' ');
    cout << left << setw(15) << sortedMonthlyStatement.month[i] << right << setw(8) << sortedMonthlyStatement.balance[i] << endl;
  }

  // At the end of the sorted monthly statement, the value of the month with the max balance is printed.
  cout << "The month you spent the most money is " << sortedMonthlyStatement.month[0] << endl;
}