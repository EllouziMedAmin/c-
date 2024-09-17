#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    double a,b ,c;
    cout <<"A : ";
    cin >>a;
    cout <<"B : ";
    cin >>b;
    c =sqrt(pow(a,2)+pow(b,2));
    cout <<"hyp "<< a << " and "<< b <<"= " <<c<<endl;

    return 0;
}
