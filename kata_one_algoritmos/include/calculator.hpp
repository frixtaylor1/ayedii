#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator
{
private:
    int x;
    int y;
public:
    Calculator();
    ~Calculator();
    void assignXY(int x, int y);
    int add();
    int subtract();
    int multiply();
    int divide();
};




#endif // CALCULATOR_HPP