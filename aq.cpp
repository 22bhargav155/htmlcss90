/*#include <iostream>
using namespace std;

 int main()
{
    int d;

    cout<<"hello fucker in c++ world \n"<<endl;
    cout<<"hello wolrd 001 \n"<<endl;
return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int f;
    int a[4];
    char name[100];

   
    
    cout<<"Enter your number :";
    cin>>f;

    a[0]=350;
    a[1]=400;
    a[2]=500;
    a[3]=600;
 
    cout<<"Enter your name :";
    cin>>name;
    switch(f)
    {
        case 1:
        cout<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is "<<a[0] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;

        case 2:
        cout<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is" <<a[1] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;

        case 3:
        cout<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is"<< a[2] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;

        case 4:
        cout<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is "<<a[3] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;
    }

return 0;
}