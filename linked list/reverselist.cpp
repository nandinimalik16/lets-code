// Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/submissions/



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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return 0;
        ListNode *prev,*cur,*nextnode;
        cur=head;
        prev=cur;
        nextnode=cur->next;
        cur->next=NULL;
        while(cur!=NULL&& nextnode!=NULL)
        {
            prev =cur;
            cur=nextnode;
            nextnode=nextnode->next;
            cur->next=prev;
        }
      
        return cur;
    }
};