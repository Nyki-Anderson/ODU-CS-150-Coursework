/**
 * Name: Nyki Anderson
 * 
 * Title: Maximum Temperature in Death Valley
 * Description: This program reads the average temperatures recorded in Death Valley from a txt file and outputs the maximum temperature.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

/**
 * Declare function prototypes
*/
void OutputHeader();
void ReadTemperatures(double&);
void OutputMaxTemperature(double);

int main()
{
  // Declare variables and assign initial value
  double maxTemperature = 0.0;

  // Output nieely formatted header
  OutputHeader();

  // Reads average temmperatures from input-5.txt
  ReadTemperatures(maxTemperature);

  // Outputs nicely formatted average temperatures per month and the max temperature
  OutputMaxTemperature(maxTemperature);

  return 0;
}

/**
 * @name OutputHeader
 * @decription: Outputs a two-column table with both columns left justified
*/
void OutputHeader()
{
  // Format the table so that Month and Temperature are headings and justified left in both columns
  cout << left << setw(10) << "Month" << setw(11) << "Temperature" << endl;
}

/**
 * @name ReadTemperatures
 * @description: Reads average temperature for each month, determines the max temperature betweem these values, and outputs the data in a two-column table.
 * 
 * @param double& - the reference address for maxTemperature, starts as 0.0 and is set the max value among the average temperatures.
*/
void ReadTemperatures(double& maxTemperature)
{
  // Declare local variables 
  string month;
  double avgTemperature;

  // Declare file input stream variable
  ifstream inData;

  // Open text file with temperatures 
  inData.open("input-5.txt");

  // Continue to read file until no more input stream
    while (inData)
  {
    // Read in the month and average temperature
    inData >> month >> avgTemperature;

    // Skip the rest of the line until a new line 
    inData.ignore(100, '\n');

    // Left justifies both columns in line with headings
    cout << left << setw(10) << month << avgTemperature << setw(11) << endl;;
    
    // Check if average temperature is greater than or equal to the current max temperature
    if (avgTemperature >= maxTemperature)
    {
      // IF true, average temperature becomes the max temperature
       maxTemperature = avgTemperature;
    }
  }
  // Close input-5.txt
  inData.close();
}

/**
 * @name OutputMaxTemperature
 * @description: Outputs the max temperature found
 * 
 * @param double - max temperature found from input-5.txt
*/
void OutputMaxTemperature(double maxTemperature)
{
  // Output the maximum temperature in degrees celcius
  cout << "The maximum temperature is " << maxTemperature << " degrees.";
}