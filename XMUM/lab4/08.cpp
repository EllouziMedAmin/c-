#include<iostream>
using namespace std;

void draw_square(int n);
int main()
{
    int n;
    cout<<"the size of the square : ";
    cin>>n;
    draw_square( n);

    return 0;

}
void draw_square(int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<"\n";

    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0||j==n-1)cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
     for (int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<"\n";

}