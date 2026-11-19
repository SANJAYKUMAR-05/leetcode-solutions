// ======================================
// LeetCode Problem: find all anagrams in a string
// Language: cpp
// Link: https://leetcode.com/problems/find-all-anagrams-in-a-string/
// Synced by: LinkCode
// Date: 11/19/2026, 10:05:49 PM
// ======================================


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> pre(26,0);
        for(int i=0;i<m;i++)
        {
            pre[p[i] - 'a']++;
        }
        vector<int> fre(26,0);
        vector<int> ans;
        int l = 0;
        for(int r=0;r<n;r++)
        {
           fre[s[r] - 'a']++;
           if(r - l + 1 > m)
           {
             fre[s[l] - 'a']--;
             l++;
           }
           if(fre == pre)
           {
                ans.push_back(l);
           }
        }
        return ans;
    }
};