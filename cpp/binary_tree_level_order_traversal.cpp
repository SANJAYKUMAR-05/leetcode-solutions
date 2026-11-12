// ======================================
// LeetCode Problem: binary tree level order traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
// Synced by: LinkCode
// Date: 11/12/2026, 3:41:53 PM
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr)
        {
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int> level;
            for(int i=0;i<n;i++)
            {
                TreeNode* current = q.front();
                q.pop();
                level.push_back(current->val);
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
            res.push_back(level);
        }
        return res;
    }
};