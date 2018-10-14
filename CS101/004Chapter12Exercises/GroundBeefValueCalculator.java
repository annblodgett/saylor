/* Description:
A program that asks the user for:

    The price per pound of package "A"
    The percent lean in package "A"
    The price per pound of package "B"
    The percent lean in package "B"

The program then calculates the cost per pound of lean (non-fat) beef for each package and writes out which is the best value. 

---------------
Additional Information:
Assume that the two packages will not come out equal in value. 

---------------
Takes as Input:
	The price and percent lean of packages A and B
Returns:
	The cost per pound of lean beef for each package and which package is the best value.

---------------
Example:

Price per pound package A:
2.89
Percent lean package A:
85
Price per pound package B:
3.49
Percent lean package B:
93

Package A cost per pound of lean:3.4
Package B cost per pound of lean:3.752688
Package A is the best value


------------
Tests:

A)
Price per pound package A:
2.89
Percent lean package A:
85
Price per pound package B:
3.49
Percent lean package B:
93

Package A cost per pound of lean:3.4
Package B cost per pound of lean:3.752688
Package A is the best value


B)
Price per pound package A:
2.50
Percent lean package A:
100
Price per pound package B:
1.00
Percent lean package B:
1

Package A cost per pound of lean: 2.50
Package B cost per pound of lean: 100
Package A is the best value

C)
Price per pound package A:
10.00
Percent lean package A:
85
Price per pound package B:
3.49
Percent lean package B:
70

Package A cost per pound of lean:11.76
Package B cost per pound of lean:4.99
Package B is the best value

D)
Price per pound package A:
1.23
Percent lean package A:
85.2
Price per pound package B:
4.56
Percent lean package B:
75.7

Package A cost per pound of lean:1.4436
Package B cost per pound of lean:6.0237
Package A is the best value

*/
import java.util.*;

class GroundBeefValueCalculator
{
	public static void main (String [] args)
	{
		//initialize variables
		double aPricePerPound;
		double bPricePerPound;
		double aPercentLean;
		double bPercentLean;
		double aLeanPrice;
		double bLeanPrice;
		Scanner scan = new Scanner(System.in);
		
		//get values from user
		System.out.println("Price per pound package A:"); // get price per pound A 
		aPricePerPound = scan.nextDouble();
		
		System.out.println("Percent lean package A:"); // get lean percent A
		aPercentLean = scan.nextDouble();
		
		System.out.println("Price per pound package B:"); // get price per pound B
		bPricePerPound = scan.nextDouble();
		
		System.out.println("Percent lean package B:"); // get lean percent B
		bPercentLean = scan.nextDouble();
		
		//calculate cost per pound of lean for each package and then print to console
		
		aLeanPrice =  aPricePerPound/(aPercentLean/100); // calculate lean price A
		System.out.println("Package A cost per pound of lean:"+aLeanPrice);
		
		bLeanPrice = bLeanPrice =  bPricePerPound/(bPercentLean/100); //calculate lean price B
		System.out.println("Package B cost per pound of lean:"+bLeanPrice);
		
		//compare the lean prices and print a message reccommendng the package with the lowest cost per pound of lean meat
		
		if(aLeanPrice < bLeanPrice)
		{
			// message to print if the cost per pound lean of A is lower
			System.out.println("Package A is the best value");
		}
		else 
		{
			// message to print if the cost per pound lean of B is lower
			System.out.println("Package B is the best value");
		}				
		
	}
}