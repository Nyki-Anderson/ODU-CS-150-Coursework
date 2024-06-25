/**
 * @program: Student_Struct.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 26th, 2023
 *
 * @title: Class Data and Highest Score
 * @description: This program reads in student data from data.txt and stores each student's data in a studentType struct variable, the class is held in an array of such struct variables. Each student's grade is found based on their score. Then the highest score is found, including the student(s) with that high score. Finally, all of this data is printed to the file classData.txt in a neatly formatted table.
 */

// Include header files and namespaces
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

/**
 * @typedef struct
 * @name nameType
 * @description: A struct data type that includes two members for the first and last name
 *
 * @member: string first - holds a first name
 * @member: string last - holds a last name
 */
struct nameType
{
  string first;
  string last;
};

/**
 * @typedef struct
 * @name studentType
 * @description: A struct data type for student data that includes three members: the student's name, their test score, and their grade
 *
 * @member: nameType studentName - holds a student's first and last name
 * @member: int testScore - holds a student's test score (between 0 and 100)
 * @member: char grade - holds a student's grade based on tehir testScore
 */
struct studentType
{
  nameType studentName;
  int testScore;
  char grade;
};

// Declare function prototypes
void readStudentData(ifstream &inData, studentType classData[]);
void assignGrade(studentType classData[]);
void findHighestScores(studentType classData[], nameType highScoreStudents[], int &highScore, int &length);
void printStudentData(ofstream &outData, studentType classData[]);
void printHighScores(ofstream &outData, nameType highScoreStudents[], int highScore, int length);

int main()
{
  // Declare variables
  studentType classData[20];      // Array of studentType variables for the entire class of 20
  nameType highScoreStudents[20]; // Array of nameType variables for the student's with the highest score (allows for up to 20 students)
  int highScore;                  // Highest score in the class
  int length;                     // Length of the highScoreStudents array
  ifstream inData;                // Variable for reading data.txt
  ofstream outData;               // Variable for outputting classData.txt

  // Read in the student data from data.txt and store in classData array
  readStudentData(inData, classData);

  // Uses the classData.testScore value to determine the student's grade and stores in classData.grade
  assignGrade(classData);

  // Finds the highest score in classData.testScore and all students with that score then stores in highScore and highScoreStudents respectively, also keeps track of the length of the highScoreStudents array
  findHighestScores(classData, highScoreStudents, highScore, length);

  // Print the students' data to classData.txt in a neatly formatted table
  printStudentData(outData, classData);

  // Prints the high score and all students with that score to classData.txt
  printHighScores(outData, highScoreStudents, highScore, length);
}

/**
 * @typedef function
 * @name readStudentData
 * @description: This function reads in student data from data.txt and stores each student's first name, last name, and test score in an array of studentType variables.
 *
 * @param ifstream& inData - reference to the inData variable for reading from a text file
 * @param studentType classData[] - reference to the classData array which holds student records in studentType variables
 * @return void
 */
void readStudentData(ifstream &inData, studentType classData[])
{
  // Open data.txt with student data
  inData.open("data.txt");

  // Iterate through all 20 students
  for (int i = 0; i < 20; i++)
  {
    // Store each student's first name, last name, and test score in classData array
    inData >> classData[i].studentName.first >> classData[i].studentName.last >> classData[i].testScore;

    // After each student's data, ignore the next 100 characters or until newline character
    inData.ignore(100, '\n');
  }

  // Close data.txt
  inData.close();
}

/**
 * @typedef function
 * @name assignGrade
 * @description: This function uses the test score value in classData array to classify each student's grade
 *
 * @param studentType classData[] - reference to classData array holding student data
 * @return void
 */
void assignGrade(studentType classData[])
{
  // Iterate through each of the 20 students and assigns a grade based on classData[].testScore, stores this grade in classData[].grade
  for (int i = 0; i < 20; i++)
  {
    if (classData[i].testScore >= 90)
      classData[i].grade = 'A';
    else if (classData[i].testScore >= 80)
      classData[i].grade = 'B';
    else if (classData[i].testScore >= 70)
      classData[i].grade = 'C';
    else if (classData[i].testScore >= 60)
      classData[i].grade = 'D';
    else
      classData[i].grade = 'F';
  }
}

/**
 * @typedef function
 * @name findHighestScore
 * @description: This function searches classData[].testScore for the highest value, stores this in highScore variable and then searches classData[].testScore for all students having said score. These names are then stored in highScoreStudents[] array.
 *
 * @param studentType classData[] - reference to classData array, used to search for high score and student's names with said high score
 * @param nameType highScoreStudents[] - reference to highScoreStudents array, used to store the names of student's with the highest score
 * @param int& highScore - reference to highScore variable, used to hold highest test score in class
 * @param int& length - reference to length variable, used to hold the number of students with the hgih score
 */
void findHighestScores(studentType classData[], nameType highScoreStudents[], int &highScore, int &length)
{
  // Declare local variables
  int maxScore = 0; // Temporarily holds the highest score in the class until entire class array has been searched, set to 0 to begin the search with lowest possible score
  int index = 0;    // Helps keep track of the number of student's with the high score

  // Iterate through entire class of 20 to search for the highest testScore
  for (int i = 0; i < 20; i++)
    // If the current student's test score is greater than or equal to the maxScore, tbis test score becomes the new maxScore
    if (classData[i].testScore >= maxScore)
      maxScore = classData[i].testScore;

  // Once the entire classData array has been searched for the highest test score, store this value in highScore variable
  highScore = maxScore;

  // Again, iterate through the entire class of 20, this time to search for the students with the found highScore
  for (int j = 0; j < 20; j++)
  {
    // If the current student's test score is equivalent to the high score of the class, add the student's first and last name to the highScoreStudents array and
    if (classData[j].testScore == highScore)
    {
      highScoreStudents[index].first = classData[j].studentName.first;
      highScoreStudents[index].last = classData[j].studentName.last;

      // Increment to keep track of the number of students in the highScoreStudents array
      index++;
    }
  }
  // Copy the value from index to length, this indicates the number of students in the highScoreStudents array
  length = index;
}

/**
 * @typedef function
 * @name printStudentData
 * @description: This function prints all student data from classData array in a neatly formatted table.
 *
 * @param ofstream& outData - the file output stream variable used to write to classData.txt
 * @param studentType classData[] - reference to the classData array holding all student's data as studentType varibles
 * @return void
 */
void printStudentData(ofstream &outData, studentType classData[])
{
  // Declare local variables
  string fullName; // Will hold a formatted string in form (studentLastName, studentFirstName), allows this string to use setw() manipulator

  // Opens output file classData.txt
  // Note: Will be closed in function printHighSocres()
  outData.open("classData.txt");

  // Output headers for student data table
  outData << left << setw(20) << "Student Name" << right << setw(12) << "Test Score" << right << setw(12) << "Grade" << endl;

  // Iterate through each of the 20 students whose data is held in classData array
  for (int i = 0; i < 20; i++)
  {
    // Set temporary variable for formatted name to print using setw() manipulator
    fullName = classData[i].studentName.last + ", " + classData[i].studentName.first;

    // Output fullname (last then first, separated by comma)
    outData << left << setw(20) << fullName;

    // Output test scores and grade in table
    outData << right << setw(12) << classData[i].testScore;
    outData << right << setw(12) << classData[i].grade << endl;
  }
}

/**
 * @typedef function
 * @name printHighScores
 * @description: This function outputs the highest test score and all students with that score into file classData.txt
 *
 * @param ofstream& outData - file output stream variable, used to output data to classData.txt
 * @param nameType highScoreStudents[] - reference to array holding the first and last names of the students with the highest score in the class
 * @param int highScore - the value for the highest test score in the class
 * @param int length - the value for the number of student's with the highest score
 * @return void
 */
void printHighScores(ofstream &outData, nameType highScoreStudents[], int highScore, int length)
{
  // Output the highest test score in the class
  outData << endl
          << "The highest test score is: " << highScore << endl;
  outData << "Student's with the highest test score: " << endl;

  // Iterate through the highScoreStudents array (length denotes the number of students in this array) and print the student's first and last name
  for (int i = 0; i < length; i++)
    outData << highScoreStudents[i].last << ", " << highScoreStudents[i].first << endl;

  // Close classData.txt file
  outData.close();
}