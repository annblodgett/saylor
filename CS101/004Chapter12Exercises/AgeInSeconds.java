/* Description:
A program that asks for users  age in years, months, and days and then calculates  and returns  the age in seconds..

----
Additional Information:
Do this by calculating the number of total days you have been alive, then multiply this by the number of hours per day (24), the number of minutes per hour (60), and the number of seconds per minute (60). Assume that there are 365 days per year (ignore leap years). But correctly take account of the different number of days in different months. If the user enters 5 for the number of months, add up the number of days in the first 5 months: 31 + 28 + 31 + 30 + 31

 A human lifespan is about 2.5 billion seconds (2.5 billion heart-beats). 

     January - 31 days
    February - 28 days in a common year and 29 days in leap years
    March - 31 days
    April - 30 days
    May - 31 days
    June - 30 days
    July - 31 days
    August - 31 days
    September - 30 days
    October - 31 days
    November - 30 days
    December - 31 days
	
	So from Jan - Dec [31+28+31+30+31+30+31+31+30+31+30+31]
	
----
Takes as Input:
Age in Years, months and days

Returns:
Age in Seconds

----
Example:
Years: 29

Months: 0

Days: 17

You have been alive 916012800 seconds.

----
Tests

A)
Years: 0

Months: 6

Days: 21

You have been alive 17452800 seconds.

B)
Years: 29

Months: 0

Days: 17

You have been alive 916012800 seconds.

C)
Years: 10

Months: 11

Days: 10

You have been alive 345081600 seconds.


*/

import java.util.*;

class AgeInSeconds
{
	public static void main ( String [] args )
	{
		//initialize variables
		int years;
		int months;
		int days;
		int monthsToDays = 0;
		int yearsToDays;
		long ageInSeconds;
		Scanner scan = new Scanner(System.in);
		int[] monthsArray = new int[] {31,28,31,30,31,30,31,31,30,31,30,31};
		int i;
		
		//get years, months, and days from user
		System.out.println("Years: ");
		years = scan.nextInt();
		
		System.out.println ("Months: ");
		months = scan.nextInt();
		
		System.out.println ("Days: ");
		days = scan.nextInt();
		
		// convert years to days
		 yearsToDays = years*365;
		
		//convert months into days
		
		for ( i = 0; i < months; i++)
		{
			monthsToDays= monthsToDays + monthsArray [i];
			
		}
		
		//Add up all three categories in days, then convert to seconds
		ageInSeconds = (yearsToDays+monthsToDays+days)*24*60*60;
		
		System.out.println("You have been alive "+ageInSeconds+" seconds");
	
	}
}





