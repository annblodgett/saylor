/*
 * sumSeries.cpp
 *
 *  Created on: Jan 23, 2019
 *      Author: annblodgett
 */
#include <iostream>

using namespace std;

int factorial(int n) {

	if (n == 1 || n == 0) {

		return n;
	} else {

		return factorial(n - 1) * n;
	}

}

int sumSeries() {

	int sum;

	for (int i = 1; i <= 5; i++) {
		sum = sum + (factorial(i) / i);
	}

	return sum;
}
