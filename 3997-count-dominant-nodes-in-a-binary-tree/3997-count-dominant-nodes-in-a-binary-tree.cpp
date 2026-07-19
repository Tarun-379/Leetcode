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
int count = 0;
class Solution {
public:
    int ret = 0;
    int maxi(TreeNode* root){
        if(root == NULL) return INT_MIN;
        
        int lefty = maxi(root->left);
        int righty = maxi(root->right);

        int maxy = max(lefty,righty);
        
        if (root->val >= maxy) ret++;
            
        if(maxy > root->val) return maxy;
        return root->val;
    }
    int countDominantNodes(TreeNode* root) {
        maxi(root);
        return ret;
    }
};