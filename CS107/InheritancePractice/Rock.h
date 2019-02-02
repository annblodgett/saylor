/*
 * Rock.h
 *
 *  Created on: Feb 2, 2019
 *      Author: annblodgett
 */

#ifndef ROCK_H_
#define ROCK_H_

#include "Tool.h"

class Rock:public Tool
{
public:
  Rock (int firstStrength);
    virtual ~ Rock ();
  virtual bool fight (Tool toolName);
};

#endif /* ROCK_H_ */
