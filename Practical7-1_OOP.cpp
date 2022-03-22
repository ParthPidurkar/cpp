#include <iostream>
using namespace std;
class Base
{
    public:
    void display1()
    {
        cout<<"This is Base class "<<endl;
    }
};
class derived:public Base
{
    public:
    void display2()
    {
        cout<<"This is derived class"<<endl;
    }
};
int main()
{
    derived d;
    d.display1();
    d.display2();
    return 0;
}