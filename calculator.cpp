#include<iostream>

int main () 
{
    double num1,num2,res;
    char op;

    std::cout <<"choose an operator (+ - / *)";
    std::cin >>op;
    std::cout <<"NUM1 :";
    std::cin >>num1;
    std::cout <<"NUM2 :";
    std::cin >>num2;

    switch (op)
    {
    case '-':
        res=num1-num2;
        break;
    case '*':
        res=num1*num2;
        break;
    case '/':
        res=num1/num2;
        break;
    case '+':
        res=num1+num2;
        break;
    
    default:
        break;
    }
std::cout <<num1 <<" "<<op<<" "<<num2<<"  = "<<res<<std::endl;

}