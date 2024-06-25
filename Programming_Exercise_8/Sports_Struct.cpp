/**
 * @program: Sports_Struct.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 26th, 2023
 *
 * @title: Sports Struct
 * @description: This program uses a struct datatype to hold information about types of sports. It fills the struct variable soccer and outputs the struct variable soccer's info.
 */

// Include header files and use namespace
#include <iostream>
#include <string>
using namespace std;

/**
 * @typedef Struct
 * @name sportsType
 * @description: Struct type holding information about a particular sportsteam
 *
 * @memeber: string sportName holds the name of the sport
 * @member: string teamName holds the name of the team
 * @member: int numberOfPlayers holds the number of players on the team
 * @member: double teamPayroll holds the payroll for the team
 * @member: double coachSalary holds the coach's salary
 */
struct sportsType
{
  string sportName;
  string teamName;
  int numberOfPlayers;
  double teamPayroll;
  double coachSalary;
};

// Function protoypes declarations
void inputData(sportsType &soccer);
void outputData(sportsType soccer);

int main()
{
  // Declares new struct variable soccer
  sportsType soccer;

  // Fills the soccer struct variable members with user input
  inputData(soccer);

  // Prints the information held in the soccer struct variable
  outputData(soccer);

  return 0;
}

/**
 * @typedef Function
 * @name inputData
 * @description: This function fills each member of the sportsType struct variable, soccer, with user input
 *
 * @param sportsType& - Reference to the soccer struct variable
 */
void inputData(sportsType &soccer)
{
  cout << "Enter the name of the sport: ";
  cin >> soccer.sportName;

  cout << "Enter the name of the team: ";
  cin >> soccer.teamName;

  cout << "Enter the number of players: ";
  cin >> soccer.numberOfPlayers;

  cout << "Enter the team Payroll: ";
  cin >> soccer.teamPayroll;

  cout << "Enter the salary of the coach: ";
  cin >> soccer.coachSalary;
}

/**
 * @typedef Function
 * @name outputData
 * @description: This function outputs each member of the sportsType struct variable, soccer.
 *
 * @param sportsType - The values in the soccer sportsType struct variable.
 */
void outputData(sportsType soccer)
{
  cout << endl
       << "The Team:" << endl;
  cout << "Name of the sport: " << soccer.sportName << endl;
  cout << "Name of the team: " << soccer.teamName << endl;
  cout << "Number of players: " << soccer.numberOfPlayers << endl;
  cout << "Team Payroll: " << soccer.teamPayroll << endl;
  cout << "Salary of the Coach: " << soccer.coachSalary << endl;
}