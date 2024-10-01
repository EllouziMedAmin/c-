#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> res;
        if (matrix.size() == 0)
            return res;
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0, right = col - 1, top = 0, bottom = row - 1;
        while (left <= right && top <= bottom)
        {
            for (int i = left; i <= right; i++)
                res.push_back(matrix[top][i]);
            for (int i = top + 1; i <= bottom; i++)
                res.push_back(matrix[i][right]);
            if (left < right && top < bottom)
            {
                for (int i = right - 1; i >= left; i--)
                    res.push_back(matrix[bottom][i]);
                for (int i = bottom - 1; i > top; i--)
                    res.push_back(matrix[i][left]);
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        return res;
    }
        
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    s.spiralOrder(matrix);
    
    return 0;
}
