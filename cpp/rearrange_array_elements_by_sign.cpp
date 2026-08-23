// ======================================
// LeetCode Problem: rearrange array elements by sign
// Language: cpp
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Synced by: LinkCode
// Date: 8/24/2026, 12:04:34 AM
// ======================================


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos = 0,neg = 1;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos] = nums[i];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};