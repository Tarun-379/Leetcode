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
    bool hasCycle(ListNode *head) {
        for(int i = 0 ; i < 10002 ; i++){
            if(head == NULL) return false;
            head = head->next;
        }
        return true;
    }
};