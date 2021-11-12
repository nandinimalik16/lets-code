// Insertion Sort List
// https://leetcode.com/problems/insertion-sort-list/submissions/


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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *p=head,*curr=head->next,*prev=head;
        while(curr)
        {
            if(head->val>curr->val)
            {
                prev->next=curr->next;
                curr->next=p;
                head=curr;
                curr=prev->next;
                
            }
            else
            {
                while(p->next->val<curr->val)
                {
                    p=p->next;
                }
                if(prev->val>curr->val)
                {
                    prev->next=curr->next;
                    curr->next = p->next;
                    p->next = curr;
                    curr = prev->next;
                }
                else
                {
                    prev=prev->next;
                    curr=curr->next;
                }
            }
            p=head;
        }
        return head;
    }
};