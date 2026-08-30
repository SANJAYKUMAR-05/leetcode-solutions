// ======================================
// LeetCode Problem: merge intervals
// Language: cpp
// Link: https://leetcode.com/problems/merge-intervals/
// Synced by: LinkCode
// Date: 8/31/2026, 12:00:17 AM
// ======================================


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            int u = intervals[i][0];
            int v = intervals[i][1];
            if(ans.empty() || ans.back()[1] < u)
            {
                ans.push_back({u,v});
            }
            else
            {
                if(ans.back()[1] >= u)
                {
                    ans.back()[1] = max(ans.back()[1],v);
                }
            }
        }
        return ans;
    }
};