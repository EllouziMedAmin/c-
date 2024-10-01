#include<iostream>
template<typename T,typename U>
auto max(T a, U b){

    return a>b ? a:b;
}
int main(){

    std::cout<< max(1,2)<<"\n"<<max(1,2.4)<<std::endl<<max("1","2")<<std::endl;
    return 0;
}

