/* A program that reads how much change is due (in cents) and writes out that amount as dollars, quarters, dimes, nickels, and pennies. 

Uses integers for all variables and all arithmetic.

Takes as input: 
	An integer number of cents.
Returns:
	That amount as dollars, quarters, dimes, nickels and pennies.

Example Output:

Enter the cents:
>> 163
Your change is : 1 dollar, 2 quarters, 1 dime, and 3 pennies.

Test Cases:

A) Enter the cents:
>> 163
Your change is : 1 dollars, 2 quarters, 1 dimes, 0 nickels, and 3 pennies.

B) Enter the cents:
>> 500
Your change is : 5 dollars, 0 quarters, 0 dimes, 0 nickels, and 0 pennies.

C) Enter the cents:
>> 123456
Your change is : 1234 dollars 2 quarters, 0 dimes, 1 nickels and 1 pennies.

*/

import java.util.*;

class CorrectChange 
{
	public static void main( String[] args)
	{
		//initialize variables
		int cents;
		int dollars;
		int quarters;
		int dimes;
		int nickels;
		int pennies;
		Scanner scan = new Scanner(System.in);
		
		//ask user for number of cents
		System.out.println("Enter a whole number of cents:");
		cents = scan.nextInt();
		
		//calculate number of dollars
		dollars = cents/100;
		cents = cents%100;
		
		//calculate number of quarters
		quarters = cents/25;
		cents = cents%25;
		
		//calculate number of dimes
		dimes = cents/10;
		cents = cents%10;
		
		
		//calculate number of nickels - the number of pennies is leftover from this
		nickels = cents/5;
		pennies = cents%5;
		
		//print result to console
		System.out.println("Your change is : "+dollars+" dollars, "+quarters+" quarters, "+dimes+" dimes, "+nickels+" nickels, and "+pennies+" pennies.");
		
	}
}
