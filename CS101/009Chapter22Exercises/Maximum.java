import java.util.Scanner;

/* a program that reads 5 integers from a file, computes their sum and maximum and prints these values to the screen. */

class Maximum
{
  public static void main ( String[] args )  
  {
    Scanner scan = new Scanner( System.in );
	
	//System.out.print("Enter a number: ") ;
	int  max = scan.nextInt() ; // initialize max to first value in file
    int value;
    int sum = max ;       // initialize sum to the first value in the file

    int count = 1 ;     // initialize count

	
	
    while ( count <= 4 )
    {
       //System.out.print("Enter a number: ") ;
      value  = scan.nextInt() ;    // get next integer
      sum    = sum + value;        // add to the sum
  
	  if ( value > max ) {
		  max = value; // if the current value is greater than the max make it the new max
	  }

		    count  = count + 1 ;         // increment count
    }

    System.out.println( "Grand Total: " + sum );
	System.out.println("The max value is " +max);
  }
}
