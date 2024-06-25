/*
Name of student source file: Rainbow.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 5th, 2023

Project Title: Rainbow Printer
Project Description: This program takes a numeric input for the color and outputs which color has beens selected both to terminal and to output.txt.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  // Declare variable
  int inputColor;

  // Declare file stream variable
  ofstream outFile;

  // Open output.txt
  outFile.open("output.txt");

  // Prompt user for integer corresponding to the color they wish to choose and sotre in inputColor variable
  cout << "Please select a number between 1 and 7: ";
  cin >> inputColor;

  switch (inputColor)
  {
    case 1:
      cout << "You have selected number 1 which is RED.";
      outFile << "You have selected number 1 which is RED.";
      break;
    case 2:
      cout << "You have selected number 2 which is ORANGE.";
      outFile << "You have selected number 2 which is ORANGE.";
      break;
    case 3:
      cout << "You have selected number 3 which is YELLOW.";
      outFile << "You have selected number 3 which is YELLOW.";
      break;
    case 4:
      cout << "You have selected number 4 which is GREEN.";
      outFile << "You have selected number 4 which is GREEN.";
      break;
    case 5:
      cout << "You have selected number 5 which is BLUE.";
      outFile << "You have selected number 5 which is BLUE.";
      break;
    case 6:
      cout << "You have selected number 6 which is INDIGO.";
      outFile << "You have selected number 6 which is INDIGO.";
      break;
    case 7:
      cout << "You have selected number 7 which is VIOLET.";
      outFile << "You have selected number 7 which is VIOLET.";
      break;
    default:
      cout << "You have not selected a valid color.";
  }

  outFile << "\n\n Here are the numbers and matched colors:" << endl;
  outFile << "   1 "<< setw(20) << setfill('-') << " RED \n";
  outFile << "   2 "<< setw(20) << setfill('-') << " ORANGE \n";
  outFile << "   3 "<< setw(20) << setfill('-') << " YELLOW \n";
  outFile << "   4 "<< setw(20) << setfill('-') << " GREEN \n";
  outFile << "   5 "<< setw(20) << setfill('-') << " BLUE \n";
  outFile << "   6 "<< setw(20) << setfill('-') << " INDIGO \n";
  outFile << "   7 "<< setw(20) << setfill('-') << " VIOLET \n";

  return 0; 
}
