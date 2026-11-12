// ======================================
// LeetCode Problem: all nodes distance k in binary tree
// Language: cpp
// Link: https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 2:46:30 PM
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
    unordered_map<TreeNode*,TreeNode*> mpp;
    void par(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr = q.front();q.pop();
            if(curr->left!=NULL)
            {
                q.push(curr->left);
                mpp[curr->left] = curr;
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
                mpp[curr->right] = curr;
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        par(root);
        queue<TreeNode*> q;
        q.push(target);
        unordered_map<TreeNode*,bool> vis;
        vis[target] = true;
        int cnt = 0;
        while(!q.empty() && cnt <= k)
        {
            int n = q.size();
            if(cnt == k)
            {
                break;
            }
            cnt++;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left != NULL && vis[curr->left] == false)
                {
                        q.push(curr->left);
                        vis[curr->left] = true;
                }
                if(curr->right != NULL && vis[curr->right] == false)
                {
                        q.push(curr->right);
                        vis[curr->right] = true;
                }
                if(mpp[curr] != NULL && vis[mpp[curr]] == false)
                {
                        q.push(mpp[curr]);
                        vis[mpp[curr]] = true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            ans.push_back(curr->val);
            q.pop();
        }
        return ans;
    }
};