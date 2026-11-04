// ======================================
// LeetCode Problem: cheapest flights within k stops
// Language: cpp
// Link: https://leetcode.com/problems/cheapest-flights-within-k-stops/
// Synced by: LinkCode
// Date: 11/4/2026, 11:08:42 PM
// ======================================


class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int f = flights.size();
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<f;i++)
        {
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];
            adj[u].push_back({v,w});
        }
        queue<pair<int,pair<int,int>>> q;
        vector<int>dist(n,INT_MAX);
        q.push({0,{src,0}});
        dist[src] = 0;
        while(!q.empty())
        {
           int cost = q.front().first;
           int node = q.front().second.first;
           int stops = q.front().second.second;
            q.pop();
            if(stops > k)
            {
                continue;
            }
            for(auto nei : adj[node])
            {
                int curr = nei.first;
                int wei = nei.second;
                int w = wei+cost;
                if(w < dist[curr] && stops<=k)
                {
                    dist[curr] = wei + cost;
                    q.push({w,{curr,stops+1}});
                }
            }
        } 
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};