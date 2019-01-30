/*
 * exit.cpp
 *
 *  Created on: Jan 23, 2019
 *      Author: annblodgett
 */
#include <iostream>
using namespace std;

bool exit() {

	cout << "\n Would you like to exit now?(y/n): " << endl;
	char input;
	cin >> input;
	if (input == 'n') {
		return false;
	} else if (input == 'y') {
		return true;
	} else {
		return false;
	}
}

