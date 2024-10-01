#include<iostream>

using std::cout;
using std::cin;

int main()
{
    int N;
    cout<<"Enter a number: ";
    cin>>N;

    for(int i=1;i<N*2;i+=2)
    {
       cout<<i<<' ';
    }
    cout<<"\n";
    

    return 0;
}