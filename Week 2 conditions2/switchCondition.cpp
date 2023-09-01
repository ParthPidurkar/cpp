#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Month Number : ";
    cin >> num;
    switch((num%2==0 && num < 8) || num == 11 ||num == 9 )
    {
        case 1:
        cout<<"30\n";
        default:
        cout<<("Invalid number\n");
    }

    switch((num%2!=0 && num <8) || num == 9 || num==10 ||num == 12 )
    {
        case 1:
        cout<<"31\n";
    }
    return 0;
}