/**
 * @program: Software_Company.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 9, 2023
 *
 * @title: Software Company Data
 * @description: This program reads a file named input-7.txt containing employee data for a software company and prints it in a nicely formatted table.
 */

// Declare all header files and namespaces
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef class
 * @class EmployeeClass
 * @details This class defines an employee type.
 */
class EmployeeClass
{
public:
  string firstName;
  string lastName;
  string department;
  string title;
  string email;
  void set_DOB(string &employeeDOB);
  string get_DOB();
  void set_ID(int &employeeID);
  int get_ID();

private:
  string DOB;
  int ID;
};

// Declare all function prototypes
void print_header();
void read_data(ifstream &inData, EmployeeClass employeesPtr[]);
void print_data(EmployeeClass employees[]);

int main()
{
  // Declare variables
  EmployeeClass employees[10]; // Array of employee type objects
  ifstream inData;             // input stream variable

  // Prints neatly formatted header and table headers
  print_header();

  // Reads employee data and stores in employees array
  read_data(inData, employees);

  // Prints neatly structured table of employee data
  print_data(employees);

  return 0;
}

/**
 * @typedef class function
 * @memberof EmployeeClass
 * @name set_DOB
 * @details Sets private variable DOB (date of birth)
 *
 * @param string& employeeDOB - address of DOB variable
 * @returns void
 */
void EmployeeClass::set_DOB(string &employeeDOB)
{
  DOB = employeeDOB;
}

/**
 * @typedef class function
 * @memberof EmployeeClass
 * @name get_DOB
 * @details Gets private variable DOB (date of birth)
 *
 * @returns string DOB
 */
string EmployeeClass::get_DOB()
{
  return DOB;
}

/**
 * @typedef class function
 * @memberof EmployeeClass
 * @name set_ID
 * @details Sets private variable ID (employee ID)
 *
 * @param int& employeeID - address of employeeID variable
 * @returns void
 */
void EmployeeClass::set_ID(int &employeeID)
{
  ID = employeeID;
}

/**
 * @typedef class function
 * @memberof EmployeeClass
 * @name get_ID
 * @details Gets private variable ID (employee ID)
 *
 * @returns int ID
 */
int EmployeeClass::get_ID()
{
  return ID;
}

/**
 * @typedef function
 * @name print_header
 * @details This function prints a neatly formatted header at the top and table headers for employee data
 *
 * @returns void
 */
void print_header()
{
  // Prints border of * characters and title of company
  cout << setw(25) << setfill('*') << "" << endl;
  cout << "*   Dominion Software   *" << endl;
  cout << setw(25) << setfill('*') << "" << endl
       << endl;

  // Prints neatly spaced table headers for employee data
  cout << setfill(' ')
       << setw(15) << left << "Name"
       << setw(15) << left << "Department"
       << setw(15) << left << "Title"
       << setw(25) << left << "Email"
       << setw(15) << left << "Date of Birth"
       << setw(15) << left << "Employee ID"
       << endl;

  // Prints neatly spaced table header border
  cout << setfill('*')
       << setw(15) << right << "  "
       << setw(15) << right << "   "
       << setw(15) << right << "     "
       << setw(25) << right << "     "
       << setw(15) << right << "  "
       << setw(15) << right << "    "
       << endl;
}

/**
 * @typedef function
 * @name read_data
 * @details This function reads in employee data from a txt file and stores in EmployeeData object array.
 *
 * @param ifstream& inData - Input file stream variable for reading from txt file
 * @param EmployeeClass employees[] - Array to hold all employee data
 * @returns void
 */
void read_data(ifstream &inData, EmployeeClass employees[])
{
  // Declare local variables
  string DOB; // Temporary variable to hold date of birth (private EmployeeClass variable)
  int ID;     // Temporary variable to hold employee ID (private EmployeeClass variable)
  int p = 0;  // Incrementing variable for EmployeeClass array

  // Opens input-7.txt file for reading
  inData.open("input-7.txt");

  // Iterate until no more data in txt file
  while (inData)
  {
    // Read and store employee data into EmployeeClass array
    inData >> employees[p].firstName >> employees[p].lastName >> employees[p].department >> employees[p].title >> employees[p].email >>
        DOB >> ID;

    // Sets private variables from temporary variables
    employees[p].set_DOB(DOB);
    employees[p].set_ID(ID);

    // Sets inData to next line
    inData.ignore(100, '\n');

    // Increments p for EmployeeClass array
    p++;
  }

  // Close txt file
  inData.close();
}

/**
 * @typedef function
 * @name print_data
 * @details This function prints all employee data into neatly formatted table.
 *
 * @param EmployeeClass employees[] - array containing all employee data
 * @returns void
 */
void print_data(EmployeeClass employees[])
{
  // Declare local variables
  string fullName; // Will hold full name for formatting in same column of table

  // Iterates through each of the 7 employees' data
  for (int i = 0; i < 7; i++)
  {
    // Stores first and last name in one variable for printing in same column
    fullName = employees[i].firstName + " " + employees[i].lastName;

    // Prints employee data in table
    cout << setfill(' ') << setw(15) << left << fullName << setw(15) << left << employees[i].department << setw(15) << left << employees[i].title << setw(25) << left << employees[i].email << setw(15) << left << employees[i].get_DOB() << setw(15) << left << employees[i].get_ID() << endl;
  }
}