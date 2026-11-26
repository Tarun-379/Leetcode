class Solution {
public:
    int bfs(int x, int y, vector<vector<int>> &grid, vector<vector<int>> &vis){
        int n = grid.size();
        int m = grid[0].size();

        int count = 1;
        bool bound = false;
        queue<pair<int,int>> storage;
        storage.push({x,y});

        while(!storage.empty()){
            int row = storage.front().first;
            int col = storage.front().second;
            storage.pop();
            if(row==0 or col==0 or row==n-1 or col==m-1) bound=true;

            for(int i = -1 ; i <= 1 ; i ++ ){
                for(int j = -1 ; j <= 1 ; j ++ ){
                    if(i!=0 and j!=0) continue;

                    int newr = row+i;
                    int newc = col+j;

                    if(newr>=0 and newr<n and newc>=0 and newc<m and grid[newr][newc]==1 and !vis[newr][newc]){
                        vis[newr][newc]=1;
                        count++;
                        storage.push({newr,newc});
                    }
                }
            }
        }
        if(bound) return 0;
        return count;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ret = 0;

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i = 0 ; i < n ; i ++ ){
            for(int j = 0 ; j < m ; j ++ ){
                if(!vis[i][j] and grid[i][j]==1) {
                    vis[i][j] = 1;
                    ret+=bfs(i,j,grid,vis);
                }
            }
        }

        return ret;
    }
};