/*
 * Paper.h
 *
 *  Created on: Feb 2, 2019
 *      Author: annblodgett
 */

#ifndef PAPER_H_
#define PAPER_H_

#include "Tool.h"

class Paper:public Tool
{
public:
  Paper (int firstStrength);
    virtual ~ Paper ();
  virtual bool fight (Tool toolName);
};

#endif
