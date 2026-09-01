// ======================================
// LeetCode Problem: kth smallest element in a bst
// Language: cpp
// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// Synced by: LinkCode
// Date: 9/1/2026, 4:48:41 PM
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
    int ans = -1;
    void func(TreeNode* root,int k,int &count)
    {
        if(root == NULL)
        {
            return;
        }
        func(root->left,k,count);
        count++;
        if(ans != -1)
        {
            return;
        }
        if(k == count)
        {
            ans = root->val;
            return;
        }
        func(root->right,k,count);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
       func(root,k,count);
       return ans;
    }
};