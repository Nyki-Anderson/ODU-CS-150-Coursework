/**
* @program: Calories_Burned.cpp
* @author: Nyki Anderson
* @uin: 01179386
* @lab: 28415
* @date: March 2, 2023
*
* @title: Metabolic Equivalent and Calories Burned
* @description: This program takes user input for weight, name of activity, and number of minutes exercised, then calculates the total number of calories burned based on the acitivity's metabolic equivalent.
*/

/**
 * Declare header files and namespaces to include
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

/**
 * Declare constants
*/
const double CAL_PER_MIN_CONSTANT = 0.0175;

/**
 * Declare function prototypes
*/
void OutputHeader();
void InputExercise(int&, string&, int&);
double FindMET(string);
double CalculateCalsBurned(double, int, int);
void OutputCalsBurned(string, double, double);
void ErrorMessage(char);

int main()
{
  int weight, minActivity;
  double metValue, calsBurned;
  char errorChar;
  string nameActivity;

  // Output nicely formatted header to output stream
  OutputHeader();

  // Prompt user to input weight, name of the exercise, and the number of minutes performed
  InputExercise(weight, nameActivity, minActivity);

  // If weight and minutes entered are valid, continue
  if ((weight > 0) && (minActivity > 0))
  {
    // Search input.txt for the input activity name 
    metValue = FindMET(nameActivity);

    // If activity name is found, continue
    if (metValue != 0)
    {
      // Calculate the number of calories burned
      calsBurned = CalculateCalsBurned(metValue, weight, minActivity);

      // Output the activity name, MET value, and number of calories burned
      OutputCalsBurned(nameActivity, metValue, calsBurned);
    }
    // If activity name is not found, output error message 
    else
      ErrorMessage('a');
  }
  // Else, weight and or minutes are invalid and outputs error message
  else 
    ErrorMessage('n');

  return 0;
}

/**
 * @name OutputHeader
 * @description: Outputs a nicely formatted header to the io stream
*/
void OutputHeader()
{
  cout << setw(38) << setfill('*') << "" << endl;
  cout << "* Welcome to the Calories Calculator *" << endl;
  cout << setw(38) << setfill('*') << "" << endl << endl;
}

/**
 * @name InputExercise
 * @description: Prompts the user to input their weight, name of the activity, and the number of minutes performed, then stores in address of their respective variables
 * 
 * @param int& - address of weight variable
 * @param string& - address of nameActivity variable
 * @param int& - address of minActivity variable
*/
void InputExercise(int& weight, string& nameActivity, int& minActivity)
{
  cout << "Enter your weight in kilograms: ";
  cin >> weight;

  cout << "Enter the name of the activity: ";
  cin >> nameActivity;

  cout << endl << "Enter the number of minutes: ";  
  cin >> minActivity;

  cout << endl;
}

/**
 * @name FindMET
 * @description: Uses the name of the activity entered by user to search input.txt for a match, then outputs the met value for that activity
*/
double FindMET(string nameActivity)
{
  // Declare local variables
  string fileActivity;
  double fileMET;

  // Declare file stream variable and open input.txt
  ifstream inData;
  inData.open("input.txt");

  // Read the activity and met value from each line of input.txt until no more lines
  do
  {
    // Read the activity and met value
    inData >> fileActivity >> fileMET;

    // Ignore the rest of the line until newline is reached
    inData.ignore(100, '\n');

    // If the read in activity equals the user input activity return the met value
    if (fileActivity == nameActivity)
      return fileMET;
  } 
  while (inData);

  // Close input.txt
  inData.close();

  // If no activity matched the user input activity return 0
  return 0;
}

/**
 * @name CalculateCalsBurned
 * @description: Calculates the number of calories burned based on the metabolic equivalent equation and returns the number of calories burned
 * 
 * @param double - met value found in input.txt
 * @param int - weight input by user
 * @param int - minutes exercised input by user
 * 
 * @returns number of calories burned
*/
double CalculateCalsBurned(double metValue, int weight, int minActivity)
{
  // Calculate number of calories burned
  return CAL_PER_MIN_CONSTANT * metValue * weight * minActivity;
}

/**
 * @name OutputCalsBurned
 * @description: Outputs the name of the activity and the metvalue for the activity as well as the total number of calories burned
 * 
 * @param string - name of the activity input by user
 * @param double - the metvalue from input.txt
 * @param double - the number of calories burned
*/
void OutputCalsBurned(string nameActivity, double metValue, double calsBurned)
{
  cout << "The metabolic equivalent of " << nameActivity << " is " << metValue << endl;
  cout << "You burned an estimated " << calsBurned << " calories." << endl;
}

/**
 * @name ErrorMessage
 * @description: Outputs an error based on what information is invalid
 * 
 * @param char - the character indicator for which type of information is invalid (may be 'n' for numeric error or 'a' for activity error)
*/
void ErrorMessage(char errorType)
{
  // If the user input an invalid weight or number of minutes
  if (errorType == 'n')
    cout << "ERROR! You have input an invalid weight or number of minutes. Must be greater than 0." << endl;

  // If the user input an invalid activity type
  else if (errorType == 'a')
    cout << "ERROR! You have input an invalid activity." << endl;
}