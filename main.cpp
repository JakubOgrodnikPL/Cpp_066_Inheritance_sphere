#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    float x,y;
    string name;

public:
    void show()
    {
        cout<<name<<"("<<x<<","<<y<<")"<<endl;
    }
    Point(string n="S", float a=0, float b=0)
    {
        name=n;
        x=a;
        y=b;
    }
};

class Circle :public Point
{
protected:
    float r;
private:
    string name;

public:
    void show()
    {
        cout<<"Circle: "<<name<<endl;
        cout<<"Center of the circle: "<<endl;
        Point::show();
        cout<<"Radius: "<<r<<endl;
        cout<<"Area of the circle: "<<M_PI*r*r<<endl;
    }

    Circle(string nc="Circle", string np="S", float a=0, float b=0, float ra=1)
    :Point(np,a,b)
    {
        name=nc;
        r=ra;
    }
};

class Sphere :public Circle
{
    string name;

public:
    void show()
    {
        cout<<"Sphere's name: "<<name<<endl;
        cout<<"Center of the Sphere: "<<endl;
        Point::show();
        cout<<"Radius: "<<r<<endl;
        cout<<"Volume of the sphere: "<<(4*M_PI*r*r*r)/3<<endl;
    }
        Sphere(string ns="Sphere",string ncc="Not Circle", string npp="S", float a=0, float b=0, float ra=1)
        :Circle(ncc,npp,a,b,ra)
        {
            name=ns;
        }
};

int main()
{
    //Circle c1;
    //c1.show();
    Sphere s1;
    s1.show();
    return 0;
}
