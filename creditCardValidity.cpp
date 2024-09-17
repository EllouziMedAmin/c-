#include<iostream>
using namespace std;

int checkCard(string card);
int main(){
    string Card;
    cout<<"Card : ";
    cin>> Card;
    //cout<<Card <<"\n";
    string statue;
    statue= checkCard(Card)==1 ? "Valid ":"Invalid";
    cout<<statue<<endl;


    return 0;
}

int checkCard(string card){
    int size=card.length();
    int even=0;
    int odd=0;
    int doubled;
    for (int i=size-2;i>=0 ;i-=2)
    {
        doubled=(int)(card[i]-'0')*2;
        if (doubled >9)
        {
            even+=1;
            even+=doubled % 10;

        }else{

            even+= doubled;
        }
    }
    cout<<even<<endl;
    for (int i=size-1;i>=0;i-=2)
    {
        odd+=(int)(card[i]-'0');
    }


    return (even+odd)%10==0 ? 1:0 ;
}

