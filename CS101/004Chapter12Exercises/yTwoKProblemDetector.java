/* Description:
A program that asks a user for their birth year encoded as two digits (like "62") and for the current year, also encoded as two digits (like "99"). The program is to correctly write out the users age in years.

--------
Additional Information: 
Assume that the age will always be less than or equal to 100. 
Assume that ages are not negative.

--------
Take as Input:
Birth year and current year in 2 digit format

Returns:
Age in years
 
 --------
 Example:

Year of Birth: 62
Current year: 99
Your age: 37

--------
Tests:

A)
Year of Birth: 62
Current year: 00
Your age: 38

B)
Year of Birth: 27
Current year: 07
Your age: 80

C)
Year of Birth: 01
Current year: 07
Your age: 6

D) Year of Birth: 62
Current year: 99
Your age: 37
*/
import java.util.*;

class yTwoKProblemDetector
{
	public static void main (String [] args)
	{
		// initialize variables
		int birthYear;
		int currentYear;
		int age;
		Scanner scan = new Scanner(System.in);
		
		// get birth year and current year from user
		
		System.out.println("Year of Birth:");
		birthYear = scan.nextInt();
		
		System.out.println("Current year:");
		currentYear = scan.nextInt();
		
		//calculate age
		age = currentYear - birthYear;
		
		
		//if age is negative then adjust
		if (age < 0)
		{
			age = 100- (-age);
		}
		
		// return age to user
		System.out.println(" Your age: "+age);
		
	}
}

