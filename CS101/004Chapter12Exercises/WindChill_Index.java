/* Description:
A program that calculates the Wind Chill Index (WCI) uisng the wind speed in miles per hour and the temperature in Fahrenheit 

----
Additional Information:


let t be temperature
let v be wind speed

if (0 <= v <= 4) then WCI = t

if (v >=45) then WCI = 1.6t - 55

otherwise, WCI = 91.4 + (91.4 - t)(0.0203v - 0.304(v)1/2 - 0.474)

----
Takes as input:
 - wind speed in miles per hour 
- temperature in Fahrenheit 

Returns:
- Wind Chill Index

----
Example:

wind speed (mph):
30
temperature (deg Fahrenheit):
50
wind chill index (WCI): 
28.0548298

----
Tests:

A)
wind speed (mph):
1
temperature (deg Fahrenheit):
50
wind chill index (WCI): 
50

B)
wind speed (mph):
50
temperature (deg Fahrenheit):
50
wind chill index (WCI): 
25

C)
wind speed (mph):
44
temperature (deg Fahrenheit):
50
wind chill index (WCI): 
25.27145408

D)
wind speed (mph):
5
temperature (deg Fahrenheit):
50
wind chill index (WCI): 
47.83624286

*/

import java.util.*;
import java.lang.Math;

class WindChill_Index {
	public static void main ( String[] args)
	{
		//initialize variables
		double windSpeed;
		double temperature;
		double wci;
		Scanner scan = new Scanner(System.in);
		
		// get wind speed and temperature from user
		System.out.println("wind speed (mph):");
		windSpeed = scan.nextDouble();
		
		System.out.println("temperature (deg Fahrenheit):");
		temperature = scan.nextDouble();
		
		//determine which formula to use to calculate 
		
		if (windSpeed >= 45)
		{
			wci = 1.6*temperature - 55;
		}
		else if ( windSpeed >= 0 && windSpeed <= 4)
		{
			wci = temperature;
		}
		else
		{
			wci =  91.4 + (91.4 -temperature)*(0.0203*windSpeed - 0.304*Math.sqrt(windSpeed) - 0.474);
		}
		
		// print wci to console
		System.out.println("wind chill index (WCI): "+wci);
		
	}
}




