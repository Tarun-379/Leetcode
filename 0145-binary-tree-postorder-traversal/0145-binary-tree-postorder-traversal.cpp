/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == NULL) return ret;

        stack<TreeNode*> stk;
        TreeNode* curr = root;

        while(!stk.empty() || curr != NULL){
            if(curr!=NULL){
                stk.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* temp = stk.top()->right;
                if(temp==NULL){
                    temp = stk.top();
                    stk.pop();
                    ret.push_back(temp->val);
                    while(!stk.empty() and stk.top()->right == temp){
                        temp = stk.top();
                        stk.pop();
                        ret.push_back(temp->val);
                    }
                }
                else{
                    curr = temp;
                }
            }
        }
        return ret;
    }
};