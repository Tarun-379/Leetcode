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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* ret = head;
        int count = 0;

        ListNode* temp = head;
        ListNode* temp2 = head;
        while(temp!=NULL){
            if(temp->next!=NULL and temp->val == temp->next->val){
                int v = temp->val;
                while(temp!=NULL and temp->val == v ){
                    temp = temp->next;
                }
            }
            else{
                count++;
                head->val = temp->val;
                temp2 = head;
                head = head->next;
                temp = temp->next;
            }
        }
        temp2->next = nullptr;
        if(count==0) return nullptr;
        return ret;
    }
};