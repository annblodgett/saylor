/*
 * Rock.cpp
 *
 *  Created on: Feb 2, 2019
 *      Author: annblodgett
 */

#include <iostream>
#include "Tool.h"
#include "Rock.h"
using namespace std;

Rock::Rock (int firstStrength):
Tool (firstStrength)
{

  type = 'r';

  cout << "I am a rock of strength " << getStrength () << endl;

}

Rock::~Rock ()
{
  // TODO Auto-generated destructor stub
}

bool
Rock::fight (Tool toolName)
{

  int power = getStrength ();

  if (toolName.getType () == 's')
    {
      power = power * 2;
    }
  else if (toolName.getType () == 'p')
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
