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
    void store(TreeNode* root, map<int,map<int,multiset<int>>> &storage, int x, int y){
        if (root==NULL) return;
        storage[x][y].insert(root->val);

        store(root->left,storage,x-1,y+1);
        store(root->right,storage,x+1,y+1);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ret;
        if(root==NULL) return ret;

        map<int,map<int,multiset<int>>> storage;
        store(root,storage,0,0);

        for(auto x : storage){
            vector<int> temp;
            for(auto y : x.second) {
                for(auto val : y.second) {
                    temp.push_back(val);
                }
            }
            ret.push_back(temp);
        }
        return ret;
    }
};