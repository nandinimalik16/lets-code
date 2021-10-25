/*
19. Remove Nth Node From End of List
Medium

Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
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
    int getlen(ListNode *root)
    {
        int c=0;
        ListNode *temp=root;
        while(temp)
        {
            temp=temp->next;
            c++;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* root, int n) {
        int len=getlen(root);
        if(len-n==0)
        {
            root=root->next;
            
        }
        else if(n==1)
        {
            ListNode*temp=root;
            while(len>2)
            {
                len--;
                temp=temp->next;
            }
            temp->next=NULL;
        }
        else if(len==1)
        {
            return NULL;
        }
        else{
            int t=len-n;
            ListNode*temp=root;
            while(t>1)
            {
                temp=temp->next;
                t--;
            }
            temp->next=temp->next->next;
        }
        return root;
    }
};