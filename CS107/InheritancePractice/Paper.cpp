/*
 * Paper.cpp
 *
 *  Created on: Feb 2, 2019
 *      Author: annblodgett
 */

#include <iostream>
#include "Tool.h"
#include "Paper.h"
using namespace std;

Paper::Paper (int firstStrength):
Tool (firstStrength)
{

  type = 'p';

  cout << "I am a Paper of strength " << getStrength () << endl;

}

Paper::~Paper ()
{
  // TODO Auto-generated destructor stub
}

bool
Paper::fight (Tool toolName)
{

  int power = getStrength ();

  if (toolName.getType () == 'r')
    {
      power = power * 2;
    }
  else if (toolName.getType () == 's')
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
