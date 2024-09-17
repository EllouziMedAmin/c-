#include <iostream>


using namespace std;

int main (){


    const int SIZE = 5;
    string array[SIZE];
    string temp;
    for (int i=0; i<SIZE;i++)
    {
        cout<<"element num "<<i+1 <<" or q to stop ";
        cin>>temp;
        if (temp=="q" || temp=="Q")
        {
            break;
        }
        else
        {
            array[i]=temp;
        }
    }

    for (string item:array){
        cout<<item<<"  ";
    }
    cout<<"\n";
return 0;
}