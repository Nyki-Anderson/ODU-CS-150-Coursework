/**
 * @program: Insurance.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 24th, 2023
 *
 * @title: Calculating Yearly Insurance Premiums
 * @description: This program calculates the yearly insurance premiums for customers applying for health insurance. It takes an input file that contains the first name, last name, age, and health indicator for each customer. It then outputs the number of customers eligible for the 20% discount and the total amount of money collected from the customers in each indicator category.
 */

// Include all header files and namespaces
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

/**
 * @typedef struct
 * @name CustomerType
 * @details This struct defines a customer with 6 members: first name, last name, indicator group, age, yearly cost, and discount applied.
 */
struct CustomerType
{
  string firstName;
  string lastName;
  char indicator;
  int age;
  double yearlyCost;
  bool discountApplied;
};

/**
 * @typedef struct
 * @name IndicatorType
 * @details This struct defines an indicator group with 2 members: the number of customers and the total collected for each indicator group.
 */
struct IndicatorType
{
  int numCustomers;
  double totalCollected;
};

// Declare all function prototypes
void read_file(ifstream &inFile, CustomerType customers[], IndicatorType groups[], int &length);
void calculate_yearly_cost(CustomerType customers[], IndicatorType groups[], int length);
void print_stats(const CustomerType customers[], const IndicatorType groups[], int length);

// Declare all constants
const string PROGRAM = "Insurance.cpp";    // Name of program
const string PROGRAMMER = "Nyki Anderson"; // Name of programmer
const string UIN = "1179386";              // UIN of programmer
const string DATE = "April 24th 2023";     // Date of program
const double FEMALE = 55.00;               // Cost of female indicator group
const double MALE = 61.50;                 // Cost of male indicator group
const double TOBACCO = 89.00;              // Cost of tobacco indicator group
const double SENIOR = 72.50;               // Cost of senior indicator group
const double AMPUTEE = 9.00;               // Cost of amputee indicator group
const double DISCOUNT_UNDER_35 = 0.2;      // Discount applied for customers under 35

int main()
{
  // Declare all variables
  CustomerType customers[100];         // Array of CustomerType having space for 100 customers
  IndicatorType groups[6] = {0, 0.00}; // Array of IndicatorType for the 6 groups (female, male, tobacco, senior, amputee, discount)
  int length;                          // Will hold length of customers array
  ifstream inFile;                     // Input stream variable

  read_file(inFile, customers, groups, length);     // Read input file, populate customers and groups array, and define length of customers array
  calculate_yearly_cost(customers, groups, length); // Calculate cost for each customer and amount collected for each indicator group
  print_stats(customers, groups, length);           // Prints all values to command prompt

  return 0;
}

/**
 * @typedef function
 * @name read_file
 * @details This function reads in the file "input(5).txt" which contains values for first/last name, age, and indicator group. Using these values, the customers and groups arrays are populated. The value for length of the customers array is determined as well.
 *
 * @param ifstream& - reference to address of inFile input file stream variable
 * @param CustomerType [] - reference to first index of customers array
 * @param IndicatorType [] = reference to first index of groups array
 * @param int& - reference to address of length variable which will hold length of customers array
 *
 * @return void
 */
void read_file(ifstream &inFile, CustomerType customers[], IndicatorType groups[], int &length)
{
  // Declare local variables
  int i = 0;                   // initialize customers indexing variable
  inFile.open("input(5).txt"); // Open txt file containing customer information

  // While there are still customers to read in
  while (inFile)
  {
    // Fill customers array with information in txt file
    inFile >> customers[i].firstName >> customers[i].lastName >> customers[i].age >> customers[i].indicator;

    // IF current customer is younger than 35, they receive a discount
    if (customers[i].age < 35)
    {
      customers[i].discountApplied = true; // Stores true if current customer is under 35
      groups[5].numCustomers++;            // Adds a customer to the discount group
    }
    else
      customers[i].discountApplied = false; // Stores false if customer is older than 35

    // Switch cases depending on indicator group of current customer and adds a customer to the count in groups array
    switch (customers[i].indicator)
    {
    case 'F': // Female indicator group
      groups[0].numCustomers++;
      break;
    case 'M': // Male indicator group
      groups[1].numCustomers++;
      break;
    case 'T': // Tobacco indicator group
      groups[2].numCustomers++;
      break;
    case 'S': // Senior indicator group
      groups[3].numCustomers++;
      break;
    case 'A': // Amputee indicator group
      groups[4].numCustomers++;
      break;
    }

    inFile.ignore(100, '\n'); // Skip to next line in txt file
    i++;                      // Increase customers index by 1
  }

  length = i - 1; // Length of customers array (-1 because index increases once before while terminates)

  inFile.close(); // Close "input(5).txt" file
}

/**
 * @typedef function
 * @name calculate_yearly_cost
 * @details This function calculates the total cost for each customer and the amount collected in each indicator group (including discount group)
 *
 * @param CustomerType [] - reference to first index of customers array
 * @param IndicatorType [] = reference to first index of groups array
 * @param int& - reference to address of length variable which will hold length of customers array
 *
 * @return void
 */
void calculate_yearly_cost(CustomerType customers[], IndicatorType groups[], int length)
{
  // Declare local variables
  double discount; // Holds discount (if applied) so it can be applied to groups array totalCollected as well as customers yearlyCost

  // Iterate through each customer
  for (int i = 0; i < length; i++)
  {
    discount = 1; // Reset discount to 1

    // IF customer has 35 and under discount applied, update discount local variable
    if (customers[i].discountApplied == true)
      discount = (1 - DISCOUNT_UNDER_35); // 1 - discount = the amount after discount

    // Switch statement where each case is the indicator group the customer belongs to. Adds cost to each customer as well as adding cost to the respective groups indicator
    switch (customers[i].indicator)
    {
    case 'F':
      customers[i].yearlyCost += FEMALE * discount;
      groups[0].totalCollected += FEMALE * discount;
      break;
    case 'M':
      customers[i].yearlyCost += MALE * discount;
      groups[1].totalCollected += MALE * discount;
      break;
    case 'T':
      customers[i].yearlyCost += TOBACCO * discount;
      groups[2].totalCollected += TOBACCO * discount;
      break;
    case 'S':
      customers[i].yearlyCost += SENIOR * discount;
      groups[3].totalCollected += SENIOR * discount;
      break;
    case 'A':
      customers[i].yearlyCost += AMPUTEE * discount;
      groups[4].totalCollected += AMPUTEE * discount;
      break;
    default:
      break;
    }
  }
}

/**
 * @typedef function
 * @name print_stats
 * @details This function prints each customer's information (first/last name, age, indicator group, and total cost), the number of customers receiving 35 and under discount, as well as the indicator group breakdown of total collected.
 *
 * @param const CustomerType [] - immutable reference to first index of customers array
 * @param const IndicatorType [] = immutable reference to first index of groups array
 * @param int - value of length variable which will hold length of customers array
 *
 * @return void
 */
void print_stats(const CustomerType customers[], const IndicatorType groups[], int length)
{
  // Student information
  cout << "Program: " << PROGRAM << endl;
  cout << "Programmer: " << PROGRAMMER << endl;
  cout << "UIN: " << UIN << endl;
  cout << "Date: " << DATE << endl
       << endl;

  // Nicely formatted header for table
  cout << left << setw(15) << "First Name" << left << setw(15) << "Last Name" << left << setw(15) << "Indicator" << left << setw(8) << "Age" << left << setw(10) << "Cost" << endl;

  // Border of - characters
  cout << left << setw(65) << setfill('-') << "" << endl;

  // Sets precision of decimal places to indicate currency and reset setfill
  cout << fixed << showpoint << setprecision(2) << setfill(' ');

  // Iterate through and print each customer's information in table
  for (int i = 0; i < length; i++)
  {
    cout << left << setw(15) << customers[i].firstName << left << setw(15) << customers[i].lastName << left << setw(15) << customers[i].indicator << left << setw(8) << customers[i].age << left << setw(10) << customers[i].yearlyCost << endl;
  }

  // Print number of customers eligible for under 35 discount
  cout << endl
       << "Total number of customers eligible for discount: " << groups[5].numCustomers << endl
       << endl;

  // Print nicely formatted header for indicator group breakdown
  cout << left << setw(20) << "Indicator Group" << left << setw(10) << "Collected" << endl;

  // Border of - characters
  cout << left << setw(30) << setfill('-') << "" << endl;

  // Reset setfill
  cout << setfill(' ');

  // Print breakdown of total collected for each indicator group
  cout << left << setw(20) << "Female" << left << setw(10) << groups[0].totalCollected << endl;
  cout << left << setw(20) << "Male" << left << setw(10) << groups[1].totalCollected << endl;
  cout << left << setw(20) << "Tobacco" << left << setw(10) << groups[2].totalCollected << endl;
  cout << left << setw(20) << "Senior" << left << setw(10) << groups[3].totalCollected << endl;
  cout << left << setw(20) << "Amputee" << left << setw(10) << groups[4].totalCollected << endl;
}