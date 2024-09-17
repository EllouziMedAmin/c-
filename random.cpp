#include<iostream>

int main()
{
    int fin=6;
    int deb=0;
    srand(time(NULL));
    int num =(rand()%fin+1)+deb;
    std::cout<<num <<std::endl;

    return 0;
}