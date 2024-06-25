/**
 * @program: Vowels.cpp
 * @author: Nyki Anderson
 * @uin: 01179386
 * @lab: 28415
 * @date: March 26th, 2023
 *
 * @title: Vowel and Non-Vowel Count
 * @description: This function takes a file named "paragraph.txt" and counts the number of times each vowel appears in the text. It also keeps track of all non-vowels separately.
 */

// Include header files and namespaces
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

/**
 * @typedef struct
 * @name charCountType
 * @description: This struct datatype holds the character counts for each vowel and other as they appear in some c-string.
 *
 * @member: int aCount - holds the number of appearances of the a or A character
 * @member: int eCount - holds the number of appearances of the e or E character
 * @member: int iCount - holds the number of appearances of the i or I character
 * @member: int oCount - holds the number of appearances of the o or O character
 * @member: int uCount - holds the number of appearances of the u or U character
 * @member: int otherCount - holds the number of appearances of any other character
 */
struct charCountType
{
  int aCount;
  int eCount;
  int iCount;
  int oCount;
  int uCount;
  int otherCount;
};

// Declare function prototypes
void initCounts(charCountType &charCounts);
void readParagraph(ifstream &inData, char paragraphChars[], int &paragraphLength);
void countVowels(char paragraphChars[], charCountType &charCounts, int paragraphLength);
void printCharacterCounts(charCountType charCounts);

int main()
{
  // Declare variables
  char paragraphChars[1000]; // Allows a c-string of up to 1000 characters long
  charCountType charCounts;  // Keeps track of the counts for each vowel or other character
  int paragraphLength;       // Denotes the length of the c-string paragraphChars
  ifstream inData;           // fstream variable for reading in paragraph.txt

  // Initializes all the counts in charCounts struct variable to 0
  initCounts(charCounts);

  // Reads in paragraph.txt, stores each character of the string in a c-string array, and determines the length of the c-string
  readParagraph(inData, paragraphChars, paragraphLength);

  // Iterates through the c-string array paragraphChars and counts the number of appearances of each vowel or other character
  countVowels(paragraphChars, charCounts, paragraphLength);

  // Prints the counts for each vowel or other character
  printCharacterCounts(charCounts);

  return 0;
}

/**
 * @typedef function
 * @name initCounts
 * @description: This funciton initializes the counts for each vowel or other character type to 0
 *
 * @param charCountType& charCounts - reference to the struct variable charCounts, used to initialize each member to 0
 * @return void
 */
void initCounts(charCountType &charCounts)
{
  charCounts.aCount = 0;
  charCounts.eCount = 0;
  charCounts.iCount = 0;
  charCounts.oCount = 0;
  charCounts.uCount = 0;
  charCounts.otherCount = 0;
}

/**
 * @typedef function
 * @name readParagraph
 * @description: This function reads a string from paragraph.txt and stores it into a c-string array. It also determines and stores the length of the c-string array for later use when iterating through the c-string array.
 *
 * @param ifstream& inData - file input stream variable for reading from paragraph.txt
 * @param char paragraphChars[] - reference to first index of c-string array, used to hold the string read from paragraph.txt
 * @param int& paragraphLength - reference to the variable that will hold the length of the c-string array paragraphChars
 * @return void
 */
void readParagraph(ifstream &inData, char paragraphChars[], int &paragraphLength)
{
  // Opens paragraph.txt which contains a string of unknown length
  inData.open("paragraph.txt");

  // Reads in the first 1000 characters of the string in paragraph.txt
  inData.get(paragraphChars, 1001);

  // Determines the length of the c-string array paragraphChars
  paragraphLength = strlen(paragraphChars);

  // Closes paragraph.txt
  inData.close();
}

/**
 * @typedef function
 * @name countVowels
 * @description: This function counts the number of appearances of each vowel or other character in the c-string array paragraphChars
 *
 * @param char paragraphChars[] - reference to the c-string array that holds a string input from paragrpah.txt
 * @param charCountType& charCounts - reference to charCounts struct variable, used to count the number of appearances of each vowel or other character in the c-string array paragraphChars
 * @param int paragraphLength - value of the length for c-string array paragraphChars, used ot iterate through the c-string array paragraphChars
 * @return void
 */
void countVowels(char paragraphChars[], charCountType &charCounts, int paragraphLength)
{
  // Iterate through paragraphChars until the end is reached (paragraphLength)
  // Classify each character in paragraphChars as either a vowel or other character and add to the respective character count
  for (int i = 0; i < paragraphLength; i++)
  {
    if (paragraphChars[i] == 'a' || paragraphChars[i] == 'A')
      charCounts.aCount++;
    else if (paragraphChars[i] == 'e' || paragraphChars[i] == 'E')
      charCounts.eCount++;
    else if (paragraphChars[i] == 'i' || paragraphChars[i] == 'I')
      charCounts.iCount++;
    else if (paragraphChars[i] == 'o' || paragraphChars[i] == 'O')
      charCounts.oCount++;
    else if (paragraphChars[i] == 'u' || paragraphChars[i] == 'U')
      charCounts.uCount++;
    // If not a vowel, the character is added to otherCount member of charCounts
    else
      charCounts.otherCount++;
  }
}

/**
 * @typedef function
 * @name printCharacterCounts
 * @description: This function prints the counts for each vowel or other character in paragraph.txt string
 *
 * @param charCountType charCounts - struct variable containing all the counts for each vowel or other character in paragraph.txt, used to print each member of the charCounts variable
 * @return void
 */
void printCharacterCounts(charCountType charCounts)
{
  cout << "Number of each vowel in paragraph: " << endl;
  cout << "a and A: " << charCounts.aCount << endl;
  cout << "e and E: " << charCounts.eCount << endl;
  cout << "i and I: " << charCounts.iCount << endl;
  cout << "o and O: " << charCounts.oCount << endl;
  cout << "u and U: " << charCounts.uCount << endl;
  cout << "Other characters: " << charCounts.otherCount << endl;
}