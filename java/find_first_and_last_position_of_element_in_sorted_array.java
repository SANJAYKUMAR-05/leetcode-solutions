// ======================================
// LeetCode Problem: find first and last position of element in sorted array
// Language: java
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Synced by: LinkCode
// Date: 11/19/2026, 10:29:50 PM
// ======================================


class Solution {
    public int[] searchRange(int[] nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return new int[] {first, last};
    }

    // Find first occurrence (leftmost)
    private int findFirst(int[] nums, int target) {
        int left = 0, right = nums.length - 1;
        int index = -1;
        while (left <= right) {
         int mid = left + (right - left) / 2;
           if(nums[mid] == target)
           {
            index = mid;
            right = mid - 1;
           }
           else if(nums[mid]>target)
           {
            right = mid -1;
           }
           else
           {
            left = mid + 1;
           }
        }
        return index;
    }

    // Find last occurrence (rightmost)
    private int findLast(int[] nums, int target) {
        int left = 0, right = nums.length - 1;
        int index = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                index = mid;
                left = mid + 1;  // Continue searching to the right
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return index;
    }
}
