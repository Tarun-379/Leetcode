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

        stack<TreeNode*> stk1,stk2;

        stk1.push(root);
        while(!stk1.empty()){
            TreeNode* node = stk1.top();
            stk1.pop();
            stk2.push(node);

            if(node->left != NULL) stk1.push(node->left);
            if(node->right != NULL) stk1.push(node->right);
        }

        while(!stk2.empty()){
            TreeNode* node = stk2.top();
            stk2.pop();
            ret.push_back(node->val);
        }

        return ret;
    }
};