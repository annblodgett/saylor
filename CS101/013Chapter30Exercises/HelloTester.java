/*  Exercise 1

Modify the program in Chapter 30 so that a HelloObject object writes out the greeting as many times as there are characters in the greeting. The HelloObject class will have a constructor that allows the main() method to initialize objects to different greetings.

C:\>java Hello
Hello
Hello
Hello
Hello
Hello

< The program in Chapter 30 >

class HelloObject                                  
{
  String greeting;

  HelloObject( String st )
  {
    greeting = st;
  }

  void speak()                                     
  { 
    System.out.println( greeting );
  }
}

class HelloTester
{
  public static void main ( String[] args )        
  {
    HelloObject anObject = new HelloObject("A Greeting!"); 
    anObject.speak();
  }
}

*/

import java.util.*

class HelloObject                                  
{
  String greeting;

  HelloObject( String st )
  {
    greeting = st;
  }

  void speak()                                     
  { 
    System.out.println( greeting );
  }
}

class HelloTester
{
  public static void main ( String[] args )        
  {
    HelloObject anObject = new HelloObject("A Greeting!"); 
    anObject.speak();
  }
}