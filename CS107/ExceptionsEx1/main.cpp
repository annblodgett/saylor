/******************************************************************************

Saylor CS107 Unit 4 Exercises:

URL: http://sfdv4001.wikidot.com/lab-10#toc0

Exercise 1 : Defining and using your own exceptions
Write a function calculateAverage() which takes four int arguments which are marks for four courses in the semester and returns their average as a float.
The calculateAverage() function should take only valid range for marks which is between 0 - 100. If the marks are out of range throw an OutOfRangeException
- define this exception as a class as shown in the lecture and lecture examples.Write the specification for this function as comments above it specifying 
the pre conditions, post conditions and invariants and what exceptions are thrown when so that the caller understand how it behaves.
*******************************************************************************/


#include <iostream>

using namespace std;

// define exception class 
class OutOfRangeException
{
};

/* 

- Function specification - 

calculateAverage() takes  4 int  argumnets which are marks (grades) 
for four courses in the semester and returns their average as a float.

Pre-Conditions: All four marks must between 0-100
Post Conditions: Returns the average of the four marks input
Invariants: average >= 0 AND <= 100
Exceptions Thrown: OutOfRangeException

Example:

calculateAverage(1,3,3,4);
>> 2.75

*/

float
calculateAverage (int mark1, int mark2, int mark3, int mark4)
{
  if ((mark1 < 0 || mark1 > 100))
    throw OutOfRangeException ();
  if (mark2 < 0 || mark2 > 100)
    throw OutOfRangeException ();
  if (mark3 < 0 || mark3 > 100)
    throw OutOfRangeException ();
  if (mark4 < 0 || mark4 > 100)
    throw OutOfRangeException ();

  float average = (mark1 + mark2 + mark3 + mark4) / 4.0;
  return average;

}


int
main ()
{

  int mark1;
  int mark2;
  int mark3;
  int mark4;

  cout << "Please enter your marks for the first course:" << endl;
  cin >> mark1;
  cout << "Please enter your marks for the second course:" << endl;
  cin >> mark2;
  cout << "Please enter your marks for the third course:" << endl;
  cin >> mark3;
  cout << "Please enter your marks for the fourth course:" << endl;
  cin >> mark4;

  try
  {

    cout << "The average is: " << calculateAverage (mark1, mark2, mark3,
						    mark4) << endl;

  }
  catch (OutOfRangeException)
  {
    cerr <<
      "Exception: Marks must be input as integers between 0 and 100.";
  }
}
