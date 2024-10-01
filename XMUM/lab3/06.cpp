#include<iostream>

using std::cout;
using std::cin;

int main ()
{

    double  hrate;
    int hours;

    do
    {
        cout<<" How many hours did u worked : ";
        cin>>hours;
        if (hours==-1)
        {
            break;
        }
        cout<<" What is your hourly rate : ";
        cin>>hrate;
        
        hours >=40 ? cout<<" Your pay is "<<(40*hrate)+((hours-40)*(hrate*1.5)) : cout<<" Your pay is "<<hours*hrate;
        cout<<std::endl;
        
    } while (hours!=-1);
    cout<<" Bye Bye "<<std::endl;
    

    return 0;
}