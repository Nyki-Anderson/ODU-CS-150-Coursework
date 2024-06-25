/**
 * @program: Concert.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 2nd, 2023
 *
 * @title: ODU Concert Promoter
 * @description: This program prompts the user if they wish to buy tickets to the concert, if they do they will be asked to input the number of tickets they wish to buy. The total number of tickets is not to be exceeded. A receipt will be printed with the total price of the tickets and number of tickets remaining.
 */

// Include all header files and namespaces
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef struct
 * @name ConcertPromoter
 * @description: This struct holds information for a particular concert.
 *
 * @member: string concertName - name of the concert
 * @member: double ticketPrice - price of 1 ticket
 * @member: int capacity - max number of people for venue
 * @member: int unsoldTickets - number of tickets available
 */
struct ConcertPromoter
{
  string concertName;
  double ticketPrice;
  int capacity;
  int unsoldTickets;
};

// Declare function prototypes
void initiate_concert(ConcertPromoter &concert1);
void print_header(ConcertPromoter concert1);
bool user_decision();
void number_of_tickets(ConcertPromoter concert1, int &ticketsBuying);
void print_receipt(ConcertPromoter concert1, int ticketsBuying);
void update_tickets(ConcertPromoter &concert1, int ticketsBuying);

int main()
{
  // Declare all variables
  ConcertPromoter concert1; // Declares struct variable
  int ticketsBuying;        // Number of tickets the user wishes to buy

  // Fills struct with concert information
  initiate_concert(concert1);

  // Prints neatly formatted header with concert name
  print_header(concert1);

  // While the user wishes to buy tickets
  while (user_decision() && concert1.unsoldTickets != 0)
  {
    // Prompts user to input number of tickets to buy
    number_of_tickets(concert1, ticketsBuying);

    // Prints and calculates the cost of the tickets
    print_receipt(concert1, ticketsBuying);

    // Updates the available number of tickets
    update_tickets(concert1, ticketsBuying);

    // Resets number of tickets to buy for next purchase
    ticketsBuying = 0;
  }

  if (concert1.unsoldTickets == 0)
    cout << "This concert is sold out!" << endl;
  else
    // Once user chooses to finish buying tickets, displays the available number of tickets
    cout << "Number of tickets remaining: " << concert1.unsoldTickets << endl;

  return 0;
}

/**
 * @typedef function
 * @name initiate_concert
 * @details This function sets the values for the ConcertPromoter struct members
 *
 * @param ConcertPromoter& concert1 - Reference to address of struct concert1, used to set member values
 * @return void
 */
void initiate_concert(ConcertPromoter &concert1)
{
  concert1.concertName = "Breaking Benjamin Concert";
  concert1.ticketPrice = 10.0;
  concert1.capacity = 100;
  concert1.unsoldTickets = 100;
}

/**
 * @typedef function
 * @name print_header
 * @details This function prints a neatly formatted header and lists the concert name
 *
 * @param ConcertPromoter concert1 - Used for the name of the concert
 * @return void
 */
void print_header(ConcertPromoter concert1)
{
  // Prints a border of * around header
  cout << setw(45) << setfill('*') << "" << endl;
  cout << "** ODU Conservatory Promoter Sales Program **" << endl;
  cout << setw(45) << setfill('*') << "" << endl;

  // Lists concert name at top of prompt
  cout << concert1.concertName << " Ticket Sales " << endl;
}

/**
 * @typedef function
 * @name user_decision
 * @details This function prompts the user to input either 'B' for (buy tickets) or 'F' for (finish). If the user wishes to buy tickets, the function returns true, if the user wishes to finish, the function returns false, and if the user inputs any other character they are prompted to input a valid decision.
 *
 * @return bool - returns true if the user inputs 'B' and false if the user inputs 'F'
 */
bool user_decision()
{
  // Declare local variables
  char userInput; // Holds the user's decision

  do
  {
    // Prompts the user to input either 'B' (buy) or 'F' (finish) and stores input in userInput variable
    cout << "Enter B to buy tickets" << endl
         << "Enter F to finish buying tickets" << endl;
    cin >> userInput;
    cout << endl;

    // If the user inputs 'B' or 'b' they wish to purchase tickets
    if (userInput == 'B' || userInput == 'b')
      return true;

    // Else if the user inputs 'F' or 'f' they wish to end the program
    else if (userInput == 'F' || userInput == 'f')
      return false;

  } while (userInput); // While the user has input anything besides 'B' or 'F' continue to prompt for decision
}

/**
 * @typedef function
 * @name number_of_tickets
 * @details This function prompts the user to input the number of tickets they wish to buy. The input value must not exceed the total number of tickets remaining
 *
 * @param ConcertPrompter concert1 - used to print how many remaining tickets the user can purchase
 * @param int& ticketsBuying - reference to address of ticketsBuying function, used to hold how many tickets the user has input
 * @return void
 */
void number_of_tickets(ConcertPromoter concert1, int &ticketsBuying)
{
  // Declare local variables
  bool validNumber = false; // Keeps track of whether or not the user has input a valid number of tickets

  // Continues to loop until user inputs a valid number of tickets
  while (!validNumber)
  {
    // Prompts the user to input the number of tickets they wish to buy and displays how many tickets are available
    cout << "How many tickets do you wish to buy? (max " << concert1.unsoldTickets << "): ";
    cin >> ticketsBuying;
    cout << endl;

    // If the user has input a number of tickets, that number of tickets are still available, and the number of tickets is greater than 0, exits the loop
    if (ticketsBuying <= concert1.unsoldTickets && ticketsBuying > 0)
      validNumber = true;

    // Else, if the number of tickets is not valid, the loop will continue with an error message.
    else
      cout << "ERROR! There are not enough tickets." << endl;
  }
}

/**
 * @typedef function
 * @name print_receipt
 * @details This function displays the cost of 1 ticket and the total cost of the tickets the user wishes to buy.
 *
 * @param ConcertPromoter concert1 - Used to print cost of 1 ticket and calculate the total cost
 * @param int ticketsBuying - Used to calculate the total cost
 * @return void
 */
void print_receipt(ConcertPromoter concert1, int ticketsBuying)
{
  // Displays two decimal places, denoting currency
  cout << fixed << showpoint << setprecision(2);

  // Prints the cost of 1 ticket
  cout << "The cost of the ticket is $" << concert1.ticketPrice << endl;

  // Prints the total cost depending on the number of tickets the user wishes to buy
  cout << "Your total cost is: $" << concert1.ticketPrice * ticketsBuying << endl;
}

/**
 * @typedef function
 * @name update_tickets
 * @details This function subtracts the number of tickets the user purchased from the remaining tickets in the struct concert1 and displays this number at the bottom of the receipt
 *
 * @param ConcertPromoter& concert1 - Reference to the address of struct variable concert1, used to update the total number of tickets remaining
 * @param int ticketsBuying - Used to subtract the number of tickets purchased by the user from the total remaining tickets
 * @return void
 */
void update_tickets(ConcertPromoter &concert1, int ticketsBuying)
{
  // Subtract the number of tickets the user purchased from the total remaining tickets
  concert1.unsoldTickets -= ticketsBuying;

  // Prints the number of tickets remaining
  cout << "Tickets remaining: " << concert1.unsoldTickets << endl;

  // Prints a border of * to end receipt
  cout << setw(45) << setfill('*') << "" << endl;
}