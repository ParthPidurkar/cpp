#include <iostream>
using namespace std;

class Employee
{
    int e_id,base_salary,hra,da,it,net_salary;
    char name[50];
    public:
    void emp_details()
    {
        cout<<"\nEnter Employee Name: \t";
        cin>>name;
        cout<<"\nEnter Employee ID: \t";
        cin>>e_id;
        cout<<"\nEnter Base Salary: \t";
        cin>>base_salary;
        hra = 0.3*base_salary;
        da = 0.4*base_salary;
        it = 0.175*base_salary;
        net_salary = base_salary+hra+da-it;
    }
    void emp_display()
    {
        cout<<"\nEmployee Name:\t"<<name;
        cout<<"\nEmployee ID: \t"<<e_id;
        cout<<"\nBase Salary: \t"<<base_salary;
        cout<<"\nHouse Rent Allowances: \t"<<hra;
        cout<<"\nDaily Aloowances: \t"<<da;
        cout<<"\nIncome Tax: \t"<<it;
        cout<<"\nNet Salary: \t"<<net_salary<<endl;
    }
};
int main()
{
    int n,i;
    cout<<"Enter the number of employees: \t";
    cin>>n;
    Employee e[n];
    for(i=0;i<n;i++)
    {
        cout<<"\nEmployee "<<i+1<<" Enter your details: "<<endl;
        e[i].emp_details();
    }
    for(i=0;i<n;i++)
    {
        cout<<"\nEmployee "<<i+1<<" details: "<<endl;;
        e[i].emp_display();
    }
    return 0;
}