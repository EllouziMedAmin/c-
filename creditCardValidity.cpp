#include<iostream>

#include <string>

using namespace std;
void doubledDigit (const string creditCard, int size );
int someDoubledDigit (const int doubledDigit_array  );
int someOdd(const string creditCard);
int check(const string creditCard);
int main()
{
    string creditCard;
    cout<<"card : ";
    cin>> creditCard ;
    int size=creditCard.length();
    doubledDigit(creditCard,size);


    return 0 ;

}

void  doubledDigit (const string creditCard,int size ){
    int array[size/2]={0};
    int j=0;
    for (int i=size-2;i>=0;i-=2){
       array[j]= stoi(creditCard[i])*2;
       j++;
    }
    for (int item :array){
        cout<<item<<" |";
    }
    cout<<"\n";

}
int someDoubledDigit (const int doubledDigit_array  ){
    return 0;
}
int someOdd(const string creditCard){
return 0;
}
int check(const string creditCard){
    
    return 0;
}