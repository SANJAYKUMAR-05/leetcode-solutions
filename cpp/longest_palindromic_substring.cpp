// ======================================
// LeetCode Problem: longest palindromic substring
// Language: cpp
// Link: https://leetcode.com/problems/longest-palindromic-substring/
// Synced by: LinkCode
// Date: 11/19/2026, 10:03:28 PM
// ======================================


class Solution {
public:
    int isValid(string s,int l,int r)
    {
        while(l >= 0 && r < s.size())
        {
            if(s[l]==s[r])
            {
                l--;
                r++;
            }
            else
            {
                break;
            }
        }
        return r - l - 1;
    }
    string longestPalindrome(string s) { // O(n^2);
        int n = s.size();
        int maxi = 0;
        int start = 0;
        if(n == 1)return s;
        for(int i=0;i<n-1;i++)
        {
            int odd = isValid(s,i,i);
            int even = isValid(s,i,i+1);
            int maxLen = max(odd,even);
            if(maxLen > maxi)
            {
                maxi = maxLen;
                start = i - (maxLen - 1) / 2;
            }
        }
        return s.substr(start,maxi);
    }
};