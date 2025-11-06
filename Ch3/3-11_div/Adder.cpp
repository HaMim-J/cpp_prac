#include "Adder.h"
Adder::Adder():Adder(0,0){}
Adder::Adder(int a, int b)
{
    op1 = a; op2 = b;
}

int Adder::process()
{
    return op1+op2;
}