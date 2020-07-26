#include "LibB.h"
#include <iostream>

std::string LibB::name()
{
  return std::string("LibB");
}

void LibB::say_hi()
{
  std::cout << "Hi from: " << name() << std::endl;
}
