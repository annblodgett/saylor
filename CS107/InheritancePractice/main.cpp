/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// See https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/c-inheritance/

/* Assigntment: Implement a class called Tool. It should have an int field called strength and a char field called type. 
You may make them either private or protected. 
The Tool class should also contain the function void setStrength(int), which sets the strength for the Tool.

Create 3 more classes called Rock, Paper, and Scissors, which inherit from Tool. 
Each of these classes will need a constructor which will take in an int that is used to initialize the strength field.
The constructor should also initialize the type field using 'r' for Rock, 'p' for Paper, and 's' for Scissors.

These classes will also need a public function bool fight(Tool) that compares their strengths in the following way:
Rock's strength is doubled (temporarily) when fighting scissors, but halved (temporarily) when fighting paper.
In the same way, paper has the advantage against rock, and scissors against paper.
The strength field shouldn't change in the function, which returns true if the original class wins in strength and false otherwise.
*/

#include <iostream>
#include "Tool.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
using namespace std;

int
main ()
{
  Rock r1 (500);
  Paper p1 (500);
  Scissors s1 (500);

  if (r1.fight (p1))
    {
      cout << "rock wins!" << endl;
    }
  else
    {
      cout << "paper wins!" << endl;
    };

  if (s1.fight (p1))
    {
      cout << "scissors wins!" << endl;
    }
  else
    {
      cout << "paper wins!" << endl;
    }

  if (s1.fight (r1))
    {
      cout << "scissors wins!" << endl;
    }
  else
    {
      cout << "rock wins!" << endl;
    }


}
