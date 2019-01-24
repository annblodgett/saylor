/*
 * isEvenOdd.cpp
 *
 *  Created on: Jan 23, 2019
 *      Author: annblodgett
 */

#include <iostream>
#include <string>
using namespace std;

void isEvenOdd(int number) {
	if (number % 2 == 0) {
		cout << "The number " << number << " is even.\n";
	} else {
		cout << "The number " << number << " is odd.\n";
	}
}

