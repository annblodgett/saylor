/*
 * isArmstOrPerf.cpp
 *
 *  Created on: Jan 24, 2019
 *      Author: annblodgett
 *   See https://www.w3resource.com/c-programming-exercises/function/c-function-exercise-9.php
 */
#include <iostream>
using namespace std;
/* A perfect number is a positive integer that is equal to the sum of its proper positive divisors,
 * that is, the sum of its positive divisors excluding the number itself
 * (also known as its aliquot sum). - from Wikipedia*/

/*An armstrong number is a number that is the sum of its own digits each raised to the
 * power of the number of digits. ( Also knows as a narcissistic number) -from Wikipedia*/

bool checkArmstrong(int num){
    int last_digit, sum, number, number_of_digits;

    //need to know the number of digits. Used https://www.codevscolor.com/c-find-total-digits-number/
    number_of_digits = 0;
    number = num;
    while(number !=0){
        number = number/10;

        number_of_digits ++;
    }

    //Start sum at zero and make a copy of the input number to play with.
    sum = 0;
    number = num;

    // Loop will end when there are no more digits in our number.
    while(number !=0){


    	/* sum = sum + last_digit times itself as many times as there are digits in the number.
    	For example for number = 153 the last digit for the first loop should be 3 and I need sum to = 0+ 3*3*3.
    	Second pass through the loop the last digit will be 5 and the new value for sum will be 27+ 5*5*5.
    	Last pass through the loop the last digit will be 1 and the new value for sum will be 152 + 1*1*1 ;*/

      int multiplyer = 1;

        if (number_of_digits >1)
        	last_digit = number%10;
        else
        	last_digit = number;

        for(int i =0; i<number_of_digits;i++){

        multiplyer = multiplyer*last_digit;

        }
        sum = sum +multiplyer;

        //This will enable us to loop by number of digits in the number.
        number = number/10;
    }

    if(num == sum){
        return true;
    }
    else{
        return false;
    }

}

bool checkPerfect(int num){

	int sum, number;

	sum = 0;
	number = num;

	for (int i=1; i<num;i++){
		if(num%i == 0){
			sum = sum + i;
		}
	}

	if(num == sum){
		return true;
	}
	else{
		return false;
	}
}

void isArmstOrPerf(int num){

	if(checkArmstrong(num)){
		cout<< "The number "<<num <<" is an Armstrong number."<<endl;
	}
	else{
		cout<< "The number "<<num <<" is not an Armstrong number."<<endl;
	}

	if(checkPerfect(num)){
		cout<< "The number "<<num <<" is a  Perfect number."<<endl;
	}
	else{
		cout<< "The number "<<num <<" is not a Perfect number."<<endl;
	}

}


