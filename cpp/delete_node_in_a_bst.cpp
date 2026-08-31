// ======================================
// LeetCode Problem: delete node in a bst
// Language: cpp
// Link: https://leetcode.com/problems/delete-node-in-a-bst/
// Synced by: LinkCode
// Date: 9/1/2026, 1:16:14 AM
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
    TreeNode* func(TreeNode* node)
    {
        while(node->left != NULL)
        {
            node = node -> left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
        {
            return root;
        }
        if(root -> val < key)
        {
            root->right = deleteNode(root->right,key);
        }
        else if(root -> val > key)
        {
            root->left = deleteNode(root->left,key);
        }
        else
        {
            if(root->left == NULL && root->right == NULL)
            {
                return NULL;
            }
            else if(root->left != NULL && root->right != NULL)
            {
                TreeNode* temp = func(root->right);
                root -> val = temp -> val;
                root->right = deleteNode(root->right,temp->val);
            }
            else if(root->left!=NULL)
            {
                    return root->left;
            }
            else
            {
                    return root->right;
            }
        }
        return root;
    }
};