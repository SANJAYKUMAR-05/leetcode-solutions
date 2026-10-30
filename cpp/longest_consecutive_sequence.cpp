// ======================================
// LeetCode Problem: longest consecutive sequence
// Language: cpp
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Synced by: LinkCode
// Date: 10/30/2026, 1:05:07 PM
// ======================================


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums)
        {
            st.insert(num);
        }
        int maxi = 0;
        for(int curr : nums)
        {
            int longest = 1;
            int start = curr - 1;
            if(st.find(start) == st.end())
            {
                int n = curr;
                while(st.find(n+1) != st.end())
                {
                    n++;
                    longest++;
                }
            }
            maxi = max(maxi,longest);
        }
        return maxi;
    }
};
