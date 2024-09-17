#include<iostream>

using namespace std;

int main ()

{
    string ch,name,mail;
    cout<< "ch : ";
    getline(cin,ch);
    cout <<ch.length() <<endl ;
    cout <<ch.empty()<<endl ;
    cout<<"whats ur name ";
    getline(cin,name);
    mail=name.append("@gmail.com");
    cout << mail <<endl;

    for(int i=0;i<mail.length();i++){
        cout<<name.at(i)<<endl;

    }
    
    string amine="hello";
    cout<< name.insert(0,"@")<<endl;
    cout<< amine.find('e')<<endl;
    amine.erase(0,3);
    cout<<amine<<endl;

    return 0 ;
}