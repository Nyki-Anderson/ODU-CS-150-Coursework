/*
Name of student source file: Calculator.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 12th, 2023

Project Title: A Calculator Program
Project Description: This program takes two integers and a desired operation to perform and outputs the result of that operation
*/

#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  int num1, num2, result;
  char mathOperator;

  // Prompt user to input two integers and store in num1 and num2
  cout << "Please enter two integers: ";
  cin >> num1 >> num2;
  cout << endl;

  // Promput user to input mathematical operation to perform and store in mathOperator
  cout << "Please enter an operator: + (addition), - (subtraction), * (multiplication), or / (division): ";
  cin >> mathOperator;
  cout << endl;

  // Determine which operator is requested, perform calculation, and output result
  switch (mathOperator)
  {
    case '+':
      result = num1 + num2;
      cout << num1 << " + " << num2 << " = " << result;
      break;
    case '-':
      result = num1 - num2;
      cout << num1 << " - " << num2 << " = " << result;
      break;
    case '*':
      result = num1 * num2;
      cout << num1 << " * " << num2 << " = " << result;
      break;
    case '/':
      if (num2 == 0)
      {
        cout << num1 << " / " << num2 << " = ERROR";
      }
      else 
      {
        result = num1 / num2;
      cout << num1 << " / " << num2 << " = " << result;
      } 
      break;
    default:
      cout << "Invalid Operator!";
  }

  return 0;
}