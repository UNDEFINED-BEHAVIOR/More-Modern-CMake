#include <iostream>

#include "LibA.h"
#include "LibC.h"


int main(int argc, char* argv[])
{
    std::cout << "squaring 3" << std::endl;
    std::cout << LibA::squared(3) << std::endl;

    LibC libc{};

    std::cout << "perform 10 - 5" << std::endl;
    std::cout << libc.minus_5(10) << std::endl;
    std::cout << "perform 10 - 2, using base class method of LibC" << std::endl;
    std::cout << libc.minus_2(10) << std::endl;
}
