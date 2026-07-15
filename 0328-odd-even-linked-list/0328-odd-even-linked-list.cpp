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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next==NULL) return head;
        ListNode* temp = head->next;
        ListNode* odd = head;
        ListNode* even = head->next;
        while(odd!=NULL and even!=NULL){
            if(odd->next!=NULL) odd->next = odd->next->next;
            if(odd->next!=NULL) even->next = even->next->next;
            if(odd->next!=NULL) odd = odd->next;
            even = even->next;
        }
        odd->next = temp;
        return head;
    }
};