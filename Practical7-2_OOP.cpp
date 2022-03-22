#include <iostream>
using namespace std;
class Base1
{
    public:
    void display1()
    {
        cout<<"This is Base class 1 "<<endl;
    }
};
class Base2
{
    public:
    void display2()
    {
        cout<<"This is Base class 2"<<endl;
    }
};
class derived:public Base1, public Base2
{
    public:
    void display3()
    {
        cout<<"This is derived class"<<endl;
    }
};
int main()
{
    derived d;
    d.display1();
    d.display2();
    d.display3();
    return 0;
}