/*
Name of student source file: Program_Rewrite.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 19th, 2023

Project Title: Convert to For to While Statement
Project Description: This program performs calculations on a value four times.
*/

#include <iostream>
using namespace std;

int main()
{
  int i = 0, value = 3;

  while (i < 5)
  {
    value = value * (i + 1) + i;
    i++;
  }

  cout << "value = " << value << endl;

  return 0;
}