#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,b,flag;
    int a[100];
    cout<<"Enter the number of elements of the array :- "<<endl;
    cin>>i;
    cout<<"Enter the elements of array :- "<<endl;
    for(j=0;j<i;j++)
    {
    cin>>a[j];
    }
    cout<<"Enter the elements to be search :-> "<<endl;
    cin>>b;
    for(j=0;j<=i;j++)
    {
        if (a[j]==b)
        {
            flag=1;
            break;
        }
        else
        {
         flag=0;
        }
    
    }
    if (flag==1)
    {
     cout<<"Element Found at "<<j+1<<endl;   
    }
    else
    {
        cout<<"Element not Found";
    }
    
}
