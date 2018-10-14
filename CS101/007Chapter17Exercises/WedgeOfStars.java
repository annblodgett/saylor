/* Description: a program that writes a wedge of stars


-----------
Takes as Input: 
a number  (for number of stars)
Returns:
  lines of stars with the first line having the number specified by the user- each line has one less star than the line above

-----------
Additional Information:
The user enters the initial number of stars, and the program writes out lines of stars. Each line has one less star than the previous line:



-----------
Example:
Initial number of stars:
7

*******
******
*****
****
***
**
*

-----------
Tests:  
A)
Initial number of stars: 3
***
**
*


B)
Initial number of stars:
10

**********
*********
********
*******
******
*****
****
***
**
*

C)
Initial number of stars: 1
*

D) 
Initial number of stars: 0
 
The number of must be greater than zero

in
*/

import java.util.*;


class WedgeOfStars
 {
	public static void main ( String[] args)
	{
		Scanner scan = new Scanner (System.in);
		int initial;
		int numberOfStars ;
		int numberOfRows;
		String stars = new String ("");
		
		// get initial value from user
		System.out.println("Initial number of stars:");
		initial = scan.nextInt();
	
	if (initial >0)
		{	
			
			//loop variable initialization
				numberOfStars = initial;
				int countNumberOfIterations = 0;
				numberOfRows = initial;
			
				// print a number of rows equal to the initial user value with a number of stars per row decreasing by one each time the loop runs
			for ( numberOfRows = initial; numberOfRows > 0; numberOfRows --)
				{
					// this part prints the stars
					for ( countNumberOfIterations = 0; countNumberOfIterations < numberOfStars ; countNumberOfIterations ++)
					{
						System.out.print("*");
					}
					
					System.out.print("\n");
					numberOfStars = numberOfStars-1;
				}
		}
		
		else
		{
			System.out.println("The number of stars must be greater than zero");

		}
	}
 }