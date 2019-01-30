//============================================================================
// Name        : PointerPractice.cpp
// Author      : Ann Blodgett
// Version     :
// Link        : http://www.w3resource.com/c-programming-exercises/pointer/index.php
// Description : Saylor CS107 2.2.2 Pointers
//============================================================================

#include <iostream>
#include "exit.h"
#include "addTwoNumbers.h"
using namespace std;

int main() {
	cout
			<< "Welcome to Ann Blodgett's Pointer Practice assignment for Saylor.org's CS107"
			<< endl;
	do {
		cout
				<< "==================================Options======================================"
				<< endl;
		cout << "[1] Show the basic declaration of pointer. " << endl;
		cout << "[2] Demonstrate how to handle the pointers in the program."
				<< endl;
		cout
				<< "[3] Demonstrate the use of &(address of) and *(value at address) operator."
				<< endl;
		cout << "[4] Add two numbers using pointers " << endl;
		cout << "[5] Add two numbers using call by reference" << endl;
		cout
				<< "Please enter an integer between 1 and 5 to choose a subroutine to run: ";
		int exercise;
		cin >> exercise;

		switch (exercise) {
		case 1: {
			cout << "\n[1] Show the basic declaration of pointer. " << endl;
			cout << "=============================================" << endl;
			int m = 10, n, o;
			int*z = &m;
			cout
					<< " \n For the following exercise: m=10, n and o are two integer variables, and *z is an integer.\n"
					<< endl;
			cout << "z stores the address of m = " << z << endl;
			cout << "*z stores the value of m = " << *z << endl;
			cout << "&m is the address of m = " << &m << endl;
			cout << "&n stores the address of n = " << &n << endl;
			cout << "&o stores the address of o = " << &o << endl;
			cout << "&z stores the address of z = " << &z << endl;

		}
			break;
		case 2: {
			cout << "\n[2] Demonstrate how to handle the pointers in a program."
					<< endl;
			cout
					<< "============================================================"
					<< endl;
			cout << "For the following exercise: ab = int pointer, int m= 29"
					<< endl;
			int m = 29;
			int *ab;
			cout << "Address of m : " << &m << endl;
			cout << "Value of m : " << m << endl;
			ab = &m;

			cout << "\nNow ab is assigned the address of m." << endl;
			cout << "Address of pointer ab : " << ab << endl;
			cout << "Content of pointer ab: " << *ab << endl;

			m = 34;
			cout << "\nThe value of m assigned 34 now." << endl;
			cout << "Address of pointer ab : " << ab << endl;
			cout << "Value of pointer ab : " << *ab << endl;

			*ab = 7;
			cout
					<< "\nThe pointer variable ab is assigned the value of 7 now, which changes the value of m."
					<< endl;
			cout << "Address of m: " << &m << endl;
			cout << "Value of m: " << m << endl;

		}
			break;

		case 3: {
			cout
					<< "\n[3] Demonstrate the use of &(address of) and *(value at address) operator."
					<< endl;
			cout
					<< "============================================================================"
					<< endl;
			cout
					<< " Demonstrate the use of & and * operator. For the following exercise \n m= 300\n fx = 300.600006\n cht = z"
					<< endl;
			int m = 300;
			double fx = 300.600006;
			char cht = 'z';
			int *pt1;
			double *pt2;
			char *pt3;
			pt1 = &m;
			pt2 = &fx;
			pt3 = &cht;
			cout << "\n Using & operator: " << endl;
			cout << " address of m = " << &m << endl;
			cout << " address of fx = " << &fx << endl;
			cout << " address of cht = " << &cht << endl;
			cout << "\n Using & and * operator: " << endl;
			cout << " value at address of m = " << *(&m) << endl;
			cout << " value at address of fx = " << *(&fx) << endl;
			cout << " value ataddress of cht = " << *(&cht) << endl;
			cout << "\n Using only pointer variable: " << endl;
			cout << " address of m = " << pt1 << endl;
			cout << " address of fx = " << pt2 << endl;
			cout << " address of cht = " << pt3 << endl;
			cout << "\n Using only pointer operator: " << endl;
			cout << " value at address of m = " << *pt1 << endl;
			cout << " value at address of fx = " << *pt2 << endl;
			cout << " value ataddress of cht = " << *pt3 << endl;
		}
			break;
		case 4: {
			cout << "\n[4] Add two numbers using pointers " << endl;
			cout << "=====================================" << endl;
			cout << "Input the first number: ";
			int first;
			cin >> first;
			cout << "Input the second number: ";
			int second;
			cin >> second;
			int *ptr1, *ptr2;
			int sum;
			ptr1 = &first;
			ptr2 = &second;
			sum = *ptr1 + *ptr2;
			cout << "The sum of the entered numbers is : " << sum << endl;

		}
			break;
		case 5: {
			cout << "\n[5] Add two numbers using call by reference" << endl;
			cout << "=============================================" << endl;
			cout << "Input the first number: ";
			int first;
			cin >> first;
			cout << "Input the second number: ";
			int second;
			cin >> second;
			int sum = addTwoNumbers(&first, &second);
			cout << "The sum of " << first << " and " << second << " is " << sum
					<< endl;
		}
			break;
		default:
			cout << "You entered invalid input" << endl;
			break;
		}
	} while (exit() == false);

	cout << "You chose to exit. The program is ending. " << endl;

	return 0;
}
