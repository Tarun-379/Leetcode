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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l2==NULL) return l1;
        if(l1==NULL) return l2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode* ret = new ListNode();
        ListNode* ret1 = ret;
        while(temp1!=NULL and temp2!=NULL){
            int sum = temp1->val + temp2->val + carry;
            carry = sum/10;
            int value = sum%10;
            temp1 = temp1->next;
            temp2 = temp2->next;

            ret1->val = value;
            ListNode* ret2 = new ListNode();
            ret1->next = ret2;
            ret1 = ret1->next;
        }
        while(temp1!=NULL){
            int sum = temp1->val + carry;
            carry = sum/10;
            int value = sum%10;
            temp1 = temp1->next;

            ret1->val = value;
            ListNode* ret2 = new ListNode();
            ret1->next = ret2;
            ret1 = ret1->next;
        }
        while(temp2!=NULL){
            int sum = temp2->val + carry;
            carry = sum/10;
            int value = sum%10;
            temp2 = temp2->next;

            ret1->val = value;
            ListNode* ret2 = new ListNode();
            ret1->next = ret2;
            ret1 = ret1->next;
        }
        ret1->val = carry;
        ret1 = ret;
        if(carry==0){
            while(ret1->next->next!=NULL){
                ret1 = ret1->next;
            }
            ret1->next=NULL;
        }
        return ret;
    }
};