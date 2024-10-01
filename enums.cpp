#include<iostream>

using std::cout;
using std::cin;

enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
//par defaut 0->len(day)-1

int main()
{
    day today = monday;
    switch (today)
    {
    case monday:
        cout<<"its Monday \n";
        break;
    case tuesday:
        cout<<"its Tuesday \n";
        break;
    case wednesday:
        cout<<"its Wednesday \n";
        break;
    case thursday:
        cout<<"its Thursday \n";
        break;
    case friday:
        cout<<"its Friday \n";
        break;
    case saturday:
        cout<<"its Saturday \n";
        break;
    case sunday:
        cout<<"its Sunday \n";
        break;
    
    
    default:
        break;
    }
    return 0;
}