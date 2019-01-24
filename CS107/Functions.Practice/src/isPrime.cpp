/*
 * isPrime.cpp
 *
 *  Created on: Jan 24, 2019
 *      Author: annblodgett - adapted from geeksforgeeks article.
 *      See the tutorial from https://www.geeksforgeeks.org/primality-test-set-1-introduction-and-school-method/
 */

#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int num) {

	// A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself.

	//if less than one num doesn't fit the definition of prime
	if (num <= 1)
		return false;

	// 2,3 are both prime
	if (num <= 3)
		return true;

	// check if num is divisible by 2 or 3
	if(num%2 ==0 || num%3 ==0)
		return false;

	/*For loop to check through all the numbers of the form (6k + i) where k is some integer and for i = -1,0,1,2,3 or 4.
	 We checked 2 and 3 above so now we just have to check 6k+1.
	Also only need to check up to square root of num,
	because a larger factor of num must be a multiple of a smaller factor that would already have been checked. */

	for (int i = 5; i*i < num; i+6)
		if (num%i ==0 || num%(i+2)==0)
			return false;

	return true;
}

