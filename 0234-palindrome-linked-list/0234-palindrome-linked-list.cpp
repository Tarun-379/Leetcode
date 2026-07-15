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
    bool isPalindrome(ListNode* head) {
        if(head == NULL or head->next == NULL) return true;
        int s = 0;
        ListNode* temp = head;
        while(temp != NULL){
            s++;
            temp = temp->next;
        }
        vector<int> st;
        bool csk = true;
        int i = 0 ;
        while(head!=NULL){
            if(i < s/2) st.push_back(head->val);
            else if(s%2!=0 and i == (s/2) and csk) csk = false;
            else {
                if(head->val != st.back()) return false;
                st.pop_back();
            }
            head = head->next;
            i++;
        }
        return true;
    }
};