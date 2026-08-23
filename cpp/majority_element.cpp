// ======================================
// LeetCode Problem: majority element
// Language: cpp
// Link: https://leetcode.com/problems/majority-element/
// Synced by: LinkCode
// Date: 8/23/2026, 10:55:52 PM
// ======================================


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0,ele = 0;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                ele = nums[i];
                cnt = 1;
            }
            else if(ele == nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int cnt2 = 0;
        for(int num:nums)
        {
            if(ele==num)
            {
                cnt2++;
            }
        }
        return cnt2>n/2? ele : -1;
    }
};