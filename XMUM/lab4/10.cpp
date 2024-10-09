#include<iostream>
using namespace std;
int main()
{
    int item;
    double sum=0;
    do {
        cout<<"Enter the code of the item 1..4 : ";
        cin>>item;
        switch (item)
        {
        case 1:
            sum+=2.90;
            cout<<"Total purchase : "<<sum<<endl;
            break;
        case 2:
            sum+=3.50;
            cout<<"Total purchase : "<<sum<<endl;
            break;
        case 3:
            sum+=5.00;
            cout<<"Total purchase : "<<sum<<endl;
            break;
        case 4:
            sum+=6.90;
            cout<<"Total purchase : "<<sum<<endl;
            break;
        case -1:
            cout<<"Final purchase : "<<sum<<endl;
            break;
        
        default:
            break;
        }
        

    }while (item!=-1);
    
    
    return 0;
}