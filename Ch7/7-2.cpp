#include <iostream>
using namespace std;

class Rect;

class RectManger
{
public:
    bool equals(Rect r, Rect s);
};

class Rect{
    int width, height;
    public:
    Rect(){}
    Rect setWidth(int width){this->width=width;}
    Rect setHeight(int height){this->height=height;}
    Rect(int width, int height){this->width=width; this->height=height;}
    friend bool RectManger::equals(Rect r, Rect s);
};

bool RectManger::equals(Rect r, Rect s){
    if (r.width==s.width&&r.height==s.height)   return true;
    else return false;
}

int main(){
    Rect a(3,4), b(4,5);
    RectManger man;
    if(man.equals(a,b)) cout<<"equal"<<endl;
    else cout<<"not equal"<<endl;

    int x,y;
    Rect c,d;
    cout<< "put width & height";
    cin>>x>>y;
    c.setWidth(x);
    c.setHeight(y);

    cout<< "put width & height";
    cin>>x>>y;
    d.setWidth(x);
    d.setHeight(y);

    if(man.equals(c,d)) cout<<"equal"<<endl;
    else cout<<"not equal"<<endl;
}