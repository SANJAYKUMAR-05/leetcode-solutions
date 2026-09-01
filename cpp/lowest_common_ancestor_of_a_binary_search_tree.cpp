// ======================================
// LeetCode Problem: lowest common ancestor of a binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
// Synced by: LinkCode
// Date: 9/1/2026, 9:22:23 PM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root->val > p->val && root->val > q->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(root->val < p->val && root->val < q->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        else
        {
            return root;
        }
        return NULL;
    }
};