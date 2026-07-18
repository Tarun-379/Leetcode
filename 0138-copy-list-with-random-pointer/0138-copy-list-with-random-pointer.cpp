/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return head;
        Node* temp = head;
        while(temp!=NULL){
            Node* clone = new Node(temp->val);
            clone->next = temp->next;
            temp->next = clone;
            temp = clone->next;
        }
        Node* ret = head->next;
        temp = head;
        while(temp!=NULL){
            if(temp->random!=NULL) temp->next->random = temp->random->next;
            else temp->next->random = NULL;
            temp = temp->next->next;
        }
        temp = head;
        while(temp!=NULL){
            Node* temp2 = temp->next;
            if(temp->next != NULL) temp->next = temp->next->next;
            temp = temp2;
        }
        return ret;
    }
};