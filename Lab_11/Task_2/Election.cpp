/**
 * @program: Election.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 9, 2023
 *
 * @title: Election Results
 * @description: This program allows a user to input the last name of candidate and the number of votes they received then it outputs the following information: the candidate's last name, the number of votes received, and the percentage of total votes they received.
 */

// Include all header files and namespaces
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef class
 * @name CandidateClass
 * @details This class describes a candidate in an election. All of its members are public.
 */
class CandidateClass
{
public:
  string lastName;
  int numVotes;
  double percentageVotes;
};

// Declare all function prototypes
void input_candidate(CandidateClass *election, double &sum);
void print_header();
void calculate_percentages(CandidateClass *election, double &sum);
void print_results(CandidateClass *election);

int main()
{
  // Declare variables
  CandidateClass *election;         // Pointer of type CandidateClass
  election = new CandidateClass[5]; // Dynamic array with election pointing at first component
  double sum = 0.0;                 // Sum of all votes

  // Prompts user to input names of candidates and number of votes they received, stores the information in an array, and keeps track of the sum of the votes for later use
  input_candidate(election, sum);

  // Prints table headers
  print_header();

  // Calculates the percentage of votes received by each candidate and stores in CandidateClass object
  calculate_percentages(election, sum);

  // Prints candidate name, number of votes they received, and their percentage of total votes.
  print_results(election);

  // Deallocates CandidateClass dynamic array
  delete[] election;
  return 0;
}

/**
 * @typedef function
 * @name input_candidate
 * @details This function prompts the user to input five candidates and the  number of votes they received. It then stores this information in a dynamic array of type CandidateClass
 *
 * @param CandidateClass* election - Pointer to dynamic array of CandidateClass type
 * @param double& sum - reference to sum variable
 * @returns void
 */
void input_candidate(CandidateClass *election, double &sum)
{
  // Prompts user to input the names and number of votes for five candidates
  cout << "Please enter the name of the candidate and the number of votes they received (Example: Anderson 15): " << endl;

  // Iterates through all five candidate inputs
  for (int i = 0; i < 5; i++)
  {
    // Stores last name and number of votes for each of the five candidates, then stores a dummy value of 0.0 into percentage of votes as a space holder for calculate_percentage function
    cin >> election->lastName >> election->numVotes;
    election->percentageVotes = 0.0;

    // Keeps track of total number of votes
    sum += election->numVotes;

    // Increment election pointer 1
    election++;
  }
}

/**
 * @typedef function
 * @name print_header
 * @details This function prints neatly formatted table headers for candidate information
 */
void print_header()
{
  // Prints header titles
  cout << endl
       << setw(15) << left << "Candidate" << setw(17) << left << "Votes Received" << setw(20) << left << "% of Total Votes" << endl;
}

/**
 * @typedef function
 * @name calculate_percentage
 * @details This function calculates the percentage of votes each candidate received and stores in dynamic array pointed at by election.
 *
 * @param CandidateClass *election - Pointer to dynamic array of CandidateClass objects
 * @param double &sum - Reference to address of sum variable
 * @returns void
 */
void calculate_percentages(CandidateClass *election, double &sum)
{
  // Iterate through each of the five candidates
  for (int i = 0; i < 5; i++)
  {
    // Calculates percentage of total votes each candidate got and stores in dynamic array
    election[i].percentageVotes = election[i].numVotes / sum;
  }
}
/**
 * @typedef function
 * @name print_results
 * @details This function prints each candidates name, the number of votes they received, and their percentage of the total votes in a neatly formatted table.
 *
 * @param CandidateClass *election - Pointer to dynamic array of CandidateClass objects
 * @returns void
 */
void print_results(CandidateClass *election)
{
  // Iterate through all five candidates
  for (int i = 0; i < 5; i++)
  {
    // Sets precision to 2 decimals for percentage of votes variable
    cout << fixed << showpoint << setprecision(2);

    // Prints candidates name, static cast version of number of votes (so no decimals), and their percentage of total votes
    cout << setw(15) << left << election[i].lastName << "     " << setw(17) << left << static_cast<int>(election[i].numVotes) << "   " << setw(20) << left << election[i].percentageVotes * 100 << endl;
  }
}
