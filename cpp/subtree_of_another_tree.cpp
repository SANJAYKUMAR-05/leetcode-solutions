// ======================================
// LeetCode Problem: subtree of another tree
// Language: cpp
// Link: https://leetcode.com/problems/subtree-of-another-tree/
// Synced by: LinkCode
// Date: 11/11/2026, 11:47:21 PM
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
    bool sameTree(TreeNode* a,TreeNode* b)
    {
        if(!a && !b) return true;
        else if(!a || !b) return false;
        return (a->val == b->val && 
        sameTree(a->left,b->left) && 
        sameTree(a->right,b->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL)return true;
        if(root == NULL) return false;
        
        if(sameTree(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};