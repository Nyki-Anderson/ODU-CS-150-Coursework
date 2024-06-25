/**
 * @program: App_Feedback.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 27th, 2023
 *
 * @title: App Feedback
 * @description: This program takes a file called input.txt and reads from it the names of five apps and the ratings received from various users for those apps. It assigns points to each app based on the ratings it received. It then outputs the list of apps and the ratings, calculate the total number of points for each app, finds the bests app, also the worst app with their respective points received.
 */

/**
 * Include all header files and namespaces
 */
#include <iostream>  // Input/output stream
#include <iomanip>   // Format output
#include <fstream>   // File input/output stream
#include <string>    // String datatype
using namespace std; // Removes std:: from standard function calls

/**
 * @struct
 * @name appType
 * @details This struct object defines an app and its consumer ratings. It contains 9 members: a name, 5 rating brackets, total points, and two boolean members to maintain if the app is the best or the worst based on points.
 */
struct appType
{
  string name; // Name of app

  // Consumer ratings
  int veryBad;
  int bad;
  int okay;
  int good;
  int excellent;

  int totalPoints; // Total points earned by rating
  bool isBest;     // True if this app earned the most points
  bool isWorst;    // True if this app earned the least points
};

/**
 * Declare function prototypes
 */
void print_program_details();
void print_table_header();
void read_app_data(ifstream &inFile, appType appRatings[]);
void calculate_app_points(appType appRatings[]);
void print_results(const appType appRatings[]);

/**
 * Declare all constant variables
 */
const string PROGRAMMER = "Nyki Anderson";
const string UIN = "01179386";
const string DATE = "April 27th, 2023";
const int VERY_BAD = 1;
const int BAD = 2;
const int OKAY = 3;
const int GOOD = 4;
const int EXCELLENT = 5;

int main()
{
  // Declare all variables
  appType appRatings[5]; // Array of struct objects holding five different apps and their consumer rating information
  ifstream inFile;       // Input file stream variable

  print_program_details();           // Prints metadata for programmer, UIN, and date
  print_table_header();              // Prints a main header and table headers for data
  read_app_data(inFile, appRatings); // Reads app data from file input.txt
  calculate_app_points(appRatings);  // Calculates total points and classifies the best/worst app
  print_results(appRatings);         // All results are printed including best/worst app

  return 0;
}

/**
 * @name Print Program Details
 * @details This function simply prints the program metadata including programmer name, their UIN, and the date.
 */
void print_program_details()
{
  cout << "\nName: " << PROGRAMMER << endl;
  cout << "UIN: " << UIN << endl;
  cout << "Date: " << DATE << endl
       << endl;
}

/**
 * @name Print Table Header
 * @details This function prints neatly formatted headers for each column of the table with borders and spacing.
 */
void print_table_header()
{
  cout << "Apps Consumer Reviews:" << endl; // Title for data
  cout << setw(25) << setfill('=') << "" << endl
       << endl;         // Border
  cout << setfill(' '); // Resets setfill to no fill

  // Table column headers
  cout << left << setw(15) << "App Name"
       << left << setw(10) << "Very Bad"
       << left << setw(10) << "Bad"
       << left << setw(10) << "Okay"
       << left << setw(10) << "Good"
       << left << setw(10) << "Excellent"
       << left << setw(15) << "| Total Points" << endl;

  cout << setw(80) << setfill('=') << "" << endl; // Border

  cout << setfill(' '); // Resets setfill to no fill
}

/**
 * @name Read App Data
 * @details This function reads from "input.txt" to get each of the five app names and their respective consumer reviews for each category: very bad, bad, okay, good, and excellent. It also initializes the isBest and isWorst members to false.
 *
 * @param ifstream& - Reference to input file stream variable inFile
 * @param appType [] - Reference to base address of appRatings array
 */
void read_app_data(ifstream &inFile, appType appRatings[])
{
  inFile.open("input.txt"); // Open input file

  // Iterate through all five apps' data
  for (int i = 0; i < 5; i++)
  {
    // Store each app name and value for each rating category
    inFile >> appRatings[i].name >> appRatings[i].veryBad >> appRatings[i].bad >> appRatings[i].okay >> appRatings[i].good >> appRatings[i].excellent;

    // After last rating category, there is just space until next line. Ignore this space.
    inFile.ignore(100, '\n');

    // Initialize both these values to false for all apps
    appRatings[i].isBest = false;
    appRatings[i].isWorst = false;
  }

  // Close input.txt
  inFile.close();
}

/**
 * @name Calculate App Points
 * @details This function calculates the total points each app earned based on their ratings. The rating is calculated as follows, 1 pt for very bad, 2 pt for bad, 3 pt for okay, 4 pt for good, and 5 pt for excellent. The total is stored in appRatings and then the best/worst apps are decided. The apps that fit these two categories will contain "true" as their respective member values.
 *
 * @param appType [] - Reference to appRatings base address
 */
void calculate_app_points(appType appRatings[])
{
  // Declare local variables
  int total;     // Will temporarily hold total points for each app
  int best = 0;  // Will temporarily hold index of best app
  int worst = 0; // Will temporarily hold index of worst app

  // Iterate through all five apps
  for (int i = 0; i < 5; i++)
  {
    total = 0; // Reset total each time a new app is being summed

    total += appRatings[i].veryBad * VERY_BAD;    // VERY_BAD = 1
    total += appRatings[i].bad * BAD;             // BAD = 2
    total += appRatings[i].okay * OKAY;           // OKAY = 3
    total += appRatings[i].good * GOOD;           // GOOD = 4
    total += appRatings[i].excellent * EXCELLENT; // EXCELLENT = 5

    appRatings[i].totalPoints = total; // Store total in appRatings for each app

    // If the current app has a greater total points than the best total points it is the new best
    if (appRatings[i].totalPoints > appRatings[best].totalPoints)
    {
      best = i; // Index of the best app
    }

    // If the current app has less total points than the worst total points it is the new worst
    if (appRatings[i].totalPoints < appRatings[worst].totalPoints)
    {
      worst = i; // Index of the worst app
    }
  }

  // Store finalized best/worst in appRatings indicating true in the respective fields
  appRatings[best].isBest = true;
  appRatings[worst].isWorst = true;
}

/**
 * @name Print Results
 * @details This function prints the names of the apps, their ratings in each category, and their total number of points earned based on those ratings. It also prints which app is the best and which is the worst.
 *
 * @param const appType - Immutable reference to base address of appRatings array
 */
void print_results(const appType appRatings[])
{
  // Declare local variables
  int best = 0, worst = 0; // Temporarily holds indexes of best/worst apps

  // Iterate through all five apps
  for (int i = 0; i < 5; i++)
  {
    // Nicely formatted print of each apps' name and rating data.
    cout << left << setw(15) << appRatings[i].name
         << left << setw(10) << appRatings[i].veryBad
         << left << setw(10) << appRatings[i].bad
         << left << setw(10) << appRatings[i].okay
         << left << setw(10) << appRatings[i].good
         << left << setw(12) << appRatings[i].excellent
         << left << setw(15) << appRatings[i].totalPoints << endl;

    // Keep track of index of best app
    if (appRatings[i].isBest == true)
      best = i;

    // Keep track of index of worst app
    if (appRatings[i].isWorst == true)
      worst = i;
  }

  // Print the best app
  cout << "\n\nThe best app is " << appRatings[best].name << ". It received " << appRatings[best].totalPoints << " points." << endl;

  // Print the worst app
  cout << "The worst app is " << appRatings[worst].name << ". It received " << appRatings[worst].totalPoints << " points." << endl;
}