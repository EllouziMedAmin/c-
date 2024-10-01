#include<iostream>

using std::cout;
class Stove {
    private:
    int temperature;
    public:
    Stove(int temperature){
        setTemperature(temperature);
    }

    //getter
    int getTemperature(){
        return temperature;
    }
    //setter
    void setTemperature(int temp){
        if (temp < 0){
            temperature = 0;
        }else if (temp > 10){
            temperature = 10;
        }else{
            temperature = temp;
        }
    }
    
   

};
int main()
{
    Stove stove1(5);
    cout << stove1.getTemperature() << "\n";
    stove1.setTemperature(15);
    cout << stove1.getTemperature() << "\n";
    stove1.setTemperature(-5);
    cout << stove1.getTemperature() << "\n";

    return 0 ;
}