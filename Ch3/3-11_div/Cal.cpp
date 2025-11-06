#include <iostream>
using namespace std;

#include "Cal.h"
#include "Adder.h"

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