// ======================================
// LeetCode Problem: best time to buy and sell stock
// Language: cpp
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Synced by: LinkCode
// Date: 8/23/2026, 11:54:47 PM
// ======================================


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxi = 0;
        for(int i=1;i<n;i++)
        {
            mini = min(prices[i],mini);
            maxi = max(prices[i]-mini,maxi);
        }
        return maxi;
    }
};