//============================================================================
// Name        : StringPractice.cpp
// Author      : Ann Blodgett
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Exercises 1-5 from https://www.w3resource.com/c-programming-exercises/string/index.php
//============================================================================

#include <iostream>
#include <string>
#include "exit.h"
#include "printString.h"
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	cout << "Welcome to Ann Blodgett's String Practice for saylor.org's CS107"
			<< endl;
	do {
		cout << "--------------------Options----------------------------"
				<< endl;
		cout
				<< " [1] Input a string and print it.\n [2] find the length of a string\n [3] separate the individual characters from a string\n [4] print individual characters of string in reverse order\n [5] Count the total number of words in a string.\n"
				<< endl;
		cout
				<< "Please enter a number between 1 and 5 to choose a sub-program to run: ";
		int exercise;
		cin >> exercise;

		switch (exercise) {

		case 1: {
			cout << "[1]Input a string and print it." << endl;
			string stringToPrint;
			cout << "Please enter a string: ";
			cin.ignore(256, '\n');
			getline(cin, stringToPrint);
			printString(stringToPrint);
		}
			break;

		case 2: {
			cout << "[2] find the length of a string" << endl;
			cout << "Please enter a string: ";
			string stringToPrint2;
			cin.ignore(256, '\n');
			getline(cin, stringToPrint2);
			cout <<" The length of the string "<< stringToPrint2 <<" is "<< stringToPrint2.size()<<" bytes."<<endl;

		}
			break;

		case 3: {
			cout << "[3]separate the individual characters from a string."
					<< endl;
			cout << "Please enter a string: ";
			string stringToPrint3;
			cin.ignore(256, '\n');
			getline(cin, stringToPrint3);

			for(unsigned int i=0; i< stringToPrint3.size();i++){
				cout << stringToPrint3[i]<<" ";
			}
			cout << endl;
		}
			break;
		case 4: {
			cout << "[4] print individual characters of string in reverse order"
					<< endl;
			cout << "Please enter a string: ";
			string stringToPrint4;
			cin.ignore(256, '\n');
			getline(cin, stringToPrint4);
			string copy(stringToPrint4.rbegin(),stringToPrint4.rend());
			cout << copy << " is "<< stringToPrint4 << ", backwards!"<<endl;
		}
			break;
		case 5: {
			//from http://www.cppforschool.com/assignment/string-sol/word-count-string.html

			cout << "[5] Count the total number of words in a string." << endl;
			cout << "Please enter a string: ";
			string stringToPrint5;
			cin.ignore(256, '\n');
			getline(cin, stringToPrint5);
			int count =1;
			for(int i =0; stringToPrint5[i]!= '\0';i++){
				if (isspace(stringToPrint5[i])){
					count++;
				}
			}
			cout<<"There are "<<count<<" words in the string."<<endl;
		}
			break;
		default: {
			cout << "You entered invalid input." << endl;
		}
			break;
		}
	} while (exit());

	cout << "You have chosen to exit. The program is now ending.";
	return 0;
}
