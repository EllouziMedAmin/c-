#include<iostream>
class Solution {
public:
    double myPow(double x, int n) {
        if (!(-100.0 < x && x < 100.0))return 0.0;
        if (!(-2147483648 <= n && n<= 2147483647))return 0.0;
        if (n==0)return 1;
        if (x==1.0)return 1;
        double res=x;

        return n>0 ? res*myPow(x,n-1):1/res*myPow(x,n-1);
    }
};
int main(){
    Solution s;
    std::cout<<s.myPow(2,10)<<std::endl;
    return 0;
}