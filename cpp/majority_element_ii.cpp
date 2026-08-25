// ======================================
// LeetCode Problem: majority element ii
// Language: cpp
// Link: https://leetcode.com/problems/majority-element-ii/
// Synced by: LinkCode
// Date: 8/25/2026, 2:29:59 PM
// ======================================


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele1 = 0,ele2 = 0;
        int cnt1 = 0, cnt2 = 0;
        for(int num : nums)
        {
            if(num != ele2 && cnt1 == 0)
            {
                ele1 = num; // 0
                cnt1++; // 1
            }
            else if(ele1 != num && cnt2 == 0)
            {
                ele2 = num;
                cnt2++;
            }
            else if(ele1 != num && ele2 != num)
            {
                cnt1--;
                cnt2--;
            }
            else if(num == ele1)
            {
                cnt1++;
            }
            else if(num == ele2)
            {
                cnt2++;
            }
        }
        vector<int> ans;
        int a = 0,b = 0;
        for(int num : nums)
        {
            if(num == ele1)
            {
                a++;
            }
            if(num == ele2)
            {
                b++;
            }
        }
        int t = n / 3;
        if(a > t)
        {
            ans.push_back(ele1);
        }
        if(b > t && ele1!=ele2)
        {
            ans.push_back(ele2);
        }
        return ans;
    }
};