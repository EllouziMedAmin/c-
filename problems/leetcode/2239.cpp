#include<iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int findClosestNumber(vector<int>& nums) ;
int main()
{
    vector<int> nums = {-4,-2,-1,1,4,8};
    cout<<findClosestNumber(nums)<<endl;
    return 0;
}



 int findClosestNumber(vector<int>& nums) 
 {
    int closest = nums[0];
    for(int i = 1; i < nums.size(); i++)
    {
        if(abs(nums[i] ) < abs(closest ))
        {
            closest = nums[i];
        }
        else if(abs(nums[i]) == abs(closest ))
        {
            closest = max(closest, nums[i]);
        }
    }
    return closest;
 }
