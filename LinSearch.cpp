#include<iostream>
using namespace std;

int main()
{
	int i,j,b,flag;
	int a[100];
	cout<<"Enter the number element of array :-";
	cin>>i;
	cout<<"Enter the element of array :-";
	for(j=0;j<=i;j++)
	{
		cin>>a[j];
	}
	cout<<"Enter Number to search";
	cin>>b;
	for(j=0;j<=i;j++)
	{
		if(a[j]==b)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"Element Found at :-"<<j+1<<endl;
	}
	else
	{
		cout<<"Element not Found " ;
	}
}
