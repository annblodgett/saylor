//============================================================================
// Name        : Functions.Practice.cpp
// Author      : Ann Blodgett
// Version     :
// Link        :  http://www.w3resource.com/c-programming-exercises/function/index.php
// Description : Saylor.org CS107 Unit 1 Exercises Functions Practice
//============================================================================

#include <iostream>
#include <string>
#include "writeToConsole.h"
#include "squareNum.h"
#include "swapTwoNum.h"
#include "isEvenOdd.h"
#include "sumSeries.h"
#include "convertDectoBin.h"
#include "isPrime.h"
#include "getLargestElem.h"
#include "isArmstOrPerf.h"
#include "printNumRange.h"
#include "exit.h"

using namespace std;

int main() {
	cout
			<< "\nWelcome to Ann's to Functions Practice assignment for Saylor.org's CS107."
			<< endl;
	do {
		int exercise;

		cout
				<< "-------\nOptions\n-------\n [1] Write a number to the console \n [2] Find the square of any number\n [3] Swap two numbers\n [4] Check if a number is even or odd\n [5] Find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5\n [6] Convert a decimal number to a binary number\n [7] Check whether a number is prime or not\n [8] Get the largest element of an array\n [9] Check armstrong and perfect numbers\n [10] Print all perfect numbers in a given range\n "<< endl;
		cout
				<< "Please enter an integer between 1-10 to choose a sub-program to run: ";
		cin >> exercise;

		switch (exercise) {
		case 1:
			cout
					<< "Exercise 1: write a function to write a number to the console. "
					<< endl;
			cout << "Enter a number to print: ";
			int total;
			cin >> total;
			writeToConsole(total);
			break;

		case 2:
			cout
					<< "Exercise 2: write a function to find the square of any number."
					<< endl;
			cout << "Enter a number to square: ";
			double dblToSquare;
			cin >> dblToSquare;
			cout << "The square of " << dblToSquare << " is : "
					<< squareNum(dblToSquare) << "\n" << endl;
			break;

		case 3:
			cout << "Exercise 3: write a function to swap two numbers." << endl;
			cout << "Input 1st number:";
			double swap1, swap2;
			cin >> swap1;
			cout << "Input 2nd number:";
			cin >> swap2;
			cout << "Before swapping: n1= " << swap1 << ", n2= " << swap2
					<< endl;
			swapTwoNum(&swap1, &swap2);
			cout << "After swapping: n1= " << swap1 << ", n2= " << swap2
					<< "\n" << endl;
			break;

		case 4:
			cout
					<< "Exercise 4: write a function to print to the console a message saying if a given number is even or odd"
					<< endl;
			cout << "Enter an integer to check if it is even or odd: ";
			int num2Chk;
			cin >> num2Chk;
			isEvenOdd(num2Chk);
			cout << "/n";
			break;

		case 5:
			cout
					<< "Exercise 5: write a function to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 ."
					<< endl;
			cout << "The sum of the series is: " << sumSeries() << "\n" << endl;
			break;

		case 6:
			cout
					<< "Exercise 6: write a function to convert a decimal number to a binary number."
					<< endl;
			int decimalVal;
			cout << "Enter an integer value in base 10: ";
			cin >> decimalVal;
			cout << decimalVal << " in base 2 is written as "
					<< convertDectoBin(decimalVal) << endl;
			cout << endl;
			break;

		case 7:
			cout
					<< "Exercise 7: write a function to check whether a number is a prime number or not "
					<< endl;
					cout<< "Please enter an integer to check if it is prime :"<<endl;
					int chkPrime;
					cin >> chkPrime;
				if (isPrime(chkPrime)){
					cout << "The number "<<chkPrime<<" is prime."<<endl;
				}
				else{
					cout << "The number "<<chkPrime<<" is not prime."<<endl;
				}

			break;

		case 8:
			cout << "Exercise 8: write a function to get the largest element of an array of integers."<<endl;

					int maximum;
					maximum = getLargestElem();
					cout << "The largest element is "<< maximum << endl;
			break;

		case 9:
			cout
					<< "Exercise 9: write a function to check armstrong and perfect numbers . "
					<< endl;
			cout
			<<"Enter an integer number to test: ";
			int testNum;
			cin >> testNum;
			isArmstOrPerf(testNum);

			break;

		case 10:
			cout
					<< "Exercise 10: write a function to print all perfect numbers in a given range. "
					<< endl;
			cout << "Please enter the first number in the range: ";
					long start;
					long end;
					cin>> start;
					cout << "Please enter the last number in the range: ";
					cin >> end;

					printNumRange(start,end);

					break;

		default:
			cout <<"You entered invalid input"<< endl;

		}
	} while (exit() == false);

	cout << "You chose to exit. The program is ending. " << endl;

	return 0;
}
