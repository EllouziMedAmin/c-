#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    do{
        if(n==1)
        {
            cout<<"you ve reached the end of the sequence and can stop. \n";
            break;
        }
        if (n%2==0)
        {
            cout<<n<<" is even so i divide it by 2 to get "<<n/2<<"\n";
            n=n/2;
        }
        else
        {
            cout<<n<<" is odd so i multiply it by 3 and add 1 to get "<<(n*3)+1<<"\n";
            n=(n*3)+1;
        }
        

    }while(n!=1);
    cout<<"you ve reached the end of the sequence and can stop. \n";
    return 0;
}
