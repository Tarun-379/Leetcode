/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL or root == p or root == q) return root;

        TreeNode* diveL = lowestCommonAncestor(root->left,p,q);
        TreeNode* diveR = lowestCommonAncestor(root->right,p,q);
        
        if (diveL==p and diveR==q or diveL==q and diveR==p) return root;
        else if (diveL) return diveL;
        else if (diveR) return diveR;
        return NULL;
    }
};