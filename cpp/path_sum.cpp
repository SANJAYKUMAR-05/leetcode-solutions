// ======================================
// LeetCode Problem: path sum
// Language: cpp
// Link: https://leetcode.com/problems/path-sum/
// Synced by: LinkCode
// Date: 11/11/2026, 11:54:06 PM
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
    int sum = 0;
    bool flag = false;
    void func(TreeNode* root, int k)
    {
        if(root == NULL)
        {
            return;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL)
        {   
            if(sum == k)
            {
                flag = true;
            }
        }
        func(root->left,k);
        func(root->right,k);
        sum -= root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        func(root,targetSum);
        return flag;
    }
};