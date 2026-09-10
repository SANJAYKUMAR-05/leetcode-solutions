// ======================================
// LeetCode Problem: count nodes equal to average of subtree
// Language: cpp
// Link: https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
// Synced by: LinkCode
// Date: 9/10/2026, 2:47:09 PM
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
    pair<int,int> func(TreeNode* root,int & cnt)
    {
        if(root == nullptr)
        {
            return {0,0};
        }
        auto [lsum,lcnt] = func(root->left,cnt);
        auto [rsum,rcnt] = func(root->right,cnt);
        int subsum = lsum + rsum + root->val;
        int subcnt = (lcnt + rcnt + 1);
        if(subsum / subcnt == root->val) cnt++;
        return {subsum,subcnt};
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        func(root,cnt);
        return cnt;
    }
};