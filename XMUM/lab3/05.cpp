#include<iostream>

using std::cout;
using std::cin;

int main()
{
    int num,max;
    max=0;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        max = (num>max)?num:max;

    }while (num!=0);
    
    cout<<"\n";
    cout<<"Max number is: "<<max;
    
    cout<<"\n";
    return 0;
    
}