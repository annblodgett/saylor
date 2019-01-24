/*
 * printNumRange.cpp
 *
 *  Created on: Jan 24, 2019
 *      Author: annblodgett
 */

#include <iostream>
#include "isArmstOrPerf.h"
#include <vector>


using namespace std;


void printNumRange(long start, long end){

	vector<long> numList;


	for(int i = start; i<=end; i++){

		if(checkPerfect(i) == true){
			numList.push_back(i);
		}
	}

	cout<<"The perfect numbers between "<<start<<" and "<<end<<" are : ";
	int numOfElem = numList.size();

	for (int j = 0; j < numOfElem;j++)
		cout<< numList[j]<<", ";

	}


