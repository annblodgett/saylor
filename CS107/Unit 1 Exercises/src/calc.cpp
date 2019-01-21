/*
 * calc.cpp
 *
 *  Created on: Jan 20, 2019
 *      Author: annblodgett
 */
#include <cmath>


float calc(float num1,char op,float num2){

	switch(op){
	case '+':
		return num1+num2;
		break;
	case '-':
		return num1-num2;
		break;
	case '*':
		return num1*num2;
		break;
	case '/':
		return num1/num2;
		break;
	case '^':
		return pow(num1,num2);
		break;

	default:
		return 0;
	}


}
