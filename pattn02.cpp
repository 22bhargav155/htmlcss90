#include <iostream>
using namespace std;
int main()
{
  int i,j;
  int n=5;
 
   for(i=1;i<=n;i++)
     {
 
        for(j=1;j<=n-i;j++)
         {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
         {
            cout<<(char)(j+64);
         }
        for(j=i-1;j>=1;j--)
         {
            cout<<(char)(j+64);
         }
 
         cout<<endl;
     }
 
  return 0;
}
