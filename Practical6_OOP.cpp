#include <iostream>
using namespace std;
class inches;
class feet
{
    float ft;
    public:
    void getft()
    {
        cout<<"Enter value in feets: ";
        cin>>ft;
    }
    void friend convert(feet, inches);
};
class inches
{
    int in;
    public:
    void friend convert(feet, inches);
};
int main()
{
    feet f1;
    inches in1;
    f1.getft();
    convert(f1,in1);
    return 0;
}
void convert(feet f1, inches in1)
{
    float res;
    res = f1.ft * 12;
    cout<<"The value in inches is: "<<res<<endl;  
}
