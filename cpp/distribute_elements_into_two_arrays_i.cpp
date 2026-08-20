// ======================================
// LeetCode Problem: distribute elements into two arrays i
// Language: cpp
// Link: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
// Synced by: LinkCode
// Date: 8/20/2026, 7:26:21 PM
// ======================================


class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        vector<int> a;
        vector<int> b;
        a.push_back(nums[0]);b.push_back(nums[1]);
        for(int k=2;k<n;k++)
        {
            int curr = nums[k];
            if(b[j] < a[i])
            {
                a.push_back(curr);
                i++;
            }
            else
            {
                b.push_back(curr);
                j++;
            }
        }
        vector<int> ans;
        for(int num : a)
        {
            ans.push_back(num);
        }
        for(int num : b)
        {
            ans.push_back(num);
        }
        return ans;
    }
};