// ======================================
// LeetCode Problem: path sum
// Language: cpp
// Link: https://leetcode.com/problems/path-sum/
// Synced by: LinkCode
// Date: 11/12/2026, 12:02:56 AM
// ======================================



class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(root == NULL)
            return false;

        if(root->left == NULL && root->right == NULL)
            return root->val == targetSum;

        int remaining = targetSum - root->val;

        return hasPathSum(root->left, remaining) ||
               hasPathSum(root->right, remaining);
    }
};
