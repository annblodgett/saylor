#include "Tool.h"

Tool::Tool (int firstStrength)
{
  strength = firstStrength;
}

Tool::~Tool ()
{
}

int
Tool::getStrength ()
{
  return strength;
}

char
Tool::getType ()
{
  return type;
}
