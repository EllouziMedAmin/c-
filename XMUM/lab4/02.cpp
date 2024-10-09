#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int number;
    cout<<"give me any number : ";
    cin>> number;
   string inverse = to_string(number);
   for (int i = inverse.length()-1;i>=0;i--)
   {
    cout<<inverse[i];
   }
   cout<<"\n";



    return 0;
}