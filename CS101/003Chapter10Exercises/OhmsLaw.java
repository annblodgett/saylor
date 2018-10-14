/* A program that asks the user for the voltage and the resistance of a device. The program calculates the current flowing through it using Ohm's law. 

Ohm's law is: current = voltage/ resistance

Takes as input:
 Two decimal values 
	1) voltage (measured in volts)
	2) resistance (measures in ohms)
Returns:
	The calculated decimal value for the current (measured in amps) 

Example:
Enter the voltage in volts:
>>1
Enter the resistance in ohms:
>>1
The current is 1 amp

Test Cases:

A)
Input 
	voltage: 2
	resistance:1000
Returns
	current: 0.002
	
B)
Input 
	voltage: 6000
	resistance:0.2
Returns
	current: 30000

C)
Input 
	voltage: 1
	resistance:1
Returns
	current: 1

*/
import java.util.*;

class OhmsLaw
{
	public static void main(String [] args)
	{
		//initialize variables
		double voltage;
		double resistance;
		double current;
		Scanner scan = new Scanner(System.in);
		
		//get voltage and resistance from user
		System.out.println("Enter the voltage in volts:");
		voltage = scan.nextDouble();
		System.out.println("Enter the resistance in ohms:");
		resistance = scan.nextDouble();
		
		//calculate current
		current =  current = voltage/ resistance;
		
		//print result to console
		if (current == 1){
		System.out.println("The current is "+current+" amp");
		}
		else{
		System.out.println("The current is "+current+" amps");
		}

	}
}

