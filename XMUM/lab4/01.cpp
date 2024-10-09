#include<iostream>
using std::cout;
void display_all_prime_numbers();
int main ()
{
    display_all_prime_numbers();
    return 0;
}
bool isPrime(int num)
{
    int i= 2;
    while (num%i!=0 && i < num/2)
    {
        i++;


    }
    return num%i!=0;
    
}
void display_all_prime_numbers()
{
    for (int i = 1;i<=100;i++){
        if (isPrime(i))cout<<i<<std::endl;

    }

}