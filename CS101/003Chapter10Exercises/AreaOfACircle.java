/* A program that calculates the area of a circle from its radius and prints the result to the console. 

Takes as Input:
	An integer number representing the length of a given circle's radius.
Returns:
	The area of a circle printed in a message to the console. 

Example Output:
Input the radius: 3
The radius is: 3 The area is: 28.274333882308138

Tests:

A) radius = 3
returns:  28.274333882308138

B) radius = 0
returns: "I'm sorry, you must enter a whole number that is greater than zero."
C) radius = 1
returns:  3.14

D) radius = 5
returns: 78.54

E) radius = .01
returns: Exception

F) radius = 100000
returns: 3.14e10
*/
import java.util.*;
import java.lang.Math;

class AreaOfACircle
{
	public static void main( String [] args)
	{
		//declare variables
		Scanner scan = new Scanner (System.in);
		
		int radius;
		double area;
		
		// Ask user to provide radius
		System.out.println ("Enter the radius, rounded to a whole number (integer): " );
		radius = scan.nextInt();
		
		//check input 
		if ( radius > 0) {
			
			//if input is ok calculate area
			area = Math.PI*radius*radius;
			
			//print result to the console
			System.out.println("A circle with a radius "+radius+ "has an area of "+area);
			
		}
		else{
			// otherwise tell the user to try again
			System.out.println ("I'm sorry, you must enter a whole number that is greater than zero.");
						
		System.out.println(" \n The program is ending");
		}
	}	
}