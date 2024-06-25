/*
Name of student source file: Meteorologist.cpp
Student Name: Nyki Anderson
Student UIN: 01179386
Lab CRN: 28415
Date: February 19th, 2023

Project Title: A Meteorologist's Analysis
Project Description: This program reads in a file of temperatures for the month of January, determines the lowest temperature and the day on which it occurred, calculates the average temperature, and then outputs the data.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
  // Declare variables
  int day = 1, currentTemp, minTemp, minDay;
  double sumTemp = 0.0;

  // Declare ifstream variable, associate with input.txt, and open.
  ifstream inData;
  inData.open("input.txt");

  // Formatted header for Output
  cout << "Temperature Record:" << endl;
  cout << setw(10) << left << "Month" << setw(5) << left << "Day" << setw(12) << left << "Temperature" << endl;

  // Read in first line of data and store in day and currentTemp
  inData >> currentTemp;

  // Set first temperature and day to minTemp to initialize minTemp
  minTemp = currentTemp;
  minDay = day;

  // format output and output info from txt
  cout << setw(10) << left << "January" << setw(5) << left << day << setw(11) << right << currentTemp << endl;

  // Add first temperature to sum
  sumTemp += currentTemp;

  // Iterate for all days in January
  for (day = 2; day <= 31; day++)
  {
    // Read in next line of data
    inData >> currentTemp;

    // if new temperature is <= to the min temperature it becomes the new min temperature and day becomes new min day
    if (currentTemp <= minTemp)
    {
      minTemp = currentTemp;
      minDay = day;
    }

    // add the new temperature to the sum
    sumTemp += currentTemp;

    // format output and output info from txt
    cout << setw(10)<< left << "January" << setw(5) << left << day << setw(11) << right << currentTemp << endl;
  }

  cout << left << "The average temperature in January is " << sumTemp/31 << endl;
  cout << "The lowest temperature was January " << minDay << endl;
  cout << "The lowest temperature = " << minTemp << endl;

  inData.close();

  return 0;
}