// ======================================
// LeetCode Problem: count asterisks
// Language: cpp
// Link: https://leetcode.com/problems/count-asterisks/
// Synced by: LinkCode
// Date: 10/30/2026, 12:59:03 PM
// ======================================


class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();
        int st = false;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '|')
            {
                if(st)
                {
                    st = false;
                }
                else
                {
                    st = true;
                }
            }
            else if(s[i] == '*')
            {
                if(st == false)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};