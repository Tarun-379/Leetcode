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
    ListNode* rev(ListNode* head){
        if(head==NULL or head->next==NULL) return head;
        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* nexx = curr->next;
        while(curr!=NULL){
            nexx = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nexx;
        }
        head->next = NULL;
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0,head);

        ListNode* pointer = &dummy;
        for(int i = 0 ; i < k ; i ++ ) pointer = pointer->next;

        ListNode* backy = &dummy;

        ListNode* ret = pointer;

        while(pointer!=NULL){
            ListNode* np = pointer->next;
            pointer->next = NULL;
            ListNode* temp = backy->next;
            backy->next = rev(backy->next);
            temp->next = np;

            backy = temp;
            for(int i = 0 ; i < (2*k)-1 ; i ++ ){
                if(pointer==NULL) return ret;
                pointer = pointer->next;
            }
        }

        return ret;
    }
};