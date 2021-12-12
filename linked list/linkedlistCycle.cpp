// Linked List Cycle
// https://leetcode.com/problems/linked-list-cycle/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *t= head,*r=head;
        while(r!=NULL && r->next!=NULL)
        {
            t=t->next;
            r=r->next->next;
            if(t==r)
            {
                return true;
            }
        }
        return false;
    }
};