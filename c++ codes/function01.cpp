#include<iostream>
using namespace std;
 void display();
  // function declaration or prototype 

 int main()
{
   display(); // function calling
   cout<<"\n main function called!!!";
   return 0;
}

void display() // function definaltion 
{
    cout<<"\n user- defined function called!!!";
        return 0;
}

