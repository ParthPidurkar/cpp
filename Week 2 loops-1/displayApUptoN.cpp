#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Number : ";
    cin>>n;
//    for(i=1; i<=2*n-1; i=i+2)
//     {
//         cout<<i<<endl;
//     }

//      separate variable
    int a=1;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a+=2;
    }
    
    return 0;
}