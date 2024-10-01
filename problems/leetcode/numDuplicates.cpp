#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); 
        int i = 2;  
        for (int j = 2; j < nums.size(); j++) {
            if (nums[j] != nums[i - 2]) {  
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main() {
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    Solution s1;
    int k1 = s1.removeDuplicates(nums1);
    cout << "Output: " << k1 << ", nums = [";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << (i < k1 - 1 ? ", " : "");
    }
    cout << "]" << endl;
    
    vector<int> nums2 = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    Solution s2;
    int k2 = s2.removeDuplicates(nums2);
    cout << "Output: " << k2 << ", nums = [";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << (i < k2 - 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}
