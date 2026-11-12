// ======================================
// LeetCode Problem: binary tree zigzag level order traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
// Synced by: LinkCode
// Date: 11/12/2026, 3:54:08 PM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> parent,child;
        bool direction = false;
        if(root==NULL)
        {
            return {};
        }
        parent.push(root);
        vector<vector<int>> res;
        vector<int> curr;
        while(!parent.empty())
        {
            TreeNode* currNode = parent.top();parent.pop();
            curr.push_back(currNode->val);
            if(direction==true)
            {
                if(currNode->right!=NULL)
                {
                    child.push(currNode->right);
                }
                if(currNode->left!=NULL)
                {
                    child.push(currNode->left);
                }
            }
            else
            {
                if(currNode->left!=NULL)
                {
                    child.push(currNode->left);
                } 
                if(currNode->right!=NULL)
                {
                    child.push(currNode->right);
                }
            }
            if(parent.empty())
            {
                parent = child;
                while (!child.empty()) child.pop();
                direction = !direction;
                res.push_back(curr);
                curr.clear();
            }
        }
        return res;
    }
};