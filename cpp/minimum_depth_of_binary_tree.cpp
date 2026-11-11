// ======================================
// LeetCode Problem: minimum depth of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:20:53 PM
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
    int minDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        int ans =  min(left,right) + 1;
        if(ans == 1)
        {
            return max(left,right) + 1;
        }
        else
        {
            return ans;
        }
    }
};