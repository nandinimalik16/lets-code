// Linked List Cycle II
// https://leetcode.com/problems/linked-list-cycle-ii/


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
    ListNode *detectCycle(ListNode *head) {
        if(!head)   
        {
            return NULL;
        }
        ListNode *r=head,*t=head,*ptr=head;
        int p;
        while(t!=NULL && t->next!=NULL)
        {
            t=t->next->next;
            r=r->next;
            
            if(t==r)
            {
                while(ptr!=r)
                {
                    ptr=ptr->next;
                    r=r->next;
                }
                return ptr;
            }
        }
        return NULL;
    }
};