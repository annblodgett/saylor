/*
 * HelperFunctions.cpp
 *
 *  Created on: Feb 3, 2019
 *      Author: annblodgett
 */
#include "HelperFunctions.h"
#include <algorithm>


void toUpperCase(string &str){

	std::transform(str.begin(), str.end(), str.begin(),:: toupper);

}

void reverseString(string &str){

	reverse(str.begin(), str.end());

}
