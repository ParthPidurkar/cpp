#include <iostream>  
using namespace std;  
int main()  
{  
int a[r][c],b[r][c],mul[r][c],sum[r][c];,r,c,i,j,k,ch;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"Enter 1 for Addition of matrix :- \n";
cout<<"Enter 2 for Multiplication of matrix :-\n";
cin>>ch;
if(ch==1)
{
    for( i=0;i<r;i++)
    {
	
     for(int j=0;j<c;j++)
     {
	 
      sum[i][j]=a[i][j]+b[i][j];
  }
  }
    cout<<"Addition of the matrices :\n";
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       cout<<sum[i][j]<<" ";
       cout<<endl;
    }
}

else if (ch==2)
{
cout<<"multiply of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}        
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}  
}
return 0;  
}    
