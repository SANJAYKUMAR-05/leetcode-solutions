// ======================================
// LeetCode Problem: valid palindrome
// Language: cpp
// Link: https://leetcode.com/problems/valid-palindrome/
// Synced by: LinkCode
// Date: 11/17/2026, 8:55:21 PM
// ======================================


class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};