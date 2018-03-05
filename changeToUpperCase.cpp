/*
This program prompts the user to enter the number of characters in a string and
the string then stores the string in a dynamic array of type char, then change all characters in the array to upper case and displays
the new string.
*/

// Header files section
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// function prototypes
void readString(char*, int);
void changeToUpperCase(char*, int);
void displayString(char*, int);

//start main function
int main()
{
	//variables declaration
	int arraySize;

	//dynamic array declaration
	char* characterArray;

	//prompt the user to enter the size of dynamic array;
	cout << "Enter the size of dynamic array: ";
	cin >> arraySize;

	//allocate the continuous memory location
	characterArray = new char[arraySize];

	//call to readString funciton
	readString(characterArray, arraySize);

	//call to changeToUpperCase function
	changeToUpperCase(characterArray, arraySize);

	//call to displayString function
	displayString(characterArray, arraySize);

	//delete the dynamic array
	delete[] characterArray;

	return 0;
}

//read reastring
void readString(char* characterArray, int arraySize)
{
	//promt the user to enter a string
	cout << "Enter a string of " << arraySize
		 << " characters to be changed: ";

	//read and store the string into a character array
	for (int i=0; i<arraySize; i++)
		cin >> characterArray[i];
}// end of readString function

//changetouppercase function definition
void changeToUpperCase(char* characterArray, int arraySize)
{
	for(int i = 0; i < arraySize; i++)
		characterArray[i] = toupper(characterArray[i]);
}

//displayString function definition

void displayString(char* characterArray, int arraySize)
{
	cout << "\nThe string in upper case letters: ";
	for (int i =0; i< arraySize; i++)
		cout << characterArray[i];
	cout << endl;
}// end of displayString
