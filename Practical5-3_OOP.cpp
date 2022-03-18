#include<iostream>
using namespace std;
class Demo
{
    
    public:
	int Sum(int,int);
	int Sum(int,int,int);
	int Sum(int,int,int,int,int);
};

int Demo::Sum(int a,int b)
{
	return(a+b);
}
int Demo::Sum(int a,int b,int c)
{
	return(a+b+c);
}
int Demo::Sum(int a,int b,int c,int d,int e)
{
    return(a+b+c+d+e);
}

main()
{
Demo d;
cout<<d.Sum(10,20);
cout<<"\t";
cout<<d.Sum(20,30,40);
}