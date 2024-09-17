#include<iostream>

using namespace std;
void show_balance(double balance);
double deposit();
double withdraw(double balance);


int main()
{
    double balance =0;
    int choice;
    
    do{
        cout<<"******************Welcome to ur bank acount******************\n";
        cout<<"1 . Show balance \n";
        cout<<"2 . Deposit\n";
        cout<<"3 . withdraw \n";
        cout<<"4 . Exit\n";
        cout<<"My choice is : ";
        cin>>choice;

       

        switch(choice)
        {
            case 1:
                show_balance(balance);
                break;

            case 2:
                balance+=deposit();
                show_balance(balance);
                 break;
            case 3:
                balance-=withdraw(balance);
                show_balance(balance);
                break;
            case 4:
                cout<<"have a good day \n";
                break;

            default:
                cout<<"invalid choice \n";
                break;
                
        }


    }while(choice!=4);



    return 0;

}



void show_balance(double balance)
{
    cout<<"your balance is "<<balance <<" $\n";
}

double deposit()
{
    double amount;
    cout <<"Enter your prefered amount to deposit : ";
    cin>>amount;
    return  amount>0 ?  amount :  0;
}
double withdraw(double balance)
{
    double amount;
    cout <<"Enter your prefered amount to withdraw : ";
    cin>>amount;
    return  (amount>=0 && amount<=balance) ?  amount :  0;



}