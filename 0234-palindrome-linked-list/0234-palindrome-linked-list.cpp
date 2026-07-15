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
    ListNode* rev(ListNode* head) {
            if(head == NULL or head->next == NULL) return head;
            ListNode* prev = head;
            ListNode* curr = prev->next;
            ListNode* next = curr->next;

            while(curr!=NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head->next = NULL;
            return prev;
        }
    bool isPalindrome(ListNode* head) {
        if(head == NULL or head->next == NULL) return true;
        int s = 0;
        ListNode* temp = head;
        while(temp != NULL){
            s++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 1; i < s/2 ; i ++ ){
            temp = temp->next;
        }
        temp = rev(temp);

        while(temp!=NULL and head!=NULL){
            if(head->val != temp->val) return false;
            head = head->next;
            temp = temp->next;
        }

        return true;
    }
};