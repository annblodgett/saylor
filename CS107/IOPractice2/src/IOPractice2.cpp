//============================================================================
// Name        : IOPractice2.cpp
// Author      : Ann Blodgett
// Version     :
// Copyright   : Your copyright notice
// Description : CS107 Saylor Basic Input/Output Exercises for Section 1.3.3
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	/*1.  A program that converts Centigrade to Fahrenheit.
	Expected output:
	Input a temperature (in Centigrade): 45
	113.000000 degrees Fahrenheit.  */

	cout<<"A program that converts Centigrade to Fahrenheit"<<endl;
	cout<<"Input a temperature(in Centigrade): ";
	double C,F;
	 //C stores the value input in Centigrade and F stores Fahrenheit.
	cin >>C;
	F = (9.0*C+(32.0*5.0))/5.0;

	cout<< F<<" degrees Fahrenheit.\n"<<endl;

	/*2.  A program that calculates the volume of a sphere. */

	cout<<"A program that calculates the volume of a sphere."<<endl;
	cout<<"Input the radius of the sphere : ";

	double radius, volume;
	cin >>radius;
	volume = 4.0/3.0*3.14159*(pow(radius,3.0));

	cout<<"The volume of sphere is "<<volume<<"\n"<<endl;

	/* 3. A program that  prints the perimeter
	 of a rectangle to take its height and width as input.*/
	double height, width, perimeter;

	cout<<"A program that  prints the perimeter of a rectangle ."<<endl;
	cout<<"Input the height of the Rectangle : ";
	cin >>height;
	cout<<"Input the width of the Rectangle : ";
	cin>> width;

	perimeter = 2.0*height+2.0*width;

	cout<<"Perimeter of the Rectangle is :"<<perimeter<<"\n"<<endl;

	/* 4. A program that converts kilometers per hour to miles per hour.*/


		double kph, mph;
		/* The variables kph and mph store the values for
		 *  kilometers per hour and miles per hour, respectively*/

		cout<<"A program that converts kilometers per hour to miles per hour."<<endl;
		cout<<"Input kilometers per hour : ";
		cin >>kph;

		mph = kph*0.6214712;
		cout<<mph<<" miles per hour.\n"<<endl;

	/* 5. A program that takes hours and minutes as input,
	 and calculates the total number of minutes*/

		int hours, minutesIn, minutesTotal;

		cout<<"A program that   takes hours and minutes as input, and calculates the total number of minutes."<<endl;
			cout<<"Input hours : ";
			cin >>hours;
			cout<<"Input minutes : ";
			cin>> minutesIn;

			minutesTotal = minutesIn+hours*60;

			cout<<"Total :"<<minutesTotal<<" minutes\n"<<endl;


	/*6. A program that takes minutes as input,
	 * and displays the total number of hours and minutes.*/

	/*7. A program that reads a forename, surname
	 * and year of birth and display the names and the year
	 * one after another sequentially. */

	/*8. A program that calculates the sum of three numbers
	 * with getting input in one line separated by a comma*/

	/*9. A program to perform addition,
	 * subtraction, multiplication and  division of two numbers*/

	/*10. A program to  find the third angle of a triangle if two angles are given. */


	return 0;
}
