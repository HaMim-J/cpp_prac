#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r){radius = r;}
    double getArea(){return 3.14*radius*radius;}
};

Circle::Circle()
{
    radius =1;
    cout<<"생성자 실행 radius="<<radius<<endl;
}

Circle::Circle(int r)
{
    radius =r;
    cout<<"생성자 실행 radius="<<radius<<endl;
}
Circle::~Circle()
{
    cout<<"소멸자 실행 radius="<<radius<<endl;
}

int main(){
    int a;
    Circle *pArray=new Circle[5];
    /*pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);*/

    for (int i = 0; i < 5; i++)
    {
        cout<<"양수 입력:";
        cin>>a;
        if (a<1) break;
        pArray[i].setRadius(a);
        
    }
    

    for (int i = 0; i < 5; i++)
    {
        cout<<"Circle"<<i<<"면적:" <<pArray[i].getArea()<<endl;
    }

    /*Circle *p = pArray;
    for (int i = 0; i < 3; i++)
    {
        cout<<p->getArea()<<endl;
        p++;
    }*/

    delete []pArray;
    
    
}