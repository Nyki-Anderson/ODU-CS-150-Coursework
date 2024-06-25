/**
* @program: Painting.cpp
* @author: Nyki Anderson
* @uin: 01179386
* @lab: 28415
* @date: February 26th, 2023
*
* @title: PaintRoom
* @description: This program is given the length and width of a region to be painted, and the price of a gallon of paint as input. The square footage of the region is calculated, and the number of gallons of paint needed to cover the region, and the cost is determined. One gallon of paint will cover 200 square feet of the region.
*/

/** 
 * Header File Declaration
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


/**
 * User-Defined Functions Prototypes Declaration
*/
void ProgrammerInfo();
int GetLength();
int GetWidth();
double GetGallonCost();
int ComputeArea( int, int );
int FindGallons( int );
double ComputeCost( double, int );
void PrintResults( int, int, double );

/**
 * Global Constant Declaration
*/
const int COVERAGE = 200; // 1 gallon of paint will cover 200 sq. ft.


int main()
  {
    // Local variable declarations for main
    int room_length; // length of the region to be covered
    int room_width; // width of the region to be covered
    int paint_area; // area of the region to be covered; long int would be required to store large areas
    int num_gallons; // number of gallons needed to cover the region
    double cost_per_gallon; // price of a gallon of paint
    double paint_cost; // the cost of the paint needed

    // Format output header
    ProgrammerInfo();

    // Get room length (user input)
    room_length = GetLength();

    // Get room width (user input)
    room_width = GetWidth();

    // Get cost per gallon of paint (user input)
    cost_per_gallon = GetGallonCost();
  
    // Compute room area
    paint_area = ComputeArea(room_length, room_width);

    // Compute number of gallons needed to cover room
    num_gallons = FindGallons(paint_area);             

    // Compute cost of paint
    paint_cost = ComputeCost(cost_per_gallon, num_gallons );

    // Output results
    PrintResults(num_gallons, paint_area, paint_cost );

    return(0);
  }

/**
 * @name: ProgrammerInfo
 * @description: Display the programmer info.
 * 
 * @return void
*/
void ProgrammerInfo()
{
  cout << setw(50) << setfill('*') << "" << endl;
  cout << setw(27) << setfill(' ') << "Lab 7" << endl;
  cout << setw(29) << "PaintRoom" << endl;
  cout << setw(37) << "CS150 ODU Computer Science" << endl;
  cout << setw(35) << "Author: Nyki Anderson" << endl;
  cout << setw(36) << "Date: January 26, 2023" << endl;
  cout << setw(50) << setfill('*') << "" << endl;
}

/**
 * @name: GetLength
 * @description: Prompts the user to input the length of a rectangular room
 * 
 * @returns int room_length - value input by user
*/
int GetLength()
  {
    // Declare local variable
    int room_length;

    // Prompt user for length of room  
    cout << "Enter the length of the room (in feet; an integer): ";
    cin >> room_length;

    return room_length;
  }

/**
 * @name: GetWidth
 * @description: Prompts the user to input the width of a rectangular room
 * 
 * @returns int room_width - value input by user
*/
int GetWidth()
  {
    int room_width;
    cout << "Enter the width of the room (in feet; an integer): ";
    cin >> room_width;

    return room_width;
  }

/**
 * @name: GetGallonCost
 * @description: Prompts the user to input the cost of a gallon of pain
 * 
 * @returns double cost_paint
*/
double GetGallonCost()
  {
    // Declare local variable
    double cost_per_gallon;

    // Prompt user to enter cost per gallon
    cout << "Enter the cost of a gallon of paint: ";
    cin >> cost_per_gallon;

    // Extra spaces between input and output
    cout << endl << endl;

    return cost_per_gallon;
  }

/**
 * @name: ComputeArea
 * @description: Calculate and returns the rectangle area
 * 
 * @param int room_length - user input for length
 * @param int room_width - user input for width
 * 
 * @returns int paint_area - area of rectangle to be painted
*/
int ComputeArea(int room_length, int room_width )
{
  // Declare local variable
  int paint_area;

  // Calculate area of room
  paint_area = room_length * room_width;

  return paint_area;
}

/**
 * @name: FindGallons
 * @description: Calculates the number of gallons of paint needed based on global constant COVERAGE
 * 
 * @param int paint_area - area needed to be painted
 * 
 * @returns int num_gallons - number of gallons of paint needed to cover the area
*/
int FindGallons(int paint_area)
{
  // Declare local variable
  int num_gallons;

  // Calculate number of gallons needed to cover room and round up 
  num_gallons = ceil(static_cast<double>(paint_area) / COVERAGE);

  return num_gallons;
}

/**
 * @name: ComputeCost
 * @description: Computes how much it would cost to buy all the pain necessary to cover the region
 * 
 * @param double cost_per_gal - price of paint per gallon
 * @param int num_gallons
 * 
 * @returns double cost_paint - total cost of paint needed to cover area
*/
double ComputeCost(double cost_per_gallon, int num_gallons)
{
  // Declare local variable
  double cost_paint;

  // Calculate total cost of paint
  cost_paint = cost_per_gallon * num_gallons;
 
  return cost_paint;
}

/**
 * @name: PrintResults
 * @description: Outputs a message stating teh number of gallons, area, and the cost of the paint
 * 
 * @param int num_gallon - number of gallons of paint needed
 * @param int paint_area - area of room to pain
 * @param double cost_paint - total cost of paint needed for area
 * 
 * @returns: void
*/
void PrintResults(int num_gallons, int paint_area, double cost_paint)
  {
    cout << "The area of the room is " << paint_area << " square feet." << endl;

    cout << "One gallon of paint covers " << COVERAGE << " square feet." << endl;

    cout << "You will need " << num_gallons << " gallons of paint." << endl;

    // Format output of cost (money)  
    cout << "The total cost for paint is $" << fixed << showpoint << setprecision(2) << cost_paint << endl;
  }