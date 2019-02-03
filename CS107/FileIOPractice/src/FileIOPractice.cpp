//============================================================================
// Name        : FileIOPractice.cpp
// Author      : Ann Blodgett
// Assignment  : saylor.org CS107 '4.2: Input/Output with Files'
// URL		   : http://gribblelab.org/CBootcamp/10_Input_and_Output.html
//============================================================================

#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include "HelperFunctions.h"

using namespace std;

int main() {

	//Exercise 1
	/*Write a program that asks the user to enter three strings.
	 After they have entered all three strings,
	 print the strings out using all uppercase letters.*/
	string first;
	string second;
	string third;
	cout << "Please enter the first string: ";
	getline(cin, first);

	cout << "Please enter the second string: ";
	getline(cin, second);

	cout << "Please enter the third string: ";
	getline(cin, third);

	toUpperCase(first);
	toUpperCase(second);
	toUpperCase(third);

	cout <<first <<"\n"<<second<<"\n"<<third<<endl;

	//Exercise 2
	/*
	 * Alter the program so that it prints out the all-caps strings in reverse.
	 */

	string fourth;
	string fifth;
	string sixth;
	cout << "Please enter the first string: ";
	getline(cin, fourth);

	cout << "Please enter the second string: ";
	getline(cin, fifth);

	cout << "Please enter the third string: ";
	getline(cin, sixth);

	reverseString(fourth);
	reverseString(fifth);
	reverseString(sixth);


	cout <<fourth <<"\n"<<fifth<<"\n"<<sixth<<endl;

	//Exercise 3
	/* Alter the program again so that it writes the all-caps
	 * reversed strings to a plaintext file.
	 */

	ofstream file;
	file.open("output.txt");
	file <<fourth <<"\n"<<fifth<<"\n"<<sixth<<endl;
	file.close();

	//Exercise 4
	/* Write a program that reads three strings from a plaintext file,
	 * reverses each string, and prints them out to the screen.
	 */
	string seventh;
	string eighth;
	string ninth;


	ifstream inputFile("input.txt");
	if(inputFile.is_open()){

		getline(inputFile,seventh);
		getline(inputFile,eighth);
		getline(inputFile,ninth);
	}
	else{
		cout <<"Unable to open file"<<endl;
	}
	inputFile.close();

	reverseString(seventh);
	reverseString(eighth);
	reverseString(ninth);

	cout <<"\n"<<seventh <<"\n"<<eighth<<"\n"<<ninth<<endl;


	return 0;
}

