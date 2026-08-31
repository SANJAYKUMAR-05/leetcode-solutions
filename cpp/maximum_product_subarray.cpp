// ======================================
// LeetCode Problem: maximum product subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Synced by: LinkCode
// Date: 8/31/2026, 4:51:59 PM
// ======================================


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1,suffix = 1;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            prefix *= nums[i];
            suffix *= nums[n-i-1];
            maxi = max({maxi,prefix,suffix});
        }
        return maxi;
    }
};