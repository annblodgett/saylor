/*
 * Tool.h
 *
 *  Created on: Feb 1, 2019
 *      Author: annblodgett
 */

#ifndef TOOL_H_
#define TOOL_H_

//Tool is an abstract class

class Tool
{
private:
  int strength;
protected:
  char type;
public:
    Tool (int firstStrength);
    virtual ~ Tool ();
  int getStrength ();
  char getType ();
};
#endif /* TOOL_H_ */
