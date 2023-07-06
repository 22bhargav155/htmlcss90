#include<iostream>
using namespace std;

int main()
{
    int a[5],i;
    cout<<"Enter five subject marks:\n";
    for(i=0;i<=5;i++)
    {
        cout<<"Enter "<<i+1<<" student mark:";
        cin>>a[i]; 
    }
    cout<<"The mark of five subject :\n";
    for(i=0;i<=5;i++)
    {
        cout<<"The "<<i+1<<" student mark is :"<<a[i]<<endl;
    }
    return 0;
}