/*Exercise 1 — Payroll Program

Examine this program (from the chapter):

class Example
{  
  public static void main ( String[] args )  
  {
    long   hoursWorked = 40;    
    double payRate     = 10.0, taxRate = 0.10;    
    System.out.println("Hours Worked: " + hoursWorked );
    System.out.println("pay Amount  : " + (hoursWorked * payRate) );
    System.out.println("tax Amount  : " + (hoursWorked * payRate * taxRate) );
  }
}
*/

/*Modify it so that each variable is declared by itself and is not initialized. 
Next write three assignment statements to assign a value to each variable. Run the program; examine the output.

class Example
{  
  public static void main ( String[] args )  
  {
    // each variable is declared by itself and is not initialized
	long   hoursWorked; 
    double payRate; 
	double taxRate;
	
	//three assignment statements to assign a  value to each variable. 
	hoursWorked = 40;
	payRate = 10.0;
	taxRate = 0.10;
    System.out.println("Hours Worked: " + hoursWorked );
    System.out.println("pay Amount  : " + (hoursWorked * payRate) );
    System.out.println("tax Amount  : " + (hoursWorked * payRate * taxRate) );
  }
}


OUTPUT >>
annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9A$ java Example 
Hours Worked: 40
pay Amount  : 400.0
tax Amount  : 40.0


*/

class Example
{  
  public static void main ( String[] args )  
  {
    // each variable is declared by itself and is not initialized
	long   hoursWorked; 
    double payRate; 
	double taxRate;
	
	//three assignment statements to assign a  value to each variable. 
	hoursWorked = 40;
	payRate = 10.0;
	taxRate = 0.10;
    System.out.println("Hours Worked: " + hoursWorked );
    System.out.println("pay Amount  : " + (hoursWorked * payRate) );
    System.out.println("tax Amount  : " + (hoursWorked * payRate * taxRate) );
  }
}

/*Now let's break something: Remove one of the declarations from the program. Can you compile it?
ANSWER >> Nope.

OUTPUT >> annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9A$ javac Example.java 
Example.java:60: error: cannot find symbol
	hoursWorked = 40;
	^
  symbol:   variable hoursWorked
  location: class Example
Example.java:63: error: cannot find symbol
    System.out.println("Hours Worked: " + hoursWorked );
                                          ^
  symbol:   variable hoursWorked
  location: class Example
Example.java:64: error: cannot find symbol
    System.out.println("pay Amount  : " + (hoursWorked * payRate) );
                                           ^
  symbol:   variable hoursWorked
  location: class Example
Example.java:65: error: cannot find symbol
    System.out.println("tax Amount  : " + (hoursWorked * payRate * taxRate) );
                                           ^
  symbol:   variable hoursWorked
  location: class Example
4 errors


Now remove one of the initializations from the correct program. 
(For example, delete the characters "= 40" from the first declaration. Try to compile and run the program. When is a problem detected? 
ANSWER>> 
annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9A$ javac Example.java 
Example.java:64: error: variable taxRate might not have been initialized
    System.out.println("tax Amount  : " + (hoursWorked * payRate * taxRate) );
                                                                   ^
1 error

It is detected when System.out.println tries to use the variable. 
*/