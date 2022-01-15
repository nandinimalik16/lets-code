// Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/

//Solution 1

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
    ListNode* middleNode(ListNode* head) {
        if(! head|| !head->next)
            return head;
        ListNode *slow=head,*fast=head->next;
        while(fast)
        {
            if(fast->next==NULL)
            {
                return slow->next;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
};


// Solution 2


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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        temp=head;
        c=(c/2);
        while(c>0)
        {
            temp=temp->next;
            c--;
        }
        return temp;
    }
};