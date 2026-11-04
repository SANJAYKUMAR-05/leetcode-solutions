// ======================================
// LeetCode Problem: rotting oranges
// Language: cpp
// Link: https://leetcode.com/problems/rotting-oranges/
// Synced by: LinkCode
// Date: 11/4/2026, 9:33:40 PM
// ======================================


class Solution {
public:
    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,1,0,-1};
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int fresh = 0;
        queue<pair<pair<int,int>,int>> q;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                    vis[i][j] = true;
                    fresh++;
                }
                else if(grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }
        int rotted = 0;
        int maxi = 0;
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            rotted++;
            for(int i=0;i<4;i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] && grid[nr][nc] == 1)
                {
                    int nt = t + 1;
                    q.push({{nr,nc},nt});
                    vis[nr][nc] = true;
                    maxi = max(maxi,nt);
                }
            }
        }
        if(rotted != fresh)
        {
            return -1;
        }
        return maxi;
    }
};