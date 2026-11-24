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
    int helper(TreeNode* root, int &ret){
        if(root==NULL) return 0;
        int ls = max(0,helper(root->left,ret));
        int rs = max(0,helper(root->right,ret));
        ret = max(ret,ls+rs+root->val);
        return root->val+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        int ret = INT_MIN;
        helper(root,ret);
        return ret;
    }
};