/*  A program that asks for the amount of a purchase, calculates a discounted price if the purchase is over a specified threshold and then returns the discounted price or a message that the discount doesn't apply. 

Takes as input:
A purchase amount in cents.

Returns:
The discounted price in cents.

Example:
-------
Enter amount of purchases:
>>2000
Discounted price: 1800
-------

Test Cases:

A)
Enter the price of your purchase in pennies:
2000
Discounted price: 1800

B)
Enter the price of your purchase in pennies:
100
 Sorry the discount only applies to purchases over $10.
 
C) 
Enter the price of your purchase in pennies:
2500
Discounted price: 2250

*/
import java.util.*;

class DiscountPrices 
{
	public static void main( String[] args)
	{
		//initialize variables
		int purchaseAmount;
		int discountedPrice;
		double percentDiscount = .1;
		int appliedToPurchasesOver = 1000;
		Scanner scan = new Scanner (System.in);
		
		//get purchaseAmount from user
		System.out.println("Enter the price of your purchase in pennies:");
		purchaseAmount = scan.nextInt();
		
		//check to see if they bought enough to get the discount
		if ( purchaseAmount > appliedToPurchasesOver)
			{
			// if amount is ok calculate the discounted price
			discountedPrice = purchaseAmount - (int)(purchaseAmount*percentDiscount);
			// print the discounted price to the console
			System.out.println("Discounted price: "+discountedPrice);
			}
		else
		{
			//Otherwise print a message to the console saying that the discount doesn't apply
			int  dollarAppliedToPurchasesOver = appliedToPurchasesOver/100;
			System.out.println("Sorry the discount only applies to purchases over $"+dollarAppliedToPurchasesOver);
		}	
	}

}