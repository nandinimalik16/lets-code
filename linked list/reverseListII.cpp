// Reverse Linked List II
// https://leetcode.com/problems/reverse-linked-list-ii/


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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)   
            return NULL;
        vector<int>mp;
        ListNode *temp=head;
        while(temp)
        {
            mp.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<left-1;i++)
        {
            temp=temp->next;
        }
        for(int i=right;i>=left;i--)
        {
            temp->val=mp[i-1];
            temp=temp->next;
        }
        return head;
    }
};