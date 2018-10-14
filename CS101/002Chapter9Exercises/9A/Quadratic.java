
/* A Program that calculates the value of the quatratic 3x^2 - 8x +4 for various values of x.
		
		Takes as input: 
			a decimal value of a point x
		
		Returns: 
			the value of the quadratic function 3x^2 - 8x +4 at point x. 
		
		Example Output :  
			At x = 4.0 the value is 20.0
		
		Tests:
		
			A) x == 0.0
			returns : 4.0
			
			
			B) x  ==-2.0
			returns : 32.0
			
			C) x  == 10000.0
			returns: 2.9992e8
			
			D) x == -10000.0
			returns: 3.0008e8
			
			E) x == 4
			returns 20.0
			
			F) x == 2.0
			returns 0.0
			
			!FAILS @ G)  x ==  0.666667
			returns  0 
							G) Actual output >> At x = 0.666667 the value is -1.3333329995646181E-6

		
			
			H) x == 1.14
			returns -1.2212
				
		*/
import  java.lang.Math;

class Quadratic
{
	public static void main( String [] args )
	{
		//initialize variables 
		double x;
		double value;
	 
		// plug x into the quadratic  3x^2 - 8x +4 and place the answer into the variable value.
		x = 0.0;
		value = (3*(x*x)-(8*x)+4);
		// print result to console
		System.out.println("At x = "+x+" the value is "+value);
		
		// plug x into the quadratic  3x^2 - 8x +4 and place the answer into the variable value.
		x = 2.0;
		value = (3*(x*x)-(8*x)+4);
		// print result to console
		System.out.println("At x = "+x+" the value is "+value);
		
		
		// plug x into the quadratic  3x^2 - 8x +4 and place the answer into the variable value.
		x = 4.0;
		value = (3*(x*x)-(8*x)+4);
		// print result to console
		System.out.println("At x = "+x+" the value is "+value);
		
		
	}
}

