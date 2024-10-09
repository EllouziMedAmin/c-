#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n ;
    do{
    cout<<"give me a positive number";
    cin>>n;

    }while(n<0);
    cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;

}
int factorial(int n)
{
    if (n==0)return 1;
    return n * factorial(n-1);
}