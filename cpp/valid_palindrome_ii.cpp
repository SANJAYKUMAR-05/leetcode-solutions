// ======================================
// LeetCode Problem: valid palindrome ii
// Language: cpp
// Link: https://leetcode.com/problems/valid-palindrome-ii/
// Synced by: LinkCode
// Date: 11/19/2026, 9:48:54 PM
// ======================================



class Solution {
public:
    bool check(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return check(s, left + 1, right) ||
                       check(s, left, right - 1);
            }

            left++;
            right--;
        }

        return true;
    }
};
