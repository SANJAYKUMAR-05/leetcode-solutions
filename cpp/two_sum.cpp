// ======================================
// LeetCode Problem: two sum
// Language: cpp
// Link: https://leetcode.com/problems/two-sum/
// Synced by: LinkCode
// Date: 8/20/2026, 2:11:06 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            int current =  target - nums[i];
            if(mpp.find(current)!=mpp.end())
            {
                return{mpp[current],i}; 
            }
            mpp[nums[i]] = i; 
        }

        return{};
    }
};