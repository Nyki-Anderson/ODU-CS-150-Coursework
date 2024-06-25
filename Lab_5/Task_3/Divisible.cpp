/*
Name of student source file: Divisible.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 12th, 2023

Project Title: Is it Divisible?
Project Description: This program takes 2 numbers as input, it then divides the first number by the second, and if the remainder is 0, the number is reported to be divisible.If not, the number is not divisible. This program continues until the user inputs a character other than 1.
*/

#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  int number, divisor;
  char repeat = '1'; // Use to enter while loop
  
  while (repeat == '1')
  {
    // Prompt user for two numbers (number and divisor) and then store those two numbers
    cout << "Please enter the numbers you would like to divide separated by returns: " << endl;
    cin >> number;
    cin >> divisor;
    cout << endl;

    // if divior = 0, then output error message
    if (divisor == 0)
    {
      cout << "Error! Cannot divide by 0" << endl;
    }
    // else if number is divisible by divisor (number % divisor = 0) then divide number by divisor and store result (number / divisor = result)
    else if ((number % divisor) == 0)
    {
      cout << number << " goes into " << divisor << ", " <<  number / divisor << " times." << endl;
    }
    // else if number is not divisible by divisor (number % divisor != 0)
    else 
    {
      cout << "These numbers are not divisible." << endl;
    }
    // If user doesn't enter 1, end program
    cout << endl << "To continue, type 1." << endl << "To exit, type any other character." << endl;
    cin >> repeat;
  }
  return 0;
}
