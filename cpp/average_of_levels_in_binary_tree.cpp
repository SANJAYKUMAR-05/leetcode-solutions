// ======================================
// LeetCode Problem: average of levels in binary tree
// Language: cpp
// Link: https://leetcode.com/problems/average-of-levels-in-binary-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 3:59:27 PM
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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> ans;
        while(!q.empty())
        {
            int n = q.size();
            double sum = 0.0;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();q.pop();
                sum += curr->val;
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            double t = sum / n;
            ans.push_back(t);
        }
        return ans;
    }
};