#include<iostream>
using std::cout;
using std::cin;
std::string windSpeed(int n);
int main()
{   
    int user_wind_speed;
    cout<<"enter a wind speed : ";
    cin>>user_wind_speed;
    cout<< windSpeed(user_wind_speed)<<std::endl;

    return 0;
}

std::string windSpeed(int n)
{
    if(n<25)return "Not a strong wind ";
    else if(n<=38) return "Strong wind ";
    else if (n<=54) return " Gale ";
    else if (n<=72) return "Whole gale ";
    else return "Hurricane ";
}