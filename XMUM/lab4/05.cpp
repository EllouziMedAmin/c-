#include<iostream>
using namespace std;

int main ()
{
    int n;
    char c;
    do {
        cout<<"enter an integer : ";
        cin>>n;
        if (n%3==0)cout<<"the integer "<<n<<" is divisible by 3"<<endl; 
        else cout<<"the integer "<<n<<" is not divisible by 3"<<endl;
        cout<<"do you want to continue? (Y for yes, N for no): ";
        cin>>c;

    }while (c=='Y'||c=='y');
    cout<<"Program End \n";


    return 0;

}