// Rotate List
// https://leetcode.com/problems/rotate-list/

//ques: Given the head of a linked list, rotate the list to the right by k places.


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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *t=head;
        if(!head)
        {
            return NULL;
        }
        vector<int>m;
        while(t)
        {
            m.push_back(t->val);
            t=t->next;
        }
        int n=m.size();
        k=k%n;
        reverse(m.begin(),m.end());
        reverse(m.begin(),m.begin()+k);
        reverse(m.begin()+k,m.end());
        ListNode *a=new ListNode(m[0]);
        head=a;
        int i=1;
        while(i<n)
        {
            a->next=new ListNode(m[i]);
            a=a->next;
            i++;
        }
        return head;
    }
};
