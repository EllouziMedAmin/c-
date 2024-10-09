#include<iostream>
using namespace std;
int calculator(int a ,int b, char op);
int main ()
{
    char op;
    int a,b;
    cout<<"Enter an arithmetic operator: ";
    cin>>op;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    cout<<calculator(a,b,op)<<endl;
    
    return 0;
}

int calculator(int a ,int b, char op)
{
    switch (op)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    default:
        return 0;
        break;
    }
    
}

