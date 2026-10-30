// ======================================
// LeetCode Problem: trapping rain water
// Language: cpp
// Link: https://leetcode.com/problems/trapping-rain-water/
// Synced by: LinkCode
// Date: 10/30/2026, 12:39:28 PM
// ======================================


class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int ans = 0;
        while(left <= right)
        {
            if(leftMax <= rightMax)
            {
                if(leftMax <= height[left])
                {
                    leftMax = height[left];
                }
                else
                {
                    ans = ans + (leftMax - height[left]);
                }
                left++;
            }
            else
            {
                if(rightMax <= height[right])
                {
                    rightMax = height[right];
                }
                else
                {
                    ans = ans + (rightMax - height[right]);
                }
                right--;
            }
        }
        return ans;
    }
};