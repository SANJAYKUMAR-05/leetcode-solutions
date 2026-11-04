// ======================================
// LeetCode Problem: number of enclaves
// Language: cpp
// Link: https://leetcode.com/problems/number-of-enclaves/
// Synced by: LinkCode
// Date: 11/4/2026, 9:28:21 PM
// ======================================


class Solution {
public:
    void dfs(int n,int m,vector<vector<int>> &grid,int row,int col)
    {
        if(row<0 || row>=n || col<0 || col>=m || grid[row][col]==0)
        {
            return;
        }
        grid[row][col] = 0;
        dfs(n,m,grid,row-1,col);
        dfs(n,m,grid,row,col+1);
        dfs(n,m,grid,row+1,col);
        dfs(n,m,grid,row,col-1); 
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    if(grid[i][j]==1)
                    dfs(n,m,grid,i,j);
                }
            }
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};