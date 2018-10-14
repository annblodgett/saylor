/* Description:  a program that asks for the balance in each account and then writes out the service charge.

-----------
Takes as Input:
 a savings balance and a checking balance in dollars

 Returns: 
the service charge that should be applied to each check 
-----------
Additional Information:
if a customer has more than $1000 dollars in their checking account or more than $1500 dollars in their savings account, then there is no service charge for writing checks. Otherwise there is a $0.15 charge per check

-----------
Example:

Checking balance: 1100
Savings balance: 10

Service charge: none

-----------
Tests:  
A)
Checkng balance: -10
Savings balance: 10000

Service charge: none

B)
Checking balance: 5
Savings balance: 10

Service charge: $ 0.15

C)
Checking balance: 0
Savings balance: 1501

Service charge: none

B)
Checking balance: 500
Savings balance: .01

Service charge: $ 0.15

*/

import java.util.*;

class CheckCharge
 {
	public static void main ( String[] args)
	{
		//initialize variables
		double checkingBalance;
		double savingsBalance;
		double  serviceCharge = 0.15;
		double checkingThreshold = 1000.0;
		double  savingsThreshold =  1500.0;
		String message =  new String(" none");
		Scanner scan = new Scanner (System.in);
		
		//get account balances from user
		
		System.out.println("Checking balance:");
		checkingBalance = scan.nextDouble();
	
		
		System.out.println("Savings balance:");
		savingsBalance = scan.nextDouble();
		
		// Check if savings or checking balances are high enough to avoid a service charge
		
		if ( savingsBalance > savingsThreshold || checkingBalance > checkingThreshold)
		{
			// if either or both balances are sufficient print a message
			System.out.println("Service charge: "+message);
		}
		else 
		{
			// if neither account has enough money print the service charge amount 
			System.out.println("Service charge: $"+serviceCharge);
		}
	}
	
}