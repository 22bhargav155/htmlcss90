#include<iostream>
using namespace std;

int main()
{
    long int n,rem,rev=0,a;
    cout<<"Enter the choice";
    cin>>n;
    a=n;
    while(n>0) 
    {
       rem=n%10;
       rev=rev*10;
       rev=rev+rem;
       n=n/10;
    }
      cout<<rev; 
    
    if(a==rev)
    {
      cout<<"number is palindrome";
    }
    else
    {
      cout<<"number is not palindrome";
    }
    
    return 0;
}