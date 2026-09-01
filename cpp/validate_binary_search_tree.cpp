// ======================================
// LeetCode Problem: validate binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/validate-binary-search-tree/
// Synced by: LinkCode
// Date: 9/1/2026, 9:15:18 PM
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
    bool func(TreeNode* root,long long st,long long end)
    {
        if(root == NULL)
        {
            return true;
        }
        if(root->val <= st || root->val >= end)
        {
            return false;
        }
        return (func(root->left,st,root->val) && func(root->right,root->val,end));
    }
    bool isValidBST(TreeNode* root) {
        return func(root,LLONG_MIN,LLONG_MAX);
    }
};