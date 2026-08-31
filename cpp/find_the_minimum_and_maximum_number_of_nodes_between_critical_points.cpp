// ======================================
// LeetCode Problem: find the minimum and maximum number of nodes between critical points
// Language: cpp
// Link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
// Synced by: LinkCode
// Date: 9/1/2026, 12:37:32 AM
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isLocalMax(ListNode* prev,ListNode* curr,ListNode* nextNode)
    {
        return (prev->val < curr->val && curr->val > nextNode->val);
    }
    bool isLocalMin(ListNode* prev,ListNode* curr,ListNode* nextNode)
    {
        return (prev->val > curr->val && curr->val < nextNode->val);
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next == NULL || head->next->next == NULL)
        {
            return {-1,-1};
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        long long pos = 2;
        ListNode* nextNode = curr->next;
        long long Mindiff = LLONG_MAX;
        long long prepos = -1,Minpos = LLONG_MAX,Maxpos = LLONG_MIN;
        while(nextNode != NULL)
        {
            bool LMax = isLocalMax(prev,curr,nextNode);
            bool LMin = isLocalMin(prev,curr,nextNode);
            if(LMax || LMin)
            {
                Minpos = min(Minpos,pos);
                Maxpos = max(Maxpos,pos);
                if(prepos != -1)
                {
                Mindiff = min(Mindiff,pos - prepos);
                }
                prepos = pos;
            }
            pos++;
            prev = curr;
            curr = nextNode;
            nextNode = curr->next;
        }
        if(Mindiff == LLONG_MAX)
        {
        return {-1, -1};
        }
        long long Maxdiff = Maxpos - Minpos;
        return {(int)Mindiff,(int)Maxdiff};
    }
};