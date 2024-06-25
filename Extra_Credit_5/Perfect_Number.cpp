/**
 * @program: Perfect_Number.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 19th, 2023
 *
 * @title: Is the Number Perfect?
 * @description: This function takes user input for a positive integer and checks whether it is perfect or not.
 */

// Include all header files and namespaces
#include <iostream>
using namespace std;

// Declare function prototypes
bool getInput(int &number);
bool checkIfPerfect(int number);
bool continueMessage();

int main()
{
  // Declare variables
  int number;

  // Continue to repeat program until user decides not to continue
  do
  {
    // If the user inputs a postive number, continue program
    if (getInput(number))
    {
      // Check if number is perfect
      if (checkIfPerfect(number))
      {
        // If number is perfect, print a success message
        cout << "        "
             << "Perfect." << endl;
      }
      // If number is not perfect, print message that the number is not positive
      else
      {
        cout << "        "
             << "Not perfect." << endl;
      }
    }
    // If user inputs a non-positive number, print error message
    else
    {
      cout << "You entered an invalid number.";
    }
    // End program if user decides not to continue
  } while (continueMessage());

  return 0;
}

/**
 * @name getInput
 * @description: This function prompts the user to input a postive integer. If the number is valid, it returns true, if not, it returns false.
 *
 * @param int& - reference to number variable declared in main function, will hold user input integer
 * @return bool - Returns true if number is valid integer, false if it is not.
 */
bool getInput(int &number)
{
  // Prompt user to input positive integer and store in variable number
  cout << "Please enter a positive integer: ";
  cin >> number;

  // If number is not positve, return false
  if (number < 0)
  {
    return false;
  }

  // If number is positive, return false
  return true;
}

/**
 * @name checkIfPerfect
 * @description: This function checks if the number the user input is a perfect number. If the number is perfect, it returns true. Otherwise, the function returns false.
 *
 * @param int - value of number in put by user
 * @return bool - Returns true if number is perfect, false if it isn't.
 */
bool checkIfPerfect(int number)
{
  // Declare local variables
  int i, j;            // Indexing
  int count = 0;       // Indexing divisors array (only increments when values added)
  int divisors[100];   // Holds any divisors or none
  int multipleSum = 1; // Initialized to 1 so that 1 is included in the sum of all divisors

  // Iterate through all numbers between 2 and its complementary multiple, limits the numbers to search by half
  for (i = 2; i < number + 1 / 2; i++)
  {
    // If the number the user input divided by i has no remainder, it is divisible by that number
    if (number % i == 0)
    {
      // Add this value to the divisors array
      divisors[count] = i;

      // Increment count by 1 since a value has been added
      count++;
    }
  }

  // Iterate through divisors and add each value to multipleSum
  for (j = 0; j < count; j++)
  {
    // multipleSum is initialized with 1 already, since a perfect number includes 1 but not itself
    multipleSum += divisors[j];
  }

  // If the value of multipleSum equals the number input by the user, it is perfect return true
  if (multipleSum == number)
    return true;

  // If the number is not perfect, return false
  return false;
}

/**
 * @name continueMessage
 * @description: This furnction prompts the user to decide if they wish to continue. If they enter y or Y the function returns true, if not, the function returns false.
 *
 * @returns bool - true if the user wishes to continue and false if they don't
 */
bool continueMessage()
{
  // Declare variable to hold the user's response
  char decision;

  // Puts a newline between the message and the start of a new session
  cout << endl;

  // Prompts the user to decide if they wish to continue, y or Y will continue, anything else will quit
  cout << "Do you wish to continue? Press Y/y. (Anything else will exit.) ";
  cin >> decision;
  cout << endl;

  // If the user input y or Y, return true
  if (decision == 'Y' || decision == 'y')
  {
    return true;
  }

  // If the user input anything except Y or y, the program will end.
  return false;
}
