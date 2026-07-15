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
    ListNode* merge(ListNode* head, ListNode* head2) {
        ListNode* strt = new(ListNode);
        ListNode* temp = strt;
        while(head!=NULL and head2!=NULL){
            ListNode* temp2 = new(ListNode);
            if(head->val < head2->val){
                temp2->val = head->val;
                head = head->next;
            }
            else {
                temp2->val = head2->val;
                head2 = head2->next;
            }
            temp->next = temp2;
            temp = temp->next;
        }
        while(head!=NULL){
            ListNode* temp2 = new(ListNode);
            temp2->val = head->val;
            temp->next = temp2;
            temp = temp->next;
            head = head->next;
        }
        while(head2!=NULL){
            ListNode* temp2 = new(ListNode);
            temp2->val = head2->val;
            temp->next = temp2;
            temp = temp->next;
            head2 = head2->next;
        }
        return strt->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* mid = head;
        ListNode* end = head->next;
        while(end!=NULL and end->next!=NULL){
            mid = mid->next;
            end = end->next->next;
        }
        ListNode* head2 = mid->next;
        mid->next = NULL;
        head = sortList(head);
        head2 = sortList(head2);
        head = merge(head,head2);
        return head;
    }
};