// ======================================
// LeetCode Problem: container with most water
// Language: cpp
// Link: https://leetcode.com/problems/container-with-most-water/
// Synced by: LinkCode
// Date: 11/16/2026, 9:55:24 PM
// ======================================


class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() -1;
        int ans = 0;
        while(l < r)
        {
            int h = min(height[l],height[r]);
            int w = r - l;
            ans = max(ans,h*w);
            if(height[l] < height[r])
            {
                l++;
            }
            else if(height[l] > height[r])
            {
                r--;
            }
            else
            {
                l++;
                r--;
            }
        }
        return ans;

    }
};