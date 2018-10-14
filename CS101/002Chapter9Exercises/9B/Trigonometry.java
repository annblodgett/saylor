/*  A program that takes as input a value (x) in radians  and
 returns the sine (sinx), cosine (cosx), and the sum of the squares (sum) of the sine and cosine ((sinx*sinx)+(cosx*cosx)) for that value.
 
 Takes as input:
 A number of radians x
 
 Returns:
 sine (sinx), cosine (cosx),  sum of the squares of sine and cosine (sum)
 
 Example output:
 For 1.5708 radians the sine is : 1 , the cosine is :  -0.00000367   , the sum of the squares of sine and cosine is:   0.99999999998
 
 Test Cases:
 
 A) 0 radians
 sinx = 0
 cosx = 1
 sum = 1
 
 B) 10000 radians
 sinx = -0.30561439
 cosx = -0.95215537
 sum = 1.00000000399
 
 C) -40 radians
 sinx =  -0.74511316
 cosx = -0.66693806
 sum =  0.99999999708
 
 D) 1.5708 radians
 sinx = 1
 cosx =  -0.00000367 
 sum =  0.99999999998
 
 E)  0.5236 radians
 sinx = 0
 cosx = 1
 sum = 1
 
 F)  30 degrees ( needs to be converted to radians)
 sinx = 0.5
 cosx =0.86602540378
 sum = 1
 
 
 */
 import java.lang.Math;
 
 class  Trigonometry
 {
	 public static void main( String[] args )
	 {
		 //initialize variables
		 double x;
		 double sinx;
		 double cosx;
		 double sum;
		
		 
		 //case A input  is 0 radians
			  // initialize variables 
			  x = 0;
			  sinx =  Math.sin(x);
			  cosx = Math.cos(x);
			  // calculate sum of the squares of sine and cosine
			  sum = ((sinx*sinx)+(cosx*cosx));
			  // print the result to the console
			  System.out.println("Case A ______________________________");
			  System.out.println("For "+x+" radians the sine is : "+sinx+" , the cosine is :  "+cosx+"   , the sum of the squares of sine and cosine is:   "+sum);
			  
			  
		  
		 
		 //case B input is 10000 radians
			x = 10000;
			  sinx =  Math.sin(x);
			  cosx = Math.cos(x);
			  // calculate sum of the squares of sine and cosine
			  sum = ((sinx*sinx)+(cosx*cosx));
			  // print the result to the console
			   System.out.println("Case B______________________________");
			  System.out.println("For "+x+" radians the sine is : "+sinx+" , the cosine is :  "+cosx+"   , the sum of the squares of sine and cosine is:   "+sum);
		 
		 //case C input is -40 radians
			x = -40 ;
			  sinx =  Math.sin(x);
			  cosx = Math.cos(x);
			  // calculate sum of the squares of sine and cosine
			  sum = ((sinx*sinx)+(cosx*cosx));
			  // print the result to the console
			   System.out.println("Case C______________________________");
			  System.out.println("For "+x+" radians the sine is : "+sinx+" , the cosine is :  "+cosx+"   , the sum of the squares of sine and cosine is:   "+sum);
		 
		 // case D input is 1.5708 radians
				x = 1.5708;
			  sinx =  Math.sin(x);
			  cosx = Math.cos(x);
			  // calculate sum of the squares of sine and cosine
			  sum = ((sinx*sinx)+(cosx*cosx));
			  // print the result to the console
			   System.out.println("Case D______________________________");
			  System.out.println("For "+x+" radians the sine is : "+sinx+" , the cosine is :  "+cosx+"   , the sum of the squares of sine and cosine is:   "+sum);
		 
		 // case E input is 0.5236 radians 
			x = 0.5236;
			  sinx =  Math.sin(x);
			  cosx = Math.cos(x);
			  // calculate sum of the squares of sine and cosine
			  sum = ((sinx*sinx)+(cosx*cosx));
			  // print the result to the console
			   System.out.println("Case E ______________________________");
			  System.out.println("For "+x+" radians the sine is : "+sinx+" , the cosine is :  "+cosx+"   , the sum of the squares of sine and cosine is:   "+sum);
			  
		// case F input is 30 degrees = task is to convert to radians and output as above 
			x = 30;
				x =  (x * (Math.PI/180));
				sinx =  Math.sin(x);
				cosx = Math.cos(x);
				// calculate sum of the squares of sine and cosine
				sum = ((sinx*sinx)+(cosx*cosx));
				// print the result to the console
				 System.out.println("Case F______________________________");
				System.out.println("For "+x+" radians the sine is : "+sinx+" , the cosine is :  "+cosx+"   , the sum of the squares of sine and cosine is:   "+sum);
				  
	}
 }


 