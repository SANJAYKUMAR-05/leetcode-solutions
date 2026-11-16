// ======================================
// LeetCode Problem: max consecutive ones
// Language: java
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Synced by: LinkCode
// Date: 11/16/2026, 11:02:37 PM
// ======================================


class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int max = 0;
        for(int num : nums)
        {
            if(num == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if(max < count)
            {
                max = count;
            }
        }
        return max;
    }
}