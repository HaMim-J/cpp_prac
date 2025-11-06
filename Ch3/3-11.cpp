#include <iostream>
using namespace std;

class Adder
{
private:
    int op1,op2;
public:
    Adder();
    Adder(int a, int b);
    int process();
};
Adder::Adder():Adder(0,0){}
Adder::Adder(int a, int b)
{
    op1 = a; op2 = b;
}

int Adder::process()
{
    return op1+op2;
}

class Calculator
{
public:
    void run();
};

void Calculator::run()
{
    Adder add1;
    cout<<add1.process()<<endl;
    Adder add2(3,7);
    cout<<add2.process()<<endl;
    cout<<"두 수 입력:";
    int a,b;
    cin>>a>>b;
    Adder adder(a,b);
    cout<<adder.process();
}

int main(){
    Calculator calc;
    calc.run();
}
