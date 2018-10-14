/* A program that outputs 10 lines of 10 x's  and appends output to a file.

See https://stackoverflow.com/questions/23886499/how-to-redirect-stdin-and-stdout-to-a-text-file-in-java for help

See https://stackoverflow.com/questions/1225146/java-filewriter-with-append-mode for appending instead of re-writing

*/
import java.lang.*;
import java.io.*;


class MoreControlCharacters 
{
	public static void main( String [] args) throws Exception 
	{
		     // create file
      FileOutputStream f = new FileOutputStream("MoreControlCharactersOutput.txt", true);

      System.setOut(new PrintStream(f));

      // this text will get redirected to file
	  for (int i =0; i <10; i++)
	  {
      System.out.println("XXXXXXXXXX");
	  }
	}
}