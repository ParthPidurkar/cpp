#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Number : ";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a*=2;
    }
    
    return 0;
}