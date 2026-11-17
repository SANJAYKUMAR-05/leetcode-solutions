// ======================================
// LeetCode Problem: find pivot index
// Language: cpp
// Link: https://leetcode.com/problems/find-pivot-index/
// Synced by: LinkCode
// Date: 11/17/2026, 2:16:18 PM
// ======================================


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(),nums.end(),0);
        int left = 0;
        for(int i=0;i<n;i++)
        {
            int right = total - nums[i] - left;
            if(left == right)
            {
                return i;
            }
            left = left + nums[i];
        }
        return -1;
    }
};