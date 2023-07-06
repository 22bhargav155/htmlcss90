#include<iostream>
using namespace std;
int main()
{
 int a = 8, b = 6;
 a = a-b/2+(a%b);
 b = (2*a+2)/(a+b);
 cout<< a<< b;
 return 0;
}