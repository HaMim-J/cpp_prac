#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect
{
private:
    int width, height;
public:
    Rect(){}
    Rect setWidth(int width){this->width = width;}
    Rect setHeigt(int height){this->height = height;}
    Rect(int width, int height){this->width=width; this->height=height;}
    friend bool equals(Rect r,Rect s);
};

bool equals(Rect r, Rect s){
    if (r.width==s.width&&r.height==s.height)   return true;
    else return false;    
}

int main(){
    Rect a(3,4), b(4,5),c,d;
    int x,y;
    if(equals(a,b)) cout<< "equal"<<endl;
    else cout<<"not equal"<<endl;

    cout<<"put width & height:";
    cin>>x>>y;
    c.setWidth(x);
    c.setHeigt(y);

    cout<<"put width & height:";
    cin>>x>>y;
    d.setWidth(x);
    d.setHeigt(y);
    if(equals(c,d)) cout<< "equal"<<endl;
    else cout<<"not equal"<<endl;
}
