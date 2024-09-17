#include<iostream>

int main ()
{
    int num,tries,user_num;
    srand(time(0));
    num=(rand()%11)+1;
    int i=1;
    do{
        std::cout<<"how many tries yo want ";
        std::cin>>tries;

    }while(tries<=0 || tries>5);
    do{
        i++;
        std::cout<<"guess the right number ";
        std::cin>>user_num;
    }while(i<=tries && user_num!=num);
        if (user_num==num){
            std::cout<<"congratulations , you won in "<<i <<" tries \n";
        }else{
            std::cout <<"you loose ,the right numner is "<<num <<"\n";
        }
    return 0 ;
}