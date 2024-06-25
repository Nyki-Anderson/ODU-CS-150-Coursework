/**
 * @program: Soccer.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 2nd, 2023
 *
 * @title: Soccer Class
 * @description: This program program prompts the user to input information about a particular sports team and prints that information.
 */

// Include all header files
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @typedef class
 * @name SportsClass
 * @details This class has 6 public members and 1 private member. And defines a sports team object
 */
class SportsClass
{
  // Define all public members
public:
  string sportName;
  string teamName;
  int numberOfPlayers;
  double teamPayroll;
  void set_coach_salary(double salary); // Set the value of private member coachSalary
  void print_coach_salary();            // Print the value of private member coachSalary

  // Define all private members
private:
  double coachSalary;
};

int main()
{
  // Declare all variables and class objects
  SportsClass soccer; // Declare a class object
  double salary;      // Will hold the coaches salary input by user

  cout << "Enter the name of the sport: ";
  cin >> soccer.sportName;

  cout << "Enter the name of the team: ";
  cin >> soccer.teamName;

  cout << "Enter the number of the players: ";
  cin >> soccer.numberOfPlayers;

  cout << "Enter the team Payroll: ";
  cin >> soccer.teamPayroll;

  cout << "Enter the salary of the coach: ";
  cin >> salary;

  // Sets the class member coachSalary which is private member of the SportClass
  soccer.set_coach_salary(salary);

  /// cout << setprecision(0);
  cout << "-----------------------------------------" << endl;
  cout << "The Team:" << endl
       << "Name of the sport: " << soccer.sportName << endl
       << "Name of the team: " << soccer.teamName << endl
       << "Number of the players: " << soccer.numberOfPlayers << endl
       << "Team Payroll: " << soccer.teamPayroll << endl
       << "Coach Salary: ";
  // Prints coachSalary which is a private member of the SportClass
  soccer.print_coach_salary();
  cout << endl
       << endl;

  return 0;
}

/**
 * @typedef class function
 * @memberof SportsClass
 * @name set_coach_salary
 * @details This function sets the value of coachSalary which is a private member of the SportsClass
 *
 * @param double salary - hold the user input for coachSalary, used to set coachSalary
 * @return void
 */
void SportsClass::set_coach_salary(double salary)
{
  coachSalary = salary;
}

/**
 * @typedef class function
 * @memberof SportsClass
 * @name print_coach_salary
 * @details This function prints the private member coachSalary
 *
 * @return void
 */
void SportsClass::print_coach_salary()
{
  cout << coachSalary;
}