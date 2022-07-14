#include <iostream>
#include "./include/calculator.hpp"

int main()
{
    Calculator* calculator = new Calculator();

    calculator->assignXY(2, 3);
    std::cout << calculator->add() << std::endl;

    delete calculator;
    return 0;
}