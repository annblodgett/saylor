/*
 A program that averages the rain fall for three months, April, May, and June.
 
 Takes as Input : 
	Three floating point values denoting the rain fall in April, May, and June respectively.
 Returns: 
	The average of the three values
 
Example output:
	Rainfall for April:  12
	Rainfall for May  :  14
	Rainfall for June:   8
	Average rainfall:    11.333333
	
Tests:

A) April = 15, May = 2 and June = 14
returns: 10.33333

B) April = 12, May = 14 and June = 8
returns: 11.33333
*/
class AverageRainfall
{
	public static void main( String[] args )
	{
		//delcare variables
		double april;
		double  may;
		double june;
		double averageRainfall;
		
		// initialize variables for case A
		april = 15;
		may = 2;
		june = 14;
		// calculate the average  for case A
		
		averageRainfall = (april+may+june)/3 ;
		
		// print result for case A  to console
		System.out.println(" Rainfall for April: \t"+april);
		System.out.println(" Rainfall for May: \t"+may);
		System.out.println(" Rainfall for June: \t"+june);
		System.out.println(" Average Rainfall: \t"+averageRainfall);
		
		//print a dividing line between test cases
		
		System.out.println("____________________________________");
		
		// initialize case B variables
		april = 12;
		may = 14;
		june = 8;
		// calculate the case B average 
		
		averageRainfall = (april+may+june)/3 ;
		
		// print case B result to console
		System.out.println(" Rainfall for April: \t"+april);
		System.out.println(" Rainfall for May: \t"+may);
		System.out.println(" Rainfall for June: \t"+june);
		System.out.println(" Average Rainfall: \t"+averageRainfall);
	}
}
