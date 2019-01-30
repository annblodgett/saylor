//============================================================================
// Name        : PointerPractice.cpp
// Author      : Ann Blodgett
// Version     :
// Link        : http://www.w3resource.com/c-programming-exercises/pointer/index.php
// Description : Saylor CS107 2.2.2 Pointers
//============================================================================

#include <iostream>
#include "exit.h"
using namespace std;

int main() {
	cout
			<< "Welcome to Ann Blodgett's Pointer Practice assignment for Saylor.org's CS107"
			<< endl;
	do {
		cout<< "==================================Options======================================"<<endl;
		cout <<"[1] Show the basic declaration of pointer. "<<endl;
		cout <<"[2] Demonstrate how to handle the pointers in the program."<<endl;
		cout<<"[3] Demonstrate the use of &(address of) and *(value at address) operator."<<endl;
		cout<<"[4] Add two numbers using pointers "<<endl;
		cout<<"[5] Add two numbers using call by reference"<<endl;
		cout<<"Please enter an integer between 1 and 5 to choose a subroutine to run: ";
		int exercise;
		cin>> exercise;

		switch(exercise){
			case 1:{
				cout <<"\n[1] Show the basic declaration of pointer. "<<endl;
				cout <<"============================================="<<endl;
				int m=10,n,o;
				int*z =&m;
				cout <<" \n For the following exercise: m=10, n and o are two integer variables, and *z is an integer.\n" <<endl;
				cout << "z stores the address of m = "<<z<<endl;
				cout <<"*z stores the value of m = "<<*z<<endl;
				cout <<"&m is the address of m = "<<&m<<endl;
				cout <<"&n stores the address of n = "<<&n<<endl;
				cout <<"&o stores the address of o = "<<&o<<endl;
				cout <<"&z stores the address of z = "<<&z<<endl;

				}
				break;
			case 2:{
				cout <<"\n[2] Demonstrate how to handle the pointers in a program."<<endl;
				cout <<"============================================================"<<endl;
				cout <<"For the following exercise: ab = int pointer, int m= 29"<<endl;
				int m = 29;
				int *ab;
				cout<< "Address of m : "<< &m<<endl;
				cout<<"Value of m : "<<m<<endl;
				ab = &m;

				cout<<"\nNow ab is assigned the address of m."<<endl;
				cout<<"Address of pointer ab : "<<ab<<endl;
				cout<<"Content of pointer ab: "<<*ab<<endl;

				m=34;
				cout<<"\nThe value of m assigned 34 now."<<endl;
				cout<< "Address of pointer ab : "<<ab<<endl;
				cout<< "Value of pointer ab : "<<*ab<<endl;

				*ab = 7;
				cout<<"\nThe pointer variable ab is assigned the value of 7 now, which changes the value of m."<<endl;
				cout<<"Address of m: "<<&m<<endl;
				cout<<"Value of m: "<<m<<endl;


			}break;

			case 3:{
				cout<<"\n[3] Demonstrate the use of &(address of) and *(value at address) operator."<<endl;
				cout<<"============================================================================"<<endl;
			}break;
			case 4:{
				cout<<"\n[4] Add two numbers using pointers "<<endl;
				cout<<"====================================="<<endl;
			}break;
			case 5:{
				cout<<"\n[5] Add two numbers using call by reference"<<endl;
				cout<<"============================================="<<endl;
			}break;
			default:
			cout <<"You entered invalid input"<< endl;
			break;
	}
}while(exit()== false);

cout << "You chose to exit. The program is ending. " << endl;

return 0;
}
