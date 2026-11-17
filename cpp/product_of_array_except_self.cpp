// ======================================
// LeetCode Problem: product of array except self
// Language: cpp
// Link: https://leetcode.com/problems/product-of-array-except-self/
// Synced by: LinkCode
// Date: 11/17/2026, 2:10:36 PM
// ======================================


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n,1);
        vector<int> rightSum(n,1);
        for(int i=1;i<n;i++)
        {
            leftSum[i] = nums[i-1] * leftSum[i - 1];
        }
        for(int i=n-2;i>=0;i--)
        {
            rightSum[i] = nums[i + 1] * rightSum[i + 1];
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(i == 0) ans[i] = rightSum[i];
            else if(i == n - 1) ans[i] = leftSum[i];
            else
             ans[i] = leftSum[i] * rightSum[i];
        }
        return ans;
    }
};