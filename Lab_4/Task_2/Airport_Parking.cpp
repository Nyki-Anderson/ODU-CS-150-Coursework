/*
Name of student source file: Airport_Parking.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 5th, 2023

Project Title: Airport Parking Fee
Project Description: This program takes an input for the number of hours parked and outputs the aiport parking fee.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Declare variables
  int hoursParked;
  double fee;

  // Prompt user for number of hours parked.
  cout << "How many hours did you park? ";
  cin >> hoursParked;

  cout << fixed << showpoint << setprecision(2);
  
  if (hoursParked > 0 && hoursParked <= 3)
  {
    fee = 5;
    cout << "\nYour fee is: $" << fee;
  }
  else if (hoursParked > 3 && hoursParked <= 9)
  {
    fee = 6 * int(hoursParked + 1);
    cout << "\nYour fee is: $" << fee;
  }
  else if (hoursParked > 9 && hoursParked <= 24)
  {
    fee = 60;
    cout << "\nYour fee is: $" << fee;
  }


  return 0;
}