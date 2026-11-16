// ======================================
// LeetCode Problem: subarrays with k different integers
// Language: cpp
// Link: https://leetcode.com/problems/subarrays-with-k-different-integers/
// Synced by: LinkCode
// Date: 11/16/2026, 11:43:08 PM
// ======================================


class Solution {
public:
    int func(vector<int>& nums,int k)
    {
        unordered_map<int,int>seen;
        int n = nums.size();
        int l = 0,ans = 0;
        for(int r=0;r<n;r++)
        {
            seen[nums[r]]++;
            while(seen.size() > k)
            {
                seen[nums[l]]--;
                if(seen[nums[l]] == 0)
                {
                    seen.erase(nums[l]);
                }
                l++;
            }
            ans += (r - l + 1);

        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};