#include "../include/calculator.hpp"

Calculator::Calculator()
{
    assignXY(0, 0);
}

Calculator::~Calculator()
{
}

void Calculator::assignXY(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Calculator::add()
{
    return x + y;
}

int Calculator::subtract()
{
    return x - y;
}

int Calculator::multiply()
{
   return x * y; 
}

int Calculator::divide()
{
    return x / y;
}

