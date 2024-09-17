#include<iostream>

using namespace std;

int main(){

    string name ;
    int age ;
    string fullname;
    cout<<"what's your name broski !?" << endl;
    cin>> name ;
    cout<<"Welcome  " << name << endl ;
    cout<<"whats ur age "<< name << " ";
    cin >> age ;
    cout <<"Oh ur only "<<age <<endl ;
    cout <<"whats ur full name "<<name<<" ";
    // getline to get a string with spaces 
    
    getline(cin>>ws,fullname);
    // ws to prevent the \n
    cout <<"nice to meet you "<<fullname<<endl;


    return 0;

}