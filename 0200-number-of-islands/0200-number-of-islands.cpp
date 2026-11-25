class Solution {
public:
    void dfs(int x, int y, vector<vector<char>> &grid, vector<vector<int>> &vis){
        int n = grid.size();
        int m = grid[0].size();

        vis[x][y] = 1;
        
        for(int i = -1 ; i <= 1 ; i ++ ){
            for(int j = -1 ; j <= 1 ; j ++ ){
                if(i!=0 and j!=0) continue;

                int newx = x+i;
                int newy = y+j;
                if(newx>=0 and newx<n and newy>=0 and newy<m and grid[newx][newy]=='1' and vis[newx][newy]==0){
                    dfs(newx,newy,grid,vis);
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
                    dfs(i,j,grid,vis);
                    ret ++;
                }
            }
        }

        return ret;
    }
};