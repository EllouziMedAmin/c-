#include<iostream>

int fact(int num);
int main () {


    std::cout<< fact(3)<<"\n" ;

    return 0;
}

int fact(int num)
{
    if (num>1){
        return num *fact(num-1);
    }else{
        return 1;
    }
}

