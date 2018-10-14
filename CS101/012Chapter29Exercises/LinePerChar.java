/* Description:  a program where the user enters a string, and the program echos it to the monitor with one character per line


-----------
Takes as Input:  A string
Outputs:  Prints the string to the monitor with one character per line
-----------
Additional Information:

To do this you will need to use the following method from class String:

char charAt( int inx )

This method returns the character that is at index inx of the String. Characters are indexed beginning at index 0. 

-----------
Example:

Enter a string:
Octopus

O
c
t
o
p
u
s

-----------
Tests: 
 
A)
Enter a string:
Hello

H
e
l
l
o

B)
Enter a string: 
My name is Ann

M
y

n
a
m
e

i
s

A
n
n

C)Enter a string: 
Ozzy

O
z
z
y

*/
import java.util.*;

class LinePerChar
 {
	public static void main ( String[] args)
	{
		
		Scanner scan = new Scanner(System.in);
		String userInput;
		int len;
		
		// get string from user
		System.out.println("Enter a string: ");
		userInput = scan.nextLine();
		len = userInput.length();
		
		//Print the string to the monitor with one character per line
		
		for ( int i = 0;i < len; i++) {
			
			System.out.println(userInput.charAt(i));
			
		}
		
		
	}
	
}