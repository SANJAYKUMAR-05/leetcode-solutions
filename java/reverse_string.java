// ======================================
// LeetCode Problem: reverse string
// Language: java
// Link: https://leetcode.com/problems/reverse-string/
// Synced by: LinkCode
// Date: 11/17/2026, 8:54:40 PM
// ======================================


class Solution {
    public void reverseString(char[] s) {
        int n = s.length;
        int left = 0;
        int right = n - 1;
        while(left<right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--; 
        }
    
    }
}