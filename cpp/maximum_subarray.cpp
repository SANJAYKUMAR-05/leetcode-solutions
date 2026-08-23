// ======================================
// LeetCode Problem: maximum subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-subarray/
// Synced by: LinkCode
// Date: 8/23/2026, 11:27:49 PM
// ======================================


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0,ans = INT_MIN;
        for(int num : nums)
        {
            sum += num;
            ans = max(ans,sum);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return ans;
    }
};