/*
 * Scissors.h
 *
 *  Created on: Feb 2, 2019
 *      Author: annblodgett
 */

#ifndef Scissors_H_
#define Scissors_H_

#include "Tool.h"

class Scissors:public Tool
{
public:
  Scissors (int firstStrength);
    virtual ~ Scissors ();
  virtual bool fight (Tool toolName);
};

#endif
