#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min= __INT32_MAX__;
       int max=0;
       int profit=0;
       for (int i=0;i<prices.size();i++)
       {
           if (prices[i]<min)
           {
            min =prices[i];
           }
           profit=prices[i]-min;
           if (profit >max )max=profit;


        
        }
        return max;

    }
};


int main ()
{

    Solution s;
    vector<int> t = {2,4,1};
    cout<<s.maxProfit(t)<<'\n';

    return 0;

}