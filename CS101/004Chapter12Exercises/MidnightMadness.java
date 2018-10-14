/* Description: A program that determines the price of a movie ticket 

-----
Additional Information:
. The program asks for the customer's age and for the time on a 24-hour clock (where noon is 1200 and 4:30PM is 1630). The normal adult ticket price is $8.00, however the adult matinee price is $5.00. Adults are those over 13 years. The normal children's ticket price is $4.00, however the children's matinee price is $2.00. Assume that a matinee starts at any time earlier than 5pm (1700). 

 Sales of movie tickets has been dropping! In an effort to attract more viewers, the theater has started a new policy charging $4.00 for all tickets sold after 2200 (10PM). However, no children may purchase tickets after that time. Add logic to the program of exercise 8 to implement the new policy. 

See http://web.archive.org/web/20150602011655/http://chortle.ccsu.edu:80/java5/Notes/chap12/progExercises12.html 

-----
Takes as Input: 
	1)customer age and 2) the time in 24 hour format
Returns:
	ticket price

-----
Example:
Age: 20

Time: 1600

Ticket Price is $5.0

----
Tests:

A)
Age: 20

Time: 1600

Ticket Price is $5.0

B)
Age: 5

Time: 1000

Ticket Price is $2.0

C)
Age: 20

Time: 1800

Ticket Price is $8.0

D)
Age: 13

Time: 1700

Ticket Price is $8.0

E)
Age: 14

Time: 2300

Ticket Price is $4

F)
Age: 10

Time: 2300

I'm sorry you must be over 13 to purchase a Midnight Madness ticket. 

*/

import java.util.*;

public class  MidnightMadness
{
	public static void main ( String [] args)
	{
		//initialize variables
		int time;
		int age;
		double price;
		final double  matineeChild = 2.0 ;
		final double matineeAdult = 5.0;
		final double regularChild = 4.0;
		final double regularAdult = 8.0;
		final double midnightMadness = 4.0;
	
		Scanner scan = new Scanner (System.in);
		
		//get age and time from user
		System.out.println("Age: ");
		age = scan.nextInt();
		
		System.out.println("Time:");
		time = scan.nextInt();
		
		//check if time is after 2200 then check if age is younger than 13 (Can't sell ticket ) or older than 13 (Midnight madness)
		if (time > 2200) 
		{
			if (age < 13) 
			{
				System.out.println("I'm sorry you must be over 13 to purchase a Midnight Madness ticket. ");
			}
			else
				{
						price = midnightMadness;
						System.out.println("Ticket Price is $"+price);
				}
		}
		else
		{	
		//Check if time is before (matinee) or after (regular) 1700 then check if age is younger than 13 (child price) or older than 13 (adult price)
		if (time < 1700 )
		{
		
			if ( age < 13)
			{
				price = matineeChild;
				System.out.println("Ticket Price is $"+price);
			}
			else 
			{
				price = matineeAdult;
				System.out.println("Ticket Price is $"+price);
			}
		}
		else 
		{
			if ( age < 13)
			{
				price = regularChild;
				System.out.println("Ticket Price is $"+price);
			}
			else
			{
				price = regularAdult;
				System.out.println("Ticket Price is $"+price);
			}

		}
	}
	}
}
