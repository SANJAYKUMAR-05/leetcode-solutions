// ======================================
// LeetCode Problem: diameter of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/diameter-of-binary-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:44:09 PM
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
    int maxi = 0;
    int hei(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l = hei(root->left);
        int r = hei(root->right);
        maxi = max(maxi,l+r);
        return max(l,r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        hei(root);
        return maxi;
    }
};