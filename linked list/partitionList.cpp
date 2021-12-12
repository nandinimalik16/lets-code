// Partition List
// https://leetcode.com/problems/partition-list/submissions/

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
    ListNode* partition(ListNode* head, int x) {
        ListNode *small = new ListNode();
        ListNode *high = new ListNode();
        ListNode *smallhead=small,*highhead=high;
        while(head!=NULL){
            if(head->val<x){
                //link it to small node
                smallhead->next=head;
                smallhead=smallhead->next;
            }
            else{
                 highhead->next=head;
                highhead=highhead->next;
                
            }head=head->next;
        }
        highhead->next=NULL;
        smallhead->next=high->next;
        return small->next;  
    }
};