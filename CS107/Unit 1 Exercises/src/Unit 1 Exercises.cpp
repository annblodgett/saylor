//============================================================================
// Name        : Unit 1 Exercises.cpp
// Author      : Ann Blodgett
// Version     : 1
// Copyright   : NA
// Description : Saylor.org CS107 Unit 1 Programming Exercise
//============================================================================

#include <iostream>
#include "sum.h"
#include "voidSum.h"
#include "recurseFib.h"
#include "iterateFib.h"
#include "calc.h"

using namespace std;

int main(){
	int number1;
	int number2;
	int result;

	cout<< "Enter two integers separated by a space: ";
	cin >> number1 >> number2;

	cout << "CS107 Unit 1 Programming Exercises " << endl;

	// Write a program with a function that takes two int parameters, adds them together, then returns the sum.
	cout <<"Exercise 1 Sum: "<< sum(number1,number2) << endl;

	/*Same as exercise 1, but this time, the function that adds the numbers should be void,
	and takes a third, pass by reference parameter; then puts the sum in that. */
	voidSum(number1,number2,result);
	cout <<"Exercise 2 VoidSum: " <<result<< endl;

	/*Write a recursive function that finds the #n integer of the Fibonacci sequence.  */

	int nTerm;
	cout <<" Please enter an integer term of the Fibonacci sequence you wish to calculate:  ";
	cin >> nTerm;
	cout <<"Exercise 3 Recursive Fibonacci: " <<recurseFib(nTerm)<< endl;

	/*The same as exercise 3, although this time you mustn't use recursion.*/
	cout <<"Exercise 4 Iterative Fibonacci: "<<iterateFib(nTerm)<<endl;

	/* Create a calculator that takes a number, a basic math operator (+,-,*,/,^),
	 and a second number all from user input, and have it print the result of the mathematical
	operation. The mathematical operations should be wrapped inside of functions.*/

	cout<< "Exercise 5 calculator:"<<endl;
	float num1, num2;
	char op;
	cout<< "Enter the first number: ";
	cin>> num1;
	cout<<"\nEnter operator +,-,*,/,^  : ";
	cin>>op;
	cout<< "\nEnter the second number: ";
	cin>> num2;

	cout <<"The result of "<<num1<<" "<<op<<" "<<num2<<" is "<<calc(num1,op,num2)<<"."<<endl;


	return 0;
}
