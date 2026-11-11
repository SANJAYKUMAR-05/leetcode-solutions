// ======================================
// LeetCode Problem: path sum ii
// Language: cpp
// Link: https://leetcode.com/problems/path-sum-ii/
// Synced by: LinkCode
// Date: 11/12/2026, 12:08:11 AM
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
    vector<vector<int>> res;
    vector<int> curr;
    void func(TreeNode* root, int k)
    {
        if(root == NULL)
        {
            return;
        }
        curr.push_back(root->val);
        sum += root->val;
        if(root->left == NULL && root->right == NULL)
        {   
            if(sum == k)
            {
                res.push_back(curr);
            }
        }
        func(root->left,k);
        func(root->right,k);
        sum -= root->val;
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        func(root,targetSum);
        return res;
    }
};