/**
 * Name: Nyki Anderson
 * 
 * Title: Measuring Earthquakes
 * Description: This program reads the Earthquake's magnitude and displays the effect on an Earthquake measured by the Richter Scale,
*/

#include <iostream>

using namespace std;

/**
 * Declare function prototype
*/
void InputMagnitude(int&);
void RichterEffect(int);

int main()
{
  // Declare variables
  int magnitude;

  // Gets user input for magnitude
  InputMagnitude(magnitude);

  // If magnitude is negative, give error message
  if (magnitude < 0)
  {
    cout << "Error, you entered an invalid magnitude. Goodbye.";
  }
  // Else, send to Richter Effect
  else {

    // Determines which Richter bracket the magnitude falls under
    RichterEffect(magnitude);
  }

  return 0;
}

/**
 * @name InputMagnitude
 * @description: This function prompts the user to input the magnitude of the earthquake
 * 
 * @param int& - the reference address for the magnitude, the value at this address is changed to the user's input
*/
void InputMagnitude(int& magnitude)
{
  cout << "Please enter the Earthquake magnitude: ";
  cin >> magnitude;
}

/**
 * @name RichterEffect
 * @description: Takes magnitude input by user and compares it to the varying Richter scale. Each bracket of the scale outputs a different damage effect message.
 * 
 * @param int - the input magnitude for the earthquake
*/
void RichterEffect(int magnitude)
{
  // If else structure to determin which Richter bracket the magnitude entered falls under
  if (magnitude >= 8)
  {
    cout << "Most structures fall." << endl;
  }
  else if (magnitude == 7)
  {
    cout << "Many building destoryed." << endl;
  }
  else if (magnitude == 6)
  {
    cout << "Many buildings considerably damaged, some collapse." << endl;
  }
  else if (magnitude == 5)
  {
    cout << "Damage to poorly constructed buildings." << endl;
  }
  else if (magnitude == 4)
  {
    cout << "Minor damage." << endl;
  }
  else if (magnitude <= 3)
  {
    cout << "Usually not felt, but can be recorded." << endl;
  }
}