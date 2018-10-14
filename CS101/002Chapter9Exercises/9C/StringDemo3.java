//Exercise 3 — A String Method that creates a new String

class StringDemo3
{
  public static void main ( String[] args )
  {
   String first = new String("    	In a Hole in the ground        there lived a 	Hobbit.   ");
	String second;

	second = first.trim();
    System.out.println("The first string: " + first );
	  System.out.println("The second string: " + second );

  }
}