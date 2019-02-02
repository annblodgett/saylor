/*
 * Scissors.cpp
 *
 *  Created on: Feb 2, 2019
 *      Author: annblodgett
 */

#include <iostream>
#include "Tool.h"
#include "Scissors.h"
using namespace std;

Scissors::Scissors (int firstStrength):
Tool (firstStrength)
{

  type = 's';

  cout << "I am a Scissors of strength " << getStrength () << endl;

}

Scissors::~Scissors ()
{
  // TODO Auto-generated destructor stub
}

bool
Scissors::fight (Tool toolName)
{

  int power = getStrength ();

  if (toolName.getType () == 'p')
    {
      power = power * 2;
    }
  else if (toolName.getType () == 'r')
    {
      power = power / 2;
    }

  if (power > toolName.getStrength ())
    {
      return true;
    }
  else
    {
      return false;
    }
}
