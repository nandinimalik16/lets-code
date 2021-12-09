// Sort the list
// https://leetcode.com/problems/sort-list/submissions/


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
    ListNode* sortList(ListNode* head) {
        if(!head)
        {
            return NULL;
        }
        ListNode *temp=head;
        vector<int>a;
        while(temp)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        ListNode *n=new ListNode(a[0]);
        head=n;
        int i=1;
        while(i<a.size())
        {
            n->next=new ListNode(a[i]);
            i++;
            n=n->next;
        }
        return head;
    }
};