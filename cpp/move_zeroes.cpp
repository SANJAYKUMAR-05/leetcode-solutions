// ======================================
// LeetCode Problem: move zeroes
// Language: cpp
// Link: https://leetcode.com/problems/move-zeroes/
// Synced by: LinkCode
// Date: 11/16/2026, 9:50:23 PM
// ======================================


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};