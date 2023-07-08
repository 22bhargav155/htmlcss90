#include <iostream>
using namespace std;
// function chap in always assign value right to left. 
void multiple (int num1, int num2=40);
int main()
{
  multiple (30);
    return 0;
}

    void multiple (int n1, int n2)
    {
         int ans;
         ans=n1*n2;
         cout<<ans;
    }
    