#include<iostream>
using namespace std;

class student
{
  int s_id[5];
  char s_name[100];

  public:
  void getdata();
  void displaydata();  
};

void student ::getdata()
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<" student ditels:\n";
        cout<<"Enter your enrollment number:";
        cin>>s_id[i];
        cout<<"Enter your name:";
        cin>>s_name;
    }
}

void student ::displaydata()
{
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<i+1<<".\n";
        cout<<"Student id is:";
        cout<<s_id[i]<<"\n";
        cout<<"Student name is:";
        cout<<s_name;
    }
} 

int main()
{
    student s;
    s.getdata();
    s.displaydata();
    return 0;
}