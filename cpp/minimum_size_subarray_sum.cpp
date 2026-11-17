// ======================================
// LeetCode Problem: minimum size subarray sum
// Language: cpp
// Link: https://leetcode.com/problems/minimum-size-subarray-sum/
// Synced by: LinkCode
// Date: 11/17/2026, 1:36:58 PM
// ======================================


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int ans = INT_MAX;
        int sum = 0;
        for(int right = 0;right < n;right++)
        {
            sum += nums[right];
            while(sum > target)
            {
                sum -= nums[left];
                ans = min(ans,right - left + 1);
                left++;
            }
            if(sum == target)
            {
                ans = min(ans,right - left + 1);
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};