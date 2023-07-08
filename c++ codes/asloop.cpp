#include<iostream>
using namespace std;

int main()
{
     int mark[5],i;

     cout<<"Enter The Marks : "<<"\n";
     
     for(i=0;i<5;i++)
     {
        cout<<"enter the marks : "<<i+1<<"subject = ";
        cin>>mark[i];
     }
     cout<<"the marks of five sub : "<<"\n";
     for(i=0;i<5;i++)
     {
        cout<<"the enter marks for "<<i+1<<"sub = ";
        cout<<mark[i]<<"\n";
     }
}