/**
 * @program: Juice_Machine.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 2nd, 2023
 *
 * @title: Juice Dispenser
 * @description: This program mimics a juice machine. The juice menu is displayed, a customer chooses which juice the would like, they are prompted to deposit money into the machine, and once they have paid the full amount, the juice is dispensed.
 */

// Include all headers and namespaces
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef class
 * @name JuiceClass
 * @details This class holds the juice machine options and prices.
 */
class JuiceClass
{
public:
  // Members to hold name of juices
  string orange;
  string apple;
  string mango;
  string strawberryBanana;

  // Members to hold cost of juices
  int costOrange;
  int costApple;
  int costMango;
  int costStrawberryBanana;

  JuiceClass(); // Constructor
};

/**
 * @typedef class
 * @name SelectionClass
 * @details This class controls the customer's transaction details.
 */
class SelectionClass
{
public:
  void initialize_customer(const JuiceClass &juiceMachine, int selection);
  void set_remaining_cost(int deposit);
  int get_remaining_cost();

private:
  int remainingCost;
};

// Declare function prototypes
void print_menu(const JuiceClass &juiceMachine);
void customer_selection(int &selection);
void payment(SelectionClass &customer);
void dispense();

int main()
{
  // Declare all variables
  JuiceClass juiceMachine; // Holds informtion for juice machine
  SelectionClass customer; // Holds transaction details for customer
  int selection;           // Holds the customer's juice selection

  while (selection != 9)
  {
    // Prints all juices, their prices, and selection code
    print_menu(juiceMachine);

    // Prompts user to input a selection
    customer_selection(selection);

    // Based on customer's selection, sets the cost of the transaction
    customer.initialize_customer(juiceMachine, selection);

    // If the customer has not exited or pressed an invalid key, move to payment and dispense juice
    if (selection == 1 || selection == 2 || selection == 3 || selection == 4)
    {
      // Keeps track of customer's deposits and remaining balance
      payment(customer);
      dispense();
    }
  }
}

/**
 * @typedef class constructor
 * @name JuiceClass
 * @memberof Juice Class
 * @details Default constructor to fill juice machine menu
 */
JuiceClass::JuiceClass()
{
  // Set all juice names
  orange = "orange";
  apple = "apple";
  mango = "mango";
  strawberryBanana = "strawberry-banana";

  // Set all juice prices
  costOrange = 50;
  costApple = 65;
  costMango = 80;
  costStrawberryBanana = 85;
}

/**
 * @typedef class function
 * @name initalize_customer
 * @memberof Selection Class
 * @details This function corresponds the customer's selection to the juice price and stores in SelectionClass object
 *
 * @param const JuiceClass& juiceMachine - holds the menu for the juice machine, used to set cost of transaction
 * @param int selection - holds the customer's juice selection
 */
void SelectionClass::initialize_customer(const JuiceClass &juiceMachine, int selection)
{
  // Depending on user's selection, sets price
  switch (selection)
  {
  case 1:
    remainingCost = juiceMachine.costOrange;
    break;
  case 2:
    remainingCost = juiceMachine.costApple;
    break;
  case 3:
    remainingCost = juiceMachine.costMango;
    break;
  case 4:
    remainingCost = juiceMachine.costStrawberryBanana;
    break;
  // The exit code
  case 9:
    break;
  // Everything else is invalid
  default:
    cout << "Invalid selection." << endl;
    break;
  }
}

/**
 * @typedef class function
 * @name set_remaining_cost
 * @memberof SelectionClass
 * @details This function deducts the amount deposited by the customer from their remaing balance.
 *
 * @param int deposit - Holds amount deposited by customer
 * @return void
 */
void SelectionClass::set_remaining_cost(int deposit)
{
  remainingCost -= deposit;
}

/**
 * @typedef class function
 * @name get_remaining_cost
 * @memberof SelectionClass
 * @details This function returns the private member remainingCost.
 */
int SelectionClass::get_remaining_cost()
{
  return remainingCost;
}

/**
 * @typedef function
 * @name print_menu
 * @details This function prints a neatly formatted menu of juice names, their cost, and their selection codes.
 *
 * @param const Juiceclass& juiceMachine - holds information for juice machine menu
 * @return void
 */
void print_menu(const JuiceClass &juiceMachine)
{
  cout << "*** Welcome to Nyki's Juice Machine ***" << endl;
  cout << "To select an item, enter:" << endl;
  cout << "1 for " << juiceMachine.orange << " juice (" << juiceMachine.costOrange << " cents)" << endl;
  cout << "2 for " << juiceMachine.apple << " juice (" << juiceMachine.costApple << " cents)" << endl;
  cout << "3 for " << juiceMachine.mango << " juice (" << juiceMachine.costMango << " cents)" << endl;
  cout << "4 for " << juiceMachine.strawberryBanana << " juice (" << juiceMachine.costStrawberryBanana << " cents)" << endl;
  cout << "9 to exit." << endl;
}

/**
 * @typedef function
 * @name customer_selection
 * @details This function stores the customer's selecction in selection variable
 *
 * @param int& selection - holds customer juice selection code
 * @return void
 */
void customer_selection(int &selection)
{
  cin >> selection;
}

/**
 * @typedef function
 * @name payment
 * @details This function keeps track of how much the user has deposited, the remaining balance, and any change due.
 *
 * @param SelectionClass& customer - holds the remaining balance for the transaction
 * @return void
 */
void payment(SelectionClass &customer)
{
  // Declare local variables
  int deposit = 0; // Holds the amount deposited by customer

  // While there's still a remaining balance continue loop
  while (customer.get_remaining_cost() > 0)
  {
    // Prompts user to deposit cost of juice
    cout << "PLease deposit " << customer.get_remaining_cost() << " cents." << endl;
    cin >> deposit;
    customer.set_remaining_cost(deposit);

    // Checks if customer has deposited more money than the cost and displays change
    if (customer.get_remaining_cost() < 0)
      cout << "Your change is " << customer.get_remaining_cost() * -1 << endl;
  }
}

/**
 * @typedef function
 * @name dispense
 * @details This function shows dispense message once the full amount has been deposited.
 */
void dispense()
{
  cout << "Thank you. Please grab items from below." << endl
       << endl;
}