#include<iostream>
using namespace std;
int main()
{
    int p ,ir,t,si;
    cout<<"\n Enter Principal Amount :";
    cin>>p;
    cout<<"\n Enter Interest Rate :";
    cin>>ir;
    cout<<"\n Enter Time Taken :";
    cin>>t;
    si = p * ir * t;
    cout<<"Simple interest is :"<<si;
    return 0;
}