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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* ret = head->next;

        while(head!=NULL and head->next!=NULL){
            ListNode* temp = head->next->next;
            head->next->next = head;
            head->next = temp;

            ListNode* temp2 = head;
            head = head->next;
            if(head!=NULL and head->next!=NULL) temp2->next = head->next;

        }

        return ret;
    }
};