/*
2. Add Two Numbers
Medium

You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
2->3->4
5->9->1

ans= 7->2->6
432+195=627
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cry=0;
        ListNode* l3=new ListNode(0);
        ListNode *curr=l3;
        while(l1!=NULL||l2!=NULL || cry!=0)
        {
            int sum=(l1?l1->val:0)+(l2?l2->val:0);
            sum+=cry;
            cry=sum/10;
            sum=sum%10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        return l3->next;
    }
};