/*
 * iterateFib.cpp
 *
 *  Created on: Jan 20, 2019
 *      Author: annblodgett
 */



int iterateFib(int nTerm){

	int previous1, previous2;

	previous1 = 0;
	previous2 = 1;

	if(nTerm <2){
		return nTerm;
	}

	for (int i =0; i<=nTerm-2; i++){
		int temp = previous1+previous2;

		previous1 = previous2;
		previous2 = temp;
	}
	return previous2;
}
