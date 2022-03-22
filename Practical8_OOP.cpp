#include <iostream>
using namespace std;
class Base
{
    protected:
    int a, b;
    virtual void sum() = 0;
    Base(int a, int b){}
};
class Dereived : public Base
{
    public:
    Dereived(int x, int y) : Base(a, b)
    {
        a = x;
        b = y;
   }
    void sum()
    { 
        cout<<"Sum = " <<a+b<<endl; 
    }
};
int main()
{
    int w,s;
    cout<<"Enter two numbers : ";
    cin>>w>>s;
    Dereived obj(w, s);
    obj.sum();
    return 0;
}