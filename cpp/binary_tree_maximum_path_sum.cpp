// ======================================
// LeetCode Problem: binary tree maximum path sum
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
// Synced by: LinkCode
// Date: 11/12/2026, 12:23:58 AM
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
   int maxi = INT_MIN;
    int hei(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l = max(0,hei(root->left));
        int r = max(0,hei(root->right));
        maxi = max(maxi,l+r+root->val);
        return max(l,r) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        hei(root);
        return maxi;
    }
};