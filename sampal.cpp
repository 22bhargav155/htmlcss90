#include<iostream>
using namespace std;
int main()
{
    int f,a[4];
    char name;

    a[0]=350;
    a[1]=350;
    a[2]=350;
    a[3]=350;

    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your number :";
    cin>>f;

    switch(f)
    {
        case 1:
        cuot<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is "<<a[0] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;

        case 2:
        cuot<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is" <<a[1] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;

        case 3:
        cuot<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is"<< a[2] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;

        case 4:
        cuot<<"Dear "<<name<<"\n";
        cout<<"Remainder - rent of your floor "<<f<<" and its rent is "<<a[3] <<".due to pay in time line\n";
        cout<<"\t\t\t\t\t yours faityfully"<<endl;
        cout<<"\t\t\t\t\t the manager"<<endl;
        break;
    }

return 0;
}