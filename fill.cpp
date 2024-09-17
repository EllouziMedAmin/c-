#include<iostream>

int main()

{
    const int SIZE =100;
    std::string foods[SIZE];

    fill(foods,foods+SIZE,"Twiti");

    for(std::string item :foods)
    {
        std::cout<<item << " | ";
    }
    std::cout<<"\n";
    std::cout<<sizeof(foods)/sizeof(foods[0])<<"\n";

    return 0;
}