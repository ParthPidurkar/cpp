#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter Problem :-  ";
    cin>>a>>op>>b;
    switch(op)
    {
        case '+':
        cout<<"Sum = "<<a+b<<endl;
        break;
        case '-':
        cout<<"Sub = "<<a-b<<endl;
        break;
        case '*':
        cout<<"Mul = "<<a*b<<endl;
        break;
        case '/':
        cout<<"Div = "<<a/b<<endl;
        break;
        case '%':
        cout<<"Mod = "<<a%b<<endl;
        break;
        default :
        cout<<"Invalid operator";

    }
    return 0;
}