// ======================================
// LeetCode Problem: insert into a binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/insert-into-a-binary-search-tree/
// Synced by: LinkCode
// Date: 8/31/2026, 11:40:05 PM
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            return new TreeNode(val);
        }
        if(root->val < val)
        {
            root->right = insertIntoBST(root->right,val);
        }
        else
        {
            root->left = insertIntoBST(root->left,val);
        }
        return root;
    }
};