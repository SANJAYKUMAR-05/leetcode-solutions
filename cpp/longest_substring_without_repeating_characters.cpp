// ======================================
// LeetCode Problem: longest substring without repeating characters
// Language: cpp
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Synced by: LinkCode
// Date: 11/19/2026, 10:06:52 PM
// ======================================


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(256,0);
        int l = 0;
        int ans = 0;
        for(int r = 0;r < s.size(); r++)
        {
            freq[s[r]]++;
            while(freq[s[r]] > 1 && l < r)
            {
                freq[s[l]]--;
                l++;
            }
            ans = max(ans,r - l + 1);
        }
        return ans;
    }
};