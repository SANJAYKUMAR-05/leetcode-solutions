// ======================================
// LeetCode Problem: subtree of another tree
// Language: cpp
// Link: https://leetcode.com/problems/subtree-of-another-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:47:04 PM
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
    bool same(TreeNode* root, TreeNode* subRoot)
    {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;
        return ((root->val == subRoot->val) && same(root->left,subRoot->left) && same(root->right,subRoot->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL)return false;
        return same(root->left,subRoot) || same(root->right,subRoot);
    }
};