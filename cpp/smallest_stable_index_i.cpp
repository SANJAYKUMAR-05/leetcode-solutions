// ======================================
// LeetCode Problem: smallest stable index i
// Language: cpp
// Link: https://leetcode.com/problems/smallest-stable-index-i/
// Synced by: LinkCode
// Date: 9/5/2026, 8:08:26 PM
// ======================================


class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n,0);
        vector<int> suf(n,0);
        int mini = INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            mini = min(mini,nums[i]);
            suf[i] = mini;
        }
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
            if((maxi - suf[i]) <= k)
            {
                return i;
            }
        }
        return -1;
    }
};