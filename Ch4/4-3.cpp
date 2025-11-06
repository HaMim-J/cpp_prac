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
    int a,b;
    cout<<"각 원의 반지름 입력:(2개)";
    cin>>a>>b;
    Circle circleArray[3];
    circleArray[0].setRadius(a);
    circleArray[1].setRadius(b);
    

    for (int i = 0; i < 3; i++)
    {
        if(circleArray[i].getArea()==3.14){
            return 0;
        }
        else
        cout<<"circle"<<i<<"의 면적은:"<<circleArray[i].getArea()<<endl;
    }
    
   
    return 0;
}