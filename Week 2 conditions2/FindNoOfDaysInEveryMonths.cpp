#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Month Number : ";
    cin >> num;
    switch(num)
    {
        case 1:
        cout<<"jan no of days = 31 \n";
        break;
        case 2:
        cout<<"feb no of days = 28\n";
        break;
        case 3:
        cout<<"march no of days = 31\n";
        break;
        case 4:
        cout<<"april no of days = 30\n";
        break;
        case 5:
        cout<<"may no of days = 31\n";
        break;
        case 6:
        cout<<"june no of days = 30\n";
        break;
        case 7:
        cout<<"july no of days = 31\n";
        break;
        case 8:
        cout<<"Aug no of days = 31\n";
        break;
        case 9:
        cout<<"sep no of days = 30\n";
        break;
        case 10:
        cout<<"oct no of days = 31\n";
        break;
         case 11:
        cout<<"nov no of days = 30\n";
        break;
        case 12:
        cout<<"decm no of days = 31\n";
        break;
        default :
        cout<<"Invalid Number";

    }
    return 0;
}