/*
 * exit.cpp
 *
 *  Created on: Jan 23, 2019
 *      Author: annblodgett
 */
#include <iostream>
using namespace std;

bool exit() {

	cout << "Would you like to exit now?(y/n): " << endl;
	char input;
	cin >> input;
	if (input == 'n') {
		return true;
	} else if (input == 'y') {
		return false;
	} else {
		return true;
	}
}

