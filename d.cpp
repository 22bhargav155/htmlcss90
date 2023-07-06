#include<iostream>
using namespace std;
int main()
{
    char name[50];
    int count =0;
    cout<<"\n Enter your name:";
    cin.getline (name,50);
    //get -(name);
    for ( int i=0 ; name[i] !='\0'; i++)
    count ++;
    cout<<"\n the length of the steing is= "<<count;
    return 0;   
}
// shared by kingsman90
