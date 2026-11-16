// ======================================
// LeetCode Problem: two sum ii input array is sorted
// Language: cpp
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Synced by: LinkCode
// Date: 11/16/2026, 9:42:43 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int right = n - 1;
        int left = 0;
        int sum = 0;
        while(left < right)
        {
            int sum = numbers[left] + numbers[right];
            if(sum == target)
            {
                return {left+1,right+1};
            }
            else if(sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {-1,-1};
    }
};