// ======================================
// LeetCode Problem: vertical order traversal of a binary tree
// Language: cpp
// Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 4:48:02 PM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> mpp;
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<tuple<TreeNode*,int,int>> q;
        q.push({root,0,0});
        while(!q.empty())
        {
            auto [curr,row,col] = q.front();q.pop();
            mpp[col].push_back({row,curr->val});
            if(curr->left)
            {
                q.push({curr->left,row+1,col-1});
            }
             if(curr->right)
            {
                q.push({curr->right,row+1,col+1});
            }
        }
        for(auto [col,node] : mpp)
        {
            sort(node.begin(),node.end());
            vector<int> curr;
            for(auto [row,val] :  node)
            {
                curr.push_back(val);
            }
            ans.push_back(curr);
        }
        return ans;
    }
};