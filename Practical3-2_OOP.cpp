#include <iostream>
using namespace std;

class Student
{
    int m1,m2,m3,m4,m5,m6,sum;
    float per;
    public:
    void getstudent()
    {
        cout<<"Max Marks Obtained are 100!"<<endl;
        cout<<"Enter marks obtained in Physics: "<<endl;
        cin>>m1;
        cout<<"Enter marks obtained in Chemistry: "<<endl;
        cin>>m2;
        cout<<"Enter marks obtained in Mathematics: "<<endl;
        cin>>m3;
        cout<<"Enter marks obtained in English: "<<endl;
        cin>>m4;
        cout<<"Enter marks obtained in Biology: "<<endl;
        cin>>m5;
        cout<<"Enter marks obtained in EVS: "<<endl;
        cin>>m6;
        sum = m1+m2+m3+m4+m5+m6;
        per = (sum*100)/600;
    }
    void displaystudent()
    {
        cout<<"\n\nTotal Marks Obtained :"<<sum<<endl;
        cout<<"Percentage Obtained are: "<<per<<endl;
    }
};

int main()
{
    int n,i;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;
    Student S[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n\nStudent "<<i+1<<" Enter your marks: "<<endl;
        S[i].getstudent();
    }
    for(i=0;i<n;i++)
    {
        S[i].displaystudent();
    }
    return 0;
}