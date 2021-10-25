/*
83. Remove Duplicates from Sorted List
Easy

Given the head of a sorted linked list, 
delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/

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
        if(head==NULL)
        {
            return 0;
            
        }
        ListNode* prev=head,*temp=head->next;
        while(prev->next!=NULL)
        {
            if(prev->val==prev->next->val)
            {
                prev->next=prev->next->next;
            }
            else
            {
                prev=prev->next;
                }
        }
        return head;
    }
};