// ======================================
// LeetCode Problem: maximum absolute sum of any subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 8:34:32 PM
// ======================================


class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = nums[0],minSum = nums[0];
        int maxi = nums[0],mini = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxSum = max(nums[i],maxSum + nums[i]);
            maxi = max(maxi,maxSum);
            minSum = min(nums[i],minSum + nums[i]);
            mini = min(mini,minSum);
        }
        return max(maxi,abs(mini));
    }
};