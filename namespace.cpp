#include<iostream>


namespace first{
    int x=1;
}

namespace second{
    int x=2;
}

int main(){
    using namespace first;
    using namespace second;
  
    //Namespace provides a solution for preventing name conflicts 
    int x =0;
    std::cout <<x <<std:: endl;
    std::cout << first::x <<std:: endl;
    std::cout << second::x <<std:: endl;

    return 0;
}