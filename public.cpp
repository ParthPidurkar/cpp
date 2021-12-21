#include <bits/stdc++.h>
using namespace std;
class player
{
    public:
     char name= 'abc';
     int age= 25;
    char power= 'fiying';
     void print()
    {
       cout <<"NAME ="<<name<<endl;
       cout <<"AGE ="<<age<<endl;
       cout <<"power ="<<power;
    }
};
int main() 
{
 player p1;
 p1.print();
    
}