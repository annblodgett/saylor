/*
 * recurseFib.cpp
 *
 *  Created on: Jan 20, 2019
 *      Author: annblodgett
 */

int recurseFib(int nTerm){
	if(nTerm < 2){
		return nTerm;
	}

	return recurseFib(nTerm-1)+recurseFib(nTerm-2);
}


