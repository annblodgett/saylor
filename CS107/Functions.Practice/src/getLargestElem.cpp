/*
 * getLargestElem.cpp
 *
 *  Created on: Jan 24, 2019
 *      Author: annblodgett
 *      See https://www.w3resource.com/c-programming-exercises/function/c-function-exercise-8.php
 */
#include <iostream>

using namespace std;


int getLargestElem(){
int num_of_elem;
int max;

cout <<"Please enter the number of elements to be stored in the array: ";
cin >> num_of_elem;
int array[num_of_elem];
max = array[0];

cout <<"Input "<< num_of_elem <<" elements into the array: ";
//loop to input elements into the array.
for(int i=0; i< num_of_elem; i++){
	int elem;
	cout << " enter element - "<<i<<": ";
	cin>>elem;
	array[i]=elem;
}

// loop to check max element
for (int j=1; j<num_of_elem; j++){
	if(max < array[j]){
		max = array [j];
	}

}

return max;

}
