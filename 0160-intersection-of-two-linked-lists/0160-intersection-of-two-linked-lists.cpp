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
        unordered_map<ListNode*,int> mp;
        while(headA!=NULL or headB!=NULL){
            if(headA!=NULL){
                if(mp.count(headA)) return headA;
                mp[headA]++;
                headA = headA->next;
            }
            if(headB!=NULL){
                if(mp.count(headB)) return headB;
                mp[headB]++;
                headB = headB->next;
            }
        }
        return NULL;
    }
};