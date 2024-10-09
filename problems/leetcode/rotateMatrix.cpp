#include<iostream>
#include<vector>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        int n= matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n / 2; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - 1 - j];
                matrix[i][n - 1 - j] = temp;
            }
        }

        
    }
};

int main ()
{
     Solution s;
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    s.rotate(matrix);
    int n=matrix.size();
    for(int i =0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
               std::cout<<matrix[i][j]<<" ";
            }
            std::cout<<'\n';
        }

    
    return 0;
}

