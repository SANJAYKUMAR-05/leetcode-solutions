// ======================================
// LeetCode Problem: subarray sum equals k
// Language: cpp
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Synced by: LinkCode
// Date: 11/17/2026, 1:47:12 PM
// ======================================


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0,left = 0;
        int ans = 0;
        if(k == 0)
        return 0;
        for(int right = 0;right < n;right++)
        {
            sum += nums[right];
            while(sum > k)
            {
                sum -= nums[left];
                left++;
            }
            if(sum == k)
            {
                ans++;
            }
        }
        return ans;
    }
};