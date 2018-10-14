/* Description: a program that asks the user to enter two words. The program then prints out both words on one line. The words will be separated by enought dots so that the total line length is 30: 


-----------
Takes as Input: two words
Returns:
both words printed on one one line separated by enough dots that the dotal line length is 30.
-----------
Additional Information:
To print out the dots, use System.out.print(".") inside a loop body. 

-----------
Example:

Enter first word:
turtle
Enter second word
153

turtle....................153




-----------
Tests:  
A)
Enter first word:
happy
Enter second word
100

happy..................100

B)
Enter first word:
ok
Enter second word
20

ok.........................20

C)
Enter first word:
hopefully
Enter second word
1111

hopefully.............1111



*/

import java.util.*;


class ChapterFifteenExerciseThree
 {
	public static void main ( String[] args)
	{
		// declare variables
		String firstWord;
		String secondWord;
		String dot = new String(".");
		String wordsAndDots;
		String wordsAndDotsTwo;
		Scanner scan = new Scanner(System.in);
		int length;
		int counter = 0;

		 
		 // get first and second word from user
		 
		 System.out.println("Enter first word:");
		 firstWord = scan.nextLine();
		 
		 System.out.println("Enter second word:");
		 secondWord = scan.nextLine();
		 
		 // create a string with the words  from the user plus one dot and store in a variable.  Then calculate the length of the resulting new string
		 wordsAndDots = new String (firstWord + dot + secondWord);
		 length = wordsAndDots.length();
		 
		//add extra dots to the dot variable until the two words plus the dots have a total length of 30 
		while (counter< (30 - length))
		{
			dot = dot + ".";
			counter = counter+1;
		}
		// print the result to the  console
		wordsAndDotsTwo = new String  (firstWord + dot + secondWord);
		System.out.println(wordsAndDotsTwo);
		System.out.println(wordsAndDotsTwo.length());
	}
	
}