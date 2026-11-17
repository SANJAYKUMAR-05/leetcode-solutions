// ======================================
// LeetCode Problem: maximum sum circular subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-sum-circular-subarray/
// Synced by: LinkCode
// Date: 11/17/2026, 8:33:06 PM
// ======================================


class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMin = 0,currMax = 0,maxi = INT_MIN,mini = INT_MAX;
        //kadanes algorithm and track the total and remove the waste minimum array 
        int tot = 0;
        for(int num : nums)
        {
            tot += num;
            if(currMax + num > num)
            {
                currMax += num;
            }
            else
            {
                currMax = num;
            }
            maxi = max(currMax,maxi);
            if(currMin + num < num)
            {
                currMin += num;
            }
            else
            {
                currMin = num;
            }
            mini = min(currMin,mini);
        }
        if(maxi > 0)
        {
            return max(maxi,tot - mini);
        }
        return maxi;
    }
};