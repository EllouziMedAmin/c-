#include<iostream>
using std::cout;
using std::cin;
int main()
{
    double sumAges;
    sumAges=0;
    for (int i =0 ;i <10;i++)
    {
        cout<<"whats ur ages bro ? ";
        cin>>sumAges;

    }
    cout <<sumAges/10;
    return 0;

}