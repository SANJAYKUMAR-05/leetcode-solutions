// ======================================
// LeetCode Problem: balanced binary tree
// Language: cpp
// Link: https://leetcode.com/problems/balanced-binary-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:41:03 PM
// ======================================



class Solution {
public:
    int height(TreeNode* root) {
        if(root == NULL)
            return 0;

        int left = height(root->left);

        if(left == -1)
            return -1;

        int right = height(root->right);

        if(right == -1)
            return -1;

        if(abs(left - right) > 1)
            return -1;

        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
