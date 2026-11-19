// ======================================
// LeetCode Problem: palindromic substrings
// Language: cpp
// Link: https://leetcode.com/problems/palindromic-substrings/
// Synced by: LinkCode
// Date: 11/19/2026, 10:00:21 PM
// ======================================


class Solution {
public:
    int isValid(string s,int l,int r)
    {
        int cnt = 0;
        while(l >= 0 && r < s.size())
        {
            if(s[l]==s[r])
            {
                l--;
                r++;
                cnt++;
            }
            else
            {
                break;
            }
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int maxi = 0;
        int start = 0;
        for(int i=0;i<n;i++)
        {
            int odd = isValid(s,i,i);
            int even = isValid(s,i,i+1);
            maxi += odd;
            maxi += even;
        }
        return maxi;
    }
};