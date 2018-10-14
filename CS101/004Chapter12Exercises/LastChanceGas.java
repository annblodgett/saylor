/*Description:
A program to help drivers decide if they need gas at the last gas station before crossing Death Valley.

------------
Additional Information:
 Al's Last Chance Gas station sits on Route 190 on the edge of Death Valley. There is no other gas station for 200 miles. 
 
 
 ------------
 Takes as Input:
    The capacity of the gas tank, in gallons.
    The indication of the gas gauge in percent (full= 100, three quarters full = 75, and so on).
    The miles per gallon of the car.
Returns:
	The messages "Get Gas" or "Safe to Proceed" depending on if the car can cross the 200 miles with the gas remaining in the tank. 	
	
 ------------
 Example:
	 Tank capacity:
	>>12
	Gage reading:
	>>50
	Miles per gallon:
	>>30
	Get Gas!
	

*/
import java.util.* ;

class LastChanceGas
{
	public static void main( String [] args)
	{
		//declare variables
		final int milesToGo = 200;

		int tankCapacity;
		int gageReading;
		int milesPerGallon;
		int fuelNeeded;
		int fuelHave;
		
		Scanner scan = new Scanner(System.in);
		
		//get the take capacity, gage reading, andmiles per gallon from user
		
		System.out.println("Tank capacity:"); // get tank capacity
		tankCapacity = scan.nextInt();
		
		System.out.println("Gage reading"); // get gage reading
		gageReading = scan.nextInt();
		
		System.out.println("Miles per gallon:"); // get miles per gallon
		milesPerGallon= scan.nextInt();
		
		
		//calculate the amount of fuel needed to cross the desert  [miles / (miles/ gallon) = gallon]
		fuelNeeded = milesToGo/milesPerGallon;
		
		System.out.println("Fuel needed: "+fuelNeeded+" gallons");
		
		//calculate the amount of fuel the user has in the tank [capacity*percent = amount]
		fuelHave = (tankCapacity*gageReading/100);
		System.out.println("You have about "+fuelHave+" gallons");
		
		//check to see if user has enough fuel
		if( fuelHave>fuelNeeded)
		{
			//if there is enough fuel  in the tank tell the user it is safe to proceed
			System.out.println("Safe to Proceed");
		}
		else
		{
			//if there is not enough fuel in the tank tell the user to get gas
			System.out.println("Get Gas!");
		}
	}
}