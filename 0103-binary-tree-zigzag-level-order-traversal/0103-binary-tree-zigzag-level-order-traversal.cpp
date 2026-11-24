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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if (root==NULL) return ret;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sze = q.size();
            vector<int> level;

            for(int i = 0 ; i < sze ; i++){
                TreeNode* node = q.front();
                q.pop();
                if(ret.size()%2==0) level.push_back(node->val);
                else level.insert(level.begin(),node->val);
                
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);

            }

            ret.push_back(level);
        }

        return ret;
    }
};