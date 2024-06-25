/**
 * @program: Bank_Account.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 26th, 2023
 *
 * @title: CD Calculator
 * @description: This program prompts the user to input the balance, interest, and term for a CD account and calculates when the balance after the account matures. It then prints this information.
 */

// Include all header files and namespaces
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef struct
 * @name CDAccount
 * @description: A definition for a CD account that includes information about the balance, interest rate, and term.
 *
 * @member: double balance - holds the initial account balance
 * @member: double interestRate - holds the CD interest rate
 * @member: double term - holds the term (or number of months until maturity)
 */
struct CDAccount
{
  double balance;
  double interestRate;
  double term;
};

// Declare function prototypes
bool inputAccountData(CDAccount &newAccount);
void calculateMatureAccount(CDAccount newAccount, double &matureBalance);
void printAccountData(CDAccount newAccount, double matureBalance);

int main()
{
  // Declare variables
  CDAccount newAccount; // stuct variable for a new CD account
  double matureBalance; // Will hold the calculated balance after CD reaches maturity

  // If the user input into newAccount is valid
  if (inputAccountData(newAccount))
  {
    // Calculates the CD account's balance after reaching maturity
    calculateMatureAccount(newAccount, matureBalance);

    // Prints the CD account's balance after reaching maturity
    printAccountData(newAccount, matureBalance);
  }
  // If the user input into newAccount is invalid
  else
  {
    // Prints an error message when newAccount has invalid data and then exits program
    cout << "You entered an invalid term length. Exiting...";
  }
  return 0;
}

/**
 * @typedef function
 * @name inputAccountData
 * @description: Prompts user to input data into the newAccount struct variable. Returns a true if the input data is valid and returns false if not.
 *
 * @param CDAccount& - newAccount holds the user input in a CDAccount struct variable
 * @return bool - returns true if the input term is between 0 and 12, false if not.
 */
bool inputAccountData(CDAccount &newAccount)
{
  cout << "Enter account balance: $";
  cin >> newAccount.balance;

  cout << "Enter account interest rate: $";
  cin >> newAccount.interestRate;

  cout << "Enter the number of months until maturity (must be 12 or fewer): $";
  cin >> newAccount.term;

  // Checks if the user input a valid term
  if (newAccount.term >= 0 && newAccount.term <= 12)
    // If the term value is between 0 and 12, return true
    return true;
  else
    // If the term value is less than 0 or greater than 12, return false
    return false;
}

/**
 * @typedef function
 * @name calculateMatureAccount
 * @description: This function takes the data input by the user and calculates the mature balance at the end of the CD account term.
 *
 * @param CDAccount - newAccount holds the user input data for the CD account
 * @param double - reference to the matureBalance variable that will hold the calculated balance of the CD account after its term
 * @return void
 */
void calculateMatureAccount(CDAccount newAccount, double &matureBalance)
{
  // Declare local variable
  double interestAccrued; // will hold interst accrued from balance and interest rate in newAccount struct variable

  // Calculates interst accrued base on balance, interst rate, and term length
  interestAccrued = newAccount.balance * (newAccount.interestRate / 100) * (newAccount.term / 12);

  // Holds the balance of the CD after adding the interst accrued to the original balance
  matureBalance = newAccount.balance + interestAccrued;
}

/**
 * @typedef function
 * @name printAccountData
 * @description: This function prints the balance of the CD after maturity.
 *
 * @param CDAccount - struct variable newAccount holding info about CD Account
 * @param double - matureBalance holds the balance of the CD account after reaching maturity
 */
void printAccountData(CDAccount newAccount, double matureBalance)
{
  // Prints the matureBalance value with two decimals, denoting currency
  cout << fixed << showpoint << setprecision(2);

  // Prints the term length and the balance of the CD account after reaching maturity
  cout << "When your CD matures in " << newAccount.term << " months, it will have a balance of $" << matureBalance << endl;
}