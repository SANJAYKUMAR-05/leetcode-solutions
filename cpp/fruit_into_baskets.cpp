// ======================================
// LeetCode Problem: fruit into baskets
// Language: cpp
// Link: https://leetcode.com/problems/fruit-into-baskets/
// Synced by: LinkCode
// Date: 11/16/2026, 11:48:08 PM
// ======================================


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0,maxi = 0;
        unordered_map<int,int> mpp;
        for(int r=0;r<n;r++)
        {
            mpp[fruits[r]]++;
            while(mpp.size() > 2)
            {
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0)
                {
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            maxi = max(maxi,r-l+1);
        }
        return maxi;
    }
};