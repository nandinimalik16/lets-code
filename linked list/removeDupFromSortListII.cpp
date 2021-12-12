// Remove Duplicates from sorted List II
// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/


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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
        {
            return NULL;
        }
        map<int,int> mp;
        ListNode *t=head;
        while(t)
        {
            mp[(t->val)]++;
            t=t->next;
        }
        ListNode *ans=new ListNode(-1);
        ListNode *temp=ans;
        for (auto it:mp)
        {
            if(it.second==1)
            {
                temp->next=new ListNode(it.first);
                temp=temp->next;
            }
        }
        return ans->next;
    }
};