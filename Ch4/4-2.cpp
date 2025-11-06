#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius =r;}
    void setRadius(int r){radius = r;}
    double getArea();
};

double Circle::getArea(){return 3.14*radius*radius;}


int main(){
    int a,b,c;
    cout<<"각 원의 반지름 입력:(3개)";
    cin>>a>>b>>c;
    Circle circleArray[3];
    circleArray[0].setRadius(a);
    circleArray[1].setRadius(b);
    circleArray[2].setRadius(c);

    for (int i = 0; i < 3; i++)
    {
        cout<<"circle"<<i<<"의 면적은:"<<circleArray[i].getArea()<<endl;
    }
    
    Circle *p = circleArray;
    for (int i = 0; i < 3; i++)
    {
        cout<<"circle"<<i<<"의 면적은:"<<p->getArea()<<endl;
        p++;
    }
    return 0;
}