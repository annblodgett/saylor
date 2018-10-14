/* A program to convert cents into dollars and cents. 

Takes as input:  
	An integer number of cents. 
	
Returns:
	A number of whole dollars with the fractional remainder reported as cents.
	
 Example Output:
 >>Enter a whole number of cents:
324
That is  3 dollars and 24 cents

Test Cases:

A)  input: 324
returns: That is 3 dollars and 24 cents.

B)  input: 0
returns: That is 0 dollars and 0 cents.

C)  input: 500
returns: That is 5 dollars and 0 cents.

D)  input: 733
returns: That is 7 dollars and 33 cents.

E)  input: 123456789
returns: That is 1234567 dollars and 89 cents.

F) input -30 
returns: That is 0 dollars and -30 cents.
*/
import java.util.*;

class Dollars 
{
	public static void main( String[] args)
	{
		//initialize variables
		int cents;
		int dollars;
		Scanner scan = new Scanner(System.in);
		
		//ask user for number of cents
		System.out.println("Enter a whole number of cents:");
		cents = scan.nextInt();
		
		//convert cents to dollars and cents
		dollars = cents/100;
		cents = cents%100;
		
		//print result to console
		System.out.println("That is "+dollars+" dollars and "+cents+" cents.");
		
	}
}

