/*
 * convertDectoBin.cpp
 *
 *  Created on: Jan 23, 2019
 *      Author: annblodgett
 */
#include <iostream>

using namespace std;

long convertDectoBin(int value) {
	long bin = 0, remainder, f = 1;

	while (value != 0) {

		remainder = value % 2;
		bin = bin + remainder * f;
		f = f * 10;
		value = value / 2;
	}
	return bin;

}

