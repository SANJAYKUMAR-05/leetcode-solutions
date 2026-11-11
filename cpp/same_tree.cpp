// ======================================
// LeetCode Problem: same tree
// Language: cpp
// Link: https://leetcode.com/problems/same-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 10:51:04 PM
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
    bool func(TreeNode* p,TreeNode* q)
    {
        if(p == NULL && q ==NULL)
        {
            return true;
        } 
        else if(p == NULL || q ==NULL)
        {
            return false;
        }
        return func(p->left,q->left) && func(p->right,q->right) && p->val == q->val;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return func(p,q);
    }
};