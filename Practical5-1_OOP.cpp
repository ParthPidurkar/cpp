#include <iostream>
using namespace std;
class Test
{
    int a,b;
	public:
	Test(int x,int y)
    {
	    a=x;
        b=y;
	}
	Test operator ++(int)
	{
		a++;
		b++;
	}
	Test operator --(int)
	{
		a--;
		b--;
	}
    void Display()
	{
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	}
};
int main()
{
Test t(10,20);
cout<<"Before : "<<endl;
t.Display();
t++;
cout<<"After : "<<endl;
t.Display();
return 0;
}