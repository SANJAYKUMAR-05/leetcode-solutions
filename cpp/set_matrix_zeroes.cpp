// ======================================
// LeetCode Problem: set matrix zeroes
// Language: cpp
// Link: https://leetcode.com/problems/set-matrix-zeroes/
// Synced by: LinkCode
// Date: 8/25/2026, 4:09:35 PM
// ======================================


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int colo = 1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if(j == 0)
                    {
                        colo = 0;
                    }
                    else
                    {
                        matrix[0][j] = 0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[0][i] = 0;
            }
        }
        if(colo == 0)
        {      
            for(int i=0;i<n;i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};