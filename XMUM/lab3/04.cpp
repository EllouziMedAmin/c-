#include<iostream>

using std::cout;


int main()
{
   

    for(int i=1;i<=50;i++)
    {
       i%2==0 ? cout<<i<<" is even":cout<<i<<" is odd";
        cout<<"\n";
    }
    

    return 0;
}