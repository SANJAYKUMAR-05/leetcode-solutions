// ======================================
// LeetCode Problem: maximum sum of distinct subarrays with length k
// Language: cpp
// Link: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
// Synced by: LinkCode
// Date: 11/16/2026, 11:01:26 PM
// ======================================


class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        long long sum = 0, ans = 0;
        int left = 0;
        long long maxi = 0;
        for(int right = 0;right < n;right++)
        {
            sum += nums[right];
            freq[nums[right]]++;
            if(right - left + 1 > k)
            {
                sum -= nums[left];
                freq[nums[left]]--;
                if(freq[nums[left]] == 0)
                {
                    freq.erase(nums[left]);
                }
                left++;
            }

            if(right - left + 1 == k && freq.size() == k)
            {
                    maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};