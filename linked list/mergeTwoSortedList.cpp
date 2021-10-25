/*
21. Merge Two Sorted Lists
Easy

Merge two sorted linked lists and return it as a sorted list. 
The list should be made by splicing together the nodes of the first two lists.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
        {
            return NULL;
        }
        ListNode *t1=l1,*t2=l2,head=NULL,tail=NULL;
        while(t1!=NULL && t2!==NULL)
        {
            if(t1->val<=t2->val)
            {
                if(head==NULL)
                {
                    head=tail=t1;
                    t1=t1->next;
                }
                else{
                    tail->next=t1;
                    tail=tail->next;
                    t1=t1->next;

                }
            }
            else{
                if(head==NULL)
                {
                    head=tail=t2;
                    t2=t2->next;
                }
                else{
                    tail->next=t2;
                    tail=tail->next;
                    t2=t2->next;

                }
            }
        }
        while(t1!=NULL)
        {
            if(head==NULL)
                {
                    head=tail=t1;
                    t1=t1->next;
                }
                else{
                    tail->next=t1;
                    tail=tail->next;
                    t1=t1->next;

                }
        }
        while(t2!=NULL)
        {
            if(head==NULL)
                {
                    head=tail=t2;
                    t2=t2->next;
                }
                else{
                    tail->next=t2;
                    tail=tail->next;
                    t2=t2->next;

                }
        }
        return head;
    }
};

