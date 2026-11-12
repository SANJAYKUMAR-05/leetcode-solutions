// ======================================
// LeetCode Problem: binary tree right side view
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-right-side-view/
// Synced by: LinkCode
// Date: 11/12/2026, 4:12:51 PM
// ======================================



class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        if(root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        vector<int> ans;

        while(!q.empty()) {

            int n = q.size();

            for(int i = 0; i < n; i++) {

                TreeNode* curr = q.front();
                q.pop();

                if(i == n - 1)
                    ans.push_back(curr->val);

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }
        }

        return ans;
    }
};
