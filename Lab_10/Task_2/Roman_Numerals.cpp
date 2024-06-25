/**
 * @program: Roman_Numerals.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 2nd, 2023
 *
 * @title: Roman Numerals Converter
 * @description: This prompts the user to input a Roman numeral and converts it to a postive integer then displays the number in whatever format the user chooses.
 */

// Include all header files and namespaces
#include <iostream>
#include <string.h>
using namespace std;

/**
 * @typedef class
 * @name RomanClass
 * @details This class holds the object for a Roman numeral conversion
 */
class RomanClass
{
public:
  char romanNumeral[100];
  int positiveInteger;
  void get_roman_numeral();  // Reads user input for roman numeral
  void convert_to_integer(); // Converts roman numeral to integer
  void print_number();       // Prints the user's choice of format
};

int main()
{
  // Declare all variables
  RomanClass number1;

  // Prompts user to input a roman numeral
  number1.get_roman_numeral();

  // Converts roman numeral to integer
  number1.convert_to_integer();

  // Prompts user to choose format they wish to see number then prints result
  number1.print_number();

  return 0;
}

/**
 * @typedef class function
 * @name get_roman_numeral
 * @memberof RomanClass
 * @details This function prompts the user to input a Roman numeral and stores in the RomanClas object.
 *
 * @return void
 */
void RomanClass::get_roman_numeral()
{
  cout << "Please enter a Roman numeral: ";

  cin >> romanNumeral;
}

/**
 * @typedef class function
 * @name concvert_to_integer
 * @memberof RomanClass
 * @details This function converts Roman numerals into positive integers.
 *
 * @return void
 */
void RomanClass::convert_to_integer()
{
  // Declare local variables
  char currentNumeral; // holds current numeral in cstring array romanNumeral
  char nextNumeral;    // holds next numeral in cstring array romanNumeral
  positiveInteger = 0; // Initializes positiveInteger

  // Iterates through romanNumeral cstring array until length of array is reached
  for (int i = 0; i < strlen(romanNumeral) - 1; i++)
  {
    // Convert current and next numeral into uppercase for use in switch statement
    currentNumeral = toupper(romanNumeral[i]);
    nextNumeral = toupper(romanNumeral[i + 1]);

    // Decides what to add to positiveInteger, accounts for reverse ordering of numerals when case is C or I (example: IV)
    switch (currentNumeral)
    {
    case 'M':
      positiveInteger += 1000;
      break;
    case 'D':
      positiveInteger += 500;
      break;
    case 'C':
      if (nextNumeral == 'M')
      {
        positiveInteger += 900;
        i++;
      }
      else if (nextNumeral == 'D')
      {
        positiveInteger += 400;
        i++;
      }
      else
        positiveInteger += 100;
      break;
    case 'L':
      positiveInteger += 50;
      break;
    case 'X':
      if (nextNumeral == 'L')
        positiveInteger += 40;
      else
        positiveInteger += 10;
      break;
    case 'V':
      positiveInteger += 5;
    case 'I':
      if (nextNumeral == 'M')
      {
        positiveInteger += 999;
        i++;
      }
      else if (nextNumeral == 'D')
      {
        positiveInteger += 499;
        i++;
      }
      else if (nextNumeral == 'C')
      {
        positiveInteger += 99;
        i++;
      }
      else if (nextNumeral == 'L')
      {
        positiveInteger += 49;
        i++;
      }
      else if (nextNumeral == 'X')
      {
        positiveInteger += 9;
        i++;
      }
      else if (nextNumeral == 'V')
      {
        positiveInteger += 4;
        i++;
      }
      else
        positiveInteger++;
      break;
    }
  }
}

/**
 * @typedef class function
 * @name print_number
 * @memberof RomanClass
 * @details This function prompts the user to choose desired format for the number and prints either the Roman numeral or positive integer version
 *
 * @return void
 */
void RomanClass::print_number()
{
  // Declare local variables
  char userChoice = ' '; // Holds the user's desired format

  while (userChoice != 'I' && userChoice != 'R')
  {
    // Prompts the user to choose a format to print (either Roman numeral or positive integer)
    cout << "Would you like to see your number in Roman numerals (R or r) or as a positive integer (I or i)? ";

    // Retrieves user's choice in format
    cin >> userChoice;

    userChoice = toupper(userChoice);

    if (userChoice != 'I' && userChoice != 'R')
      cout << endl
           << "ERROR! Invalid input." << endl;
  }

  // Converts userChoice to upper case for easier comparison
  // If userChoice is I, print the integer version of the number
  if (toupper(userChoice == 'I'))
    cout << "The equivalent of the Roman numeral " << romanNumeral << " is " << positiveInteger;

  // Else if the user choose R, print the roman numeral version of the number
  else if (toupper(userChoice == 'R'))
    cout << "You input " << romanNumeral;
}