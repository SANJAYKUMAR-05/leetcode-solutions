// ======================================
// LeetCode Problem: reverse degree of a string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-degree-of-a-string/
// Synced by: LinkCode
// Date: 9/20/2026, 10:02:30 PM
// ======================================


class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int pos  = 26 - (s[i] - 'a');
            ans = ans + ((i+1) * pos);
        }
        return ans;
    }
};