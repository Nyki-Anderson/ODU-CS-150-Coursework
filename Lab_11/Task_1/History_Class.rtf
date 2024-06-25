/**
 * @program: History_Class.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: April 9, 2023
 *
 * @title: Grading a History Exam
 * @description: This program reads a file named input.txt that contains the correct answers for a histroy exam and the student IDs with their answers for the exam. It then calculates each student's score and letter grade. The results are printed with the following information: student ID, student's responses, their score, and their grade.
 */

// Include all header files and namespaces
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @typedef class
 * @name StudentClass
 * @details Defines a student and their exam results. All members are public.
 */
class StudentClass
{
public:
  string ID;
  char answers[20];
  int score;
  char grade;
};

// Declare all function prototypes
void read_file(ifstream &inData, StudentClass *classExam, char *examKey);
void print_header(char *examKey);
void grade_exams(StudentClass *classExam, char *examKey);
void assign_letter(StudentClass *classExam);
void print_results(StudentClass *classExam);

int main()
{
  // Declare variables
  StudentClass *classExam;         // Declare pointer of type StudentClass
  classExam = new StudentClass[4]; // Point to dynamic array index 0

  char *examKey;          // Declare pointer of type char
  examKey = new char[20]; // Point to dynamic array index 0

  ifstream inData; // Declare input stream variable

  // Reads in student data from file and stores student exam data in dynamic array classExam, also stores exam key in dynamic array examKey
  read_file(inData, classExam, examKey);

  // Print exam key and table headers for student exam data
  print_header(examKey);

  // Calculate each student's exam results as integer value out of 40
  grade_exams(classExam, examKey);

  // Assign letter grade based on score calculated in grade_exams()
  assign_letter(classExam);

  // Print student data for exam including ID, answers, score, and letter grade
  print_results(classExam);

  // Deallocate dynamic array memory
  delete[] classExam;
  delete[] examKey;

  return 0;
}

/**
 * @typedef function
 * @name read_file
 * @details This function reads data from input.txt. First it extracts the exam key from the first line and stores in examKey array. Then on each proceeding line, stores the students' IDs and answers to the exam in classExam array.
 *
 * @param ifstream& inData - input stream variable
 * @param StudentClass *classExam - pointer to first index of classExam array
 * @param char *examKey - pointer to first index of examKey array
 * @returns void
 */
void read_file(ifstream &inData, StudentClass *classExam, char *examKey)
{
  // Open file with student exam data
  inData.open("input.txt");

  // The first line in input.txt is the exam key, each key value is stored in component of a ctype array for later comparison to students' answers
  for (int k = 0; k < 20; k++)
    inData.get(examKey[k]);

  // Skip to second line
  inData.ignore(100, '\n');

  // Iterate through all four students
  for (int i = 0; i < 4; i++)
  {
    // Store the first string into ID member StudentClass
    inData >> classExam[i].ID;

    // Skip the space following the student ID
    inData.ignore(1, '\n');

    // Iterate through all twenty answers from each student
    for (int j = 0; j < 20; j++)
      // Store each answer character in dynamic ctype array for later comparison to exam key
      inData.get(classExam[i].answers[j]);

    // Skip to next line
    inData.ignore(100, '\n');
  }

  // Close input.txt
  inData.close();
}

/**
 * @typedef function
 * @name print_header
 * @details This function first prints the exam key and then prints neatly formatted table headers for student exam data.
 *
 * @param char *examKey - Pointer to first index of dynamic array
 * @return void
 */
void print_header(char *examKey)
{
  // Prints information message
  cout << "Processing Data..." << endl;

  // First print each character of examKey ctype array
  cout << examKey;

  // Make some space between exam key and table headers
  cout << endl
       << endl;

  // Prints neatly formatted table headers for student exam data
  cout << setw(15) << left << "Student Name" << setw(25) << left << "Student Answers" << setw(10) << left << "Score" << setw(10) << left << "Grade" << endl;
}

/**
 * @typedef function
 * @name grade_exams
 * @details This function compares each student answer with the exam key and assigns points as follows: 2pts for a correct answer, 0pts for no answer, and -1pts for incorrect answers. The total score is then stored in StudentClass object array
 *
 * @param StudentClass *classExam - Pointer to first index of dynamic array
 * @param char *examKey - Pointer to first index of dynamic array
 * @returns void
 */
void grade_exams(StudentClass *classExam, char *examKey)
{
  // Declare local variables
  int score; // Keeps track of total score for student

  // Iterate through all four students
  for (int j = 0; j < 4; j++)
  {
    // Reinitialize score to 0 every student
    score = 0;

    // Iterate through all 20 exam questions and compare the students' answers with the exam key
    for (int i = 0; i < 20; i++)
    {
      // If correct answer add 2pts
      if ((classExam[j].answers[i]) == examKey[i])
        score += 2;

      // If no answer, do nothing
      else if ((classExam[j].answers[i]) == ' ')
        score = score;

      // If incorrect answer, subtract 1pt
      else
        score--;
    }

    // Total score for each student stored in StudentClass object array
    classExam[j].score = score;
  }
}

/**
 * @typedef function
 * @name assign_letter
 * @details This function uses the score calculated in grade_exams function to determine a letter grade. The letter grade is then stored in the StudenClass object array.
 *
 * @param StudentClass *classExam - Pointer to first index of StudentClass object array
 * @returns void
 */
void assign_letter(StudentClass *classExam)
{
  // Declare local variables
  double percent; // Will hold students' scores as percentage for comparison in letter grade brackets

  // Iterate through each student
  for (int i = 0; i < 4; i++)
  {
    // Reinitialize percentage to 0.0 for each student
    percent = 0.0;

    // Calculate percentage grade based off score out of 40 possible points
    percent = (classExam[i].score / 40.0) * 100;

    // Compare percent grade to each letter grade bracket and store corresponding grade in StudentClass object array
    if (percent >= 90.0)
      classExam[i].grade = 'A';
    else if (percent >= 80.0)
      classExam[i].grade = 'B';
    else if (percent >= 70.0)
      classExam[i].grade = 'C';
    else if (percent >= 60.0)
      classExam[i].grade = 'D';
    else
      classExam[i].grade = 'F';
  }
}

/**
 * @typedef function
 * @name print_results
 * @details This function prints the students' exam results in neatly formatted table.
 *
 * @param StudentClass *classExam - Pointer to first index of dynamic array
 * @returns void
 */
void print_results(StudentClass *classExam)
{
  // Declare local variables
  string answersString; // Used to convert ctype array to simple string in order to print in one column of table

  // Iterate through each student
  for (int i = 0; i < 4; i++)
  {
    // Reinitialize students' answers for each student
    answersString = "";

    // Iterate through each answer
    for (int j = 0; j < 20; j++)
    {
      // Each answer is stored in string for easier printing
      answersString += classExam[i].answers[j];
    }

    // Each students' exam data is printed in neatly formatted table
    cout << setw(15) << left << classExam[i].ID << setw(25) << left << answersString << setw(10) << left << classExam[i].score << setw(10) << left << classExam[i].grade << endl;
  }
}
