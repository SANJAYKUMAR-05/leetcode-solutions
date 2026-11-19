// ======================================
// LeetCode Problem: permutation in string
// Language: cpp
// Link: https://leetcode.com/problems/permutation-in-string/
// Synced by: LinkCode
// Date: 11/19/2026, 10:09:38 PM
// ======================================


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        vector<int> freq(26,0);
        for(char c : s1)
        {
            freq[c-'a']++;
        }
        vector<int> curr(26,0);
        int l = 0;
        for(int i=0;i<s2.size();i++)
        {
            curr[s2[i] - 'a']++;
            if(i - l + 1 > n)
            {
                curr[s2[l] - 'a']--;
                l++;
            }
            if(curr == freq)
            {
                return true;
            }
        }
        return false;
    }
};