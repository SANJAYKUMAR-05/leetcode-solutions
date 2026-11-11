// ======================================
// LeetCode Problem: maximum depth of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:16:52 PM
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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left,right) + 1;
    }
};