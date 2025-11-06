#ifndef ADDER_H
#define ADDER_H

class Adder
{
private:
    int op1,op2;
public:
    Adder();
    Adder(int a, int b);
    int process();
};
#endif

