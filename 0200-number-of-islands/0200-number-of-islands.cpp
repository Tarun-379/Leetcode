class Solution {
public:
    void bfs(int x, int y, vector<vector<char>> &grid, vector<vector<int>> &vis){
        int n = grid.size();
        int m = grid[0].size();

        vis[x][y] = 1;
        queue<pair<int,int>> q;
        q.push({x,y});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = -1 ; i <= 1 ; i ++ ){
                for(int j = -1 ; j <= 1 ; j ++){
                    if(i!=0 and j!=0)continue; 
                    int nrow = row+i;
                    int ncol = col+j; 
                    if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and grid[nrow][ncol]=='1' and vis[nrow][ncol]==0){
                        q.push({nrow,ncol});
                        vis[nrow][ncol] = 1;
                    }
                }
            }

        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));

        int ret = 0;
        
        for(int i = 0 ; i < n ; i ++ ){
            for(int j = 0 ; j < m ; j ++ ){
                if(grid[i][j] == '1' and vis[i][j] == 0){
                    bfs(i,j,grid,vis);
                    ret ++;
                }
            }
        }

        return ret;
    }
};