// ======================================
// LeetCode Problem: max consecutive ones iii
// Language: cpp
// Link: https://leetcode.com/problems/max-consecutive-ones-iii/
// Synced by: LinkCode
// Date: 11/16/2026, 11:06:56 PM
// ======================================


class Solution {
public:

    int longestOnes(vector<int>& nums, int k) {

        int l = 0;

        int zero = 0;

        int maxi = 0;

        for(int r = 0; r < nums.size(); r++)
        {
            if(nums[r] == 0)
            {
                zero++;
            }

            while(zero > k)
            {
                if(nums[l] == 0)
                {
                    zero--;
                }

                l++;
            }

            maxi = max(maxi, r - l + 1);
        }

        return maxi;
    }
};