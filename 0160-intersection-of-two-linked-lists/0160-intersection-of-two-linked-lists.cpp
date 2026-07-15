/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        if(headA == headB) return headA;
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
            if(headA==NULL and headB==NULL) return NULL;
            if(headA==NULL) headA=tempB;
            if(headB==NULL) headB=tempA;
        }
        return headA;
    }
};