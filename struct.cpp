#include<iostream>
struct car{
    std::string brand;
    std::string model;
    int year;
    std::string color;
};
using std::cout;
using std::cin;
void printCar(car myCar);
void paintCar(car &myCar, std::string newColor);
int main()
{   
    car myCar;
    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.year = 1969;
    myCar.color = "Red";
    printCar(myCar);
    paintCar(myCar, "Blue");
    printCar(myCar);
    
    return 0;
}

void printCar(car myCar)
{
    cout << myCar.brand << " " << myCar.model << " " << myCar.year << " " << myCar.color << "\n";
}
void paintCar(car &myCar, std::string newColor)
{
    myCar.color = newColor;
}