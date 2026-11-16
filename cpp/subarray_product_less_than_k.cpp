// ======================================
// LeetCode Problem: subarray product less than k
// Language: cpp
// Link: https://leetcode.com/problems/subarray-product-less-than-k/
// Synced by: LinkCode
// Date: 11/16/2026, 11:17:05 PM
// ======================================


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
        {
            return 0;
        }
        int curr = 1,l = 0,ans = 0;
        for(int r=0;r<nums.size();r++)
        {
            curr *= nums[r];
            while(curr >= k)
            {
                curr /= nums[l];
                l++;
            }
            ans += (r - l + 1);
        }
        return ans;
    }
};