/*Description:
  A program that asks for a contestant's weight and then says if the person is allowed to enter the State Fair Pie Eating Contest.

 ----------------
 Additional Information:
	Contestants must weigh within 30 pounds of 250 pounds. 
	
----------------
Example:

Please enter your weight in pounds:
>> 200
I'm sorry, you must weigh within 30 pounds of 250 pounds to enter the contest.

--------------------
Test Cases:

A)
Please enter your weight in pounds:
>> 250
Contratulations!  You are eligible to enter the contest.

B) Please enter your weight in pounds:
>> 290
I'm sorry, you must weigh within 30 pounds of 250 pounds to enter the contest.

C)
Please enter your weight in pounds:
>> 220
Contratulations!  You are eligible to enter the contest.

D)
Please enter your weight in pounds:
>> 281
I'm sorry, you must weigh within 30 pounds of 250 pounds to enter the contest.

*/
import java.util.*;

class PieEatingContest
 {
	public static void main (String [] args)
	{
	 // initiaize variables
		double contestantWeight;
		double thresholdWeight = 250.0;
		double boundaryAmount = 30.0;
		Scanner scan = new Scanner(System.in);
	
	// ask user to enter weight
		System.out.println("Please enter your weight in pounds:");
		contestantWeight = scan.nextDouble();
		
	// check to see if person is eligible to enter the contest
		
		if (contestantWeight <= (thresholdWeight+boundaryAmount) && contestantWeight >=(thresholdWeight-boundaryAmount))
		{
			// if within bounds print eligible message to console 
			System.out.println("Contratulations!  You are eligible to enter the contest.");
		}
		else 
		{
			// if out of bounds print sorry message to console.
			System.out.println("I'm sorry, you must weigh within "+boundaryAmount+" pounds of "+thresholdWeight+ " pounds to enter the contest.");
		}
	}
}