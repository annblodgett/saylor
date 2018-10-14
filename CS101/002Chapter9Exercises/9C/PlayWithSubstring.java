// Exercise 4 — Play with substring()

class PlayWithSubstring
{
  public static void main ( String[] args )
  {
    String str = new String( "Golf is a good walk spoiled." ); // create the original object

    String sub = str.substring(8, str.length() ); //create a new object from the original
	
    System.out.println( sub );

  }
}

/*  Modify your program so that it calls this two-parameter substring(). Experiment with the two parameters to see how they work. Try the following:

    Make both parameters the same value.
	>> (BLANK)
	
    Make the first parameter 0, and the last parameter the index of the last character plus one (28 for the example).
	>>
	
    Instead of using a literal 28 in the above, use str.length() which will have the value 28.
	>>annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9C$ java PlayWithSubstring 
a good walk spoiled.

	
    Change the second parameter to 29 in the above.
	>>annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9C$ java PlayWithSubstring 
Exception in thread "main" java.lang.StringIndexOutOfBoundsException: begin 0, end 29, length 28
	at java.base/java.lang.String.checkBoundsBeginEnd(String.java:3107)
	at java.base/java.lang.String.substring(String.java:1873)
	at PlayWithSubstring.main(PlayWithSubstring.java:9)

	
    Make the first parameter negative.
	>>annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9C$ java PlayWithSubstring 
Exception in thread "main" java.lang.StringIndexOutOfBoundsException: begin -1, end 28, length 28
	at java.base/java.lang.String.checkBoundsBeginEnd(String.java:3107)
	at java.base/java.lang.String.substring(String.java:1873)
	at PlayWithSubstring.main(PlayWithSubstring.java:9)

	
    Reverse the order of the parameters.
	>>annblodgett@annblodgett-NE56R:~/Documents/CS101/002Chapter9Exercises/9C$ java PlayWithSubstring 
Exception in thread "main" java.lang.StringIndexOutOfBoundsException: begin 19, end 8, length 28
	at java.base/java.lang.String.checkBoundsBeginEnd(String.java:3107)
	at java.base/java.lang.String.substring(String.java:1873)
	at PlayWithSubstring.main(PlayWithSubstring.java:9)

	
*/