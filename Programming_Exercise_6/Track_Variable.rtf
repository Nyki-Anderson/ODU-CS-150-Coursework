/**
* @program: Track_Variable.cpp
* @author: Nyki Anderson
* @uin: 01179386
* @lab: 28415
* @date: February 26th, 2023
*
* @title: Tracking Variables
* @description: This program prompts the user to input two numbers and outputs a number z based on calculations in a function called trackVar.
*/

/**
 * Header File Declarations
 * @include iostream - input/output functions
 * @include cmath - math functions
 * @include iomanip - input/output formatting fumctions
*/
#include <iostream>
#include <cmath>
#include <iomanip>

/**
 * Standard Library Declaration
*/
using namespace std;

/**
 * User-Defined Function Prototype Declaration
 * 
 * @param double& x - address of user input for variable one
 * @param double y - value of user input for variable two
 * @param double& z - address of z variable
 * 
 * @returns void
 * 
 * !change: trackVar now excepts three variables (added double& z)
*/
void trackVar(double& x, double y, double& z);

int main()
{
    // Variable declarations
    // !change: now declare z in main instead of trackVar so main can output
    double one, two;
    double z;

    // Format ouput of values entered to have two decimal places (makes sure if user inputs integers that they are able to do floating point math)
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter two numbers: ";
    cin >> one >> two;
    cout << endl;

    // 1st Call
    trackVar(one, two, z);
    // !change: main now outputs z
    // z = one rounded down plus two rounded up
    cout << "z = " << z << ", ";
    // one = one + z
    // two = same value as input
    cout << "one = " << one << ", two = " << two << endl;

    // 2nd Call
    trackVar(two, one, z);
    // !change: main now outputs z
    // z = (one + z) rounded down plus one rounded up
    cout << "z = " << z << ", ";
    // one = two + z
    // two = one + z (from 1st Call)
    cout << "one = " << one << ", two = " << two << endl;

    return 0;
}

/**
 * @name: trackVar
 * @description: Takes the address of x and z and the value of y (does not change the value of y) outside of this scope
 * 
 * @param double& x - address of x (changes the value of x globally) value of one
 * @param double y - value of 
 * @param double& z - address of z (changes the value of z globally)
 *  
 * !change: now has param double& z so that value of z changes globally
*/
void trackVar(double& x, double y, double& z)
{
    // 1st Call: rounds one down and rounds two up and adds them, stores in address of z variable so main function has access to value
    // 2nd Call: rounds two down and rounds two up, stores in address z so main has access to new value of z
    z = floor(x) + ceil(y);

    // 1st Call: adds one to z and stores in  one address
    // 2nd call; adds two to new value of z and stores in address of one so main has access to new value of two
    x = x + z;

    // 1st Call: subtracts z from two and stores in y but this does not change two for main function
    // 2nd Call: subtracts z from one and stores in y but does not change one for main function
    y = y - z;
}