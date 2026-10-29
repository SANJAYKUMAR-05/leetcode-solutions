// ======================================
// LeetCode Problem: maximum product of two elements in an array
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Synced by: LinkCode
// Date: 10/29/2026, 10:57:48 PM
// ======================================


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n-1] - 1)*(nums[n-2] - 1);
    }
};