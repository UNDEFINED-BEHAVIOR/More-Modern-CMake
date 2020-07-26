#include <iostream>

#include "LibA.h"
#include "LibB.h"
#include "LibC.h"


int main(int argc, char* argv[])
{
  std::cout << "Hello from main.cpp" << std::endl;

  LibA::hi_fn();
  LibB().say_hi();
  LibC().say_hi();
}
