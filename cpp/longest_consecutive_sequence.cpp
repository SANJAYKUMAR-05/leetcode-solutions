// ======================================
// LeetCode Problem: longest consecutive sequence
// Language: cpp
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Synced by: LinkCode
// Date: 10/30/2026, 1:05:21 PM
// ======================================


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> numset(nums.begin(),nums.end());
        int longest = 0;
        for(int num : numset)
        {
            if(numset.find(num-1) == numset.end())
            {
                int current = num;
                int streak = 1;
                while(numset.find(current+1)!=numset.end())
                {
                    current = current + 1;
                    streak = streak + 1;
                }
                if(streak > longest)
                {
                    longest = streak;
                }
            }
        } 
        return longest;
    }
};