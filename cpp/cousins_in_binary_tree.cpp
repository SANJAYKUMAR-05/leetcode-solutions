// ======================================
// LeetCode Problem: cousins in binary tree
// Language: cpp
// Link: https://leetcode.com/problems/cousins-in-binary-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 4:37:22 PM
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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            bool gotX = false;
            bool gotY = false;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();q.pop();
                if(curr->left != NULL && curr->right!= NULL){
                if((curr->left->val == x && curr->right->val == y) || (curr->left->val == y && curr->right->val == x))
                    {
                        return false;
                    }
                }
                if(curr->left != NULL)
                {
                    if(curr->left->val == x)
                    {
                        gotX = true;
                    }
                    if(curr->left->val == y)
                    {
                        gotY = true;
                    }
                    q.push(curr->left);
                }
                if(curr->right != NULL)
                {
                    if(curr->right->val == x)
                    {
                        gotX = true;
                    }
                    if(curr->right->val == y)
                    {
                        gotY = true;
                    }
                    q.push(curr->right);
                }
            }
            if(gotX && gotY)
            {
                return true;
            }
        }
        return false;
    }
};