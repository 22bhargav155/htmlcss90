
// shared files 
#include<iostream>
using namespace std;

int main()
{
    long int i,n,rem,rev=0,a;
    cout<<"Enter the choice=";
    cin>>n;
    a=n;
    while(n>0)
    {
       rem=n%10;
       rev=rev+(rem*rem*rem);
       n=n/10;
    }
    cout<<rev;
    if(a==rev)
    {
      cout<<"number is Armstrong";
    }
    else
    {
      cout<<"number is not Armstrong";
    }
    return 0;
}