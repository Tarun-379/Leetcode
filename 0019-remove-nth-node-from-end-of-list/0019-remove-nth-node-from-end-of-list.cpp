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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            s++;
            temp = temp->next;
        }
        temp = head;
        n = s-n+1;
        s = 1;
        if(n==1) return head->next;
        while(temp!=NULL){
            if(s == n-1) {
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
            s++;
        }
        return head;
    }
};