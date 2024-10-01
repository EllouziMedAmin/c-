#include <iostream>
#include <vector>


class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int bigMax = nums[0];
        int currMax = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currMax = std::max(nums[i], currMax + nums[i]);
            bigMax = std::max(bigMax, currMax);
        }
        return bigMax;
    }
};

int main() {
    std::vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; 
    std::vector<int> b = {5,4,-1,7,8};
    Solution solution; 
    std::cout << "Maximum subarray sum for vector 1 is: " << solution.maxSubArray(a) << '\n'; 
    std::cout << "Maximum subarray sum for vector 2 is: " << solution.maxSubArray(b) << '\n';
    
    return 0;
}
