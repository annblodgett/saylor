/* Description:
	A program that asks the user for a number of bolts, nuts, and washers in their purchase and then calculates and prints out the total cost of the purchase. 
	-------------------
	Additional Info:
		As an added feature, the program checks the order. 
			-A correct order must have at least as many nuts as bolts and at least twice as many washers as bolts, otherwise the order has an error. 
				-For an error the program writes out "Check the Order: too few nuts" or "Check the Order: too few washers" as appropriate. 
				-Both error messages are written if the order has both errors. If there are no errors the program writes out "Order is OK." 
			- In all cases the total price in cents (of the specified number of items) is written out. 
	
		Bob's Discount Bolts charges the following prices and should be declared using constants:
			5 cents per bolt
			3 cents per nut
			1 cent per washer
			
	----------------------
	Takes as Input: 
		An integer number of bolts nuts and washers.
	
	Returns: 
		The total order price in cents 
		
	-----------------------
	Example:
		Number of bolts: 12
		Number of nuts: 8
		Number of washers: 24

		Check the Order: too few nuts

		Total cost: 108
		
	---------------
	Test Cases:
		A)
			Number of bolts: 2
			Number of nuts: 2
			Number of washers: 5

			Check the Order: Order is OK 

			Total cost: 21
			
		B)
			Number of bolts: 0
			Number of nuts: 0
			Number of washers: 0

			Check the Order: Order is OK 
			Total cost: 0
			
		C)
			Number of bolts: 12
			Number of nuts: 8
			Number of washers: 24

			Check the Order: too few nuts

			Total cost: 108
			
		D)
			Number of bolts: 10
			Number of nuts: 20
			Number of washers: 10

			Check the Order: Check the Order: too few washers
			Total cost: 120
*/
import java.util.*;

class OrderChecker 
{
	public static void main ( String [] args) 
	{
		//declare the prices of bolts, nuts, and washers as constants
		final int boltPrice = 5;
		final int nutPrice = 3;
		final int washerPrice = 1;
		
		//declare variables
		int numberOfBolts;
		int numberOfNuts;
		int numberOfWashers;
		int totalCost;
		Scanner scan = new Scanner(System.in);
		
		//ask user for number of bolts, nuts and washers and assign the input values to the corresponding variables.
		
		System.out.println("Please enter the number of bolts you would like to buy:"); // get number of bolts
		numberOfBolts = scan.nextInt();	
		
		System.out.println("Please enter the number of bolts you would like to buy:"); //  get number of nuts
		numberOfNuts = scan.nextInt();	
		
		System.out.println("Please enter the number of bolts you would like to buy:"); // get  number of washers
		numberOfWashers = scan.nextInt();	
		
		// calculate  the Total Cost of order in pennies
		totalCost = ((numberOfBolts*boltPrice)+(numberOfNuts*nutPrice)+(numberOfWashers*washerPrice));
		
		//print the number of bolts, nuts, and washers to the console
		System.out.println("Number of bolts: "+numberOfBolts); // print  number of bolts
		System.out.println("Number of nuts: "+numberOfNuts); // print  number of nuts
		System.out.println("Number of washers: "+numberOfWashers); // print number of washers
		System.out.println("\n"); // print new line
		
		// check the order and return appropriate messages
		
		if (numberOfNuts >= numberOfBolts  && numberOfWashers >= (numberOfBolts*2)) 
		{
			// message if order is valid ( nuts >= bolts and washers >= 2*bolts)
			System.out.println("Order is Ok");
		}
		else if (numberOfNuts >= numberOfBolts && numberOfWashers <(2*numberOfBolts))
		{
			// message if order has too few washers
			System.out.println("Check the Order: too few washers");
		}
		else if (numberOfNuts <numberOfBolts  && numberOfWashers >= (numberOfBolts*2)) 
		{	
			// message if order has too few nuts
			System.out.println("Check the Order: too few nuts");
		}
		else if (numberOfNuts < numberOfBolts  && numberOfWashers < (numberOfBolts*2)) 
		{
			// messages if order has too few washers and too few nuts
			System.out.println("Check the Order: too few washers");
			System.out.println("Check the Order: too few nuts");
		}
		else 
		{
			//message saying there is an error
			System.out.println("Something went wrong");
		}
		
		//print the total cost to the console
		System.out.println("Total cost: "+totalCost);
	}
	
}

			