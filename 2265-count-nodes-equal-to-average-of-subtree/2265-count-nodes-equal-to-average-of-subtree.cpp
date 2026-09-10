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
    pair<int,pair<int,int>> counter(TreeNode* root){
        if(root == NULL) return {0,{0,0}};

        auto lefty = counter(root->left);
        auto righty = counter(root->right);

        int count = lefty.first + righty.first;
        int sum = lefty.second.first + righty.second.first + root->val;
        int num = lefty.second.second + righty.second.second + 1;

        if(sum/num == root->val) count++;
        return {count,{sum,num}};
    }
    int averageOfSubtree(TreeNode* root) {
        return counter(root).first;
    }
};