class Solution {
public:
    void traverse(int i ,vector<vector<int>> &isConnected, vector<int> &vis){
        vis[i]=1;
        for( int j = 0 ; j < isConnected.size() ; j ++ ){
            if(!vis[j] and isConnected[i][j]==1) traverse(j,isConnected,vis);
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        int ret = 0;
        
        for(int i = 0 ; i < n ; i ++ ){
            if(vis[i] != 1){
                traverse(i,isConnected,vis);
                ret++;
            }
        }

        return ret;
    }
};