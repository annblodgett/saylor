// Exercise 4 — Play with substring()

class StringDemo4
{
  public static void main ( String[] args )
  {
    String str = new String( "Golf is a good walk spoiled." ); // create the original object

    String sub = str.substring(8); //create a new object from the original

    System.out.println( sub );

  }
}