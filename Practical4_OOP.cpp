#include <iostream>
using namespace std;

class area
{
    int rad,len,wdt,a_rec;
    float a_cir;
    public:
    area();
    area(int r);
    area(int l, int w);
    void calculate(area p1, area p2);
    void show();
    ~area();
};
area :: area()
{
    a_cir = 0;
    a_rec = 0;
}
area :: area(int r)
{
    rad = r;
}
area :: area(int l, int w)
{
    len = l;
    wdt = w;
}
void area :: calculate(area p1, area p2)
{
    a_cir = 3.14*p2.rad*p2.rad;
    a_rec = p1.len * p1.wdt; 
}
void area :: show()
{
    cout<<"The area of the circle is: "<<a_cir<<endl;
    cout<<"The area of the rectangle is: "<<a_rec<<endl;
}
area :: ~area()
{
}
int main()
{
    int r,l,w;
    cout<<"Enter the value of radius of circle: ";
    cin>>r;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the width of the rectangle: ";
    cin>>w;
    area p1(l,w), p2(r);
    area p3;
    p3.calculate(p1,p2);
    p3.show();
    return 0;
}
