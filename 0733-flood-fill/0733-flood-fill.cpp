class Solution {
public:
    void dfs(int x, int y, vector<vector<int>> &image, int color, vector<vector<int>> &vis){
        int n = image.size();
        int m = image[0].size();
        vis[x][y]=1;

        for(int i = -1 ; i <= 1 ; i ++ ){
            for(int j = -1 ; j <= 1 ; j ++ ){
                if(i!=0 and j!=0) continue;

                int newx = x+i;
                int newy = y+j;
                if(newx>=0 and newx<n and newy>=0 and newy<m and image[newx][newy]==image[x][y] and !vis[newx][newy]) dfs(newx,newy,image,color,vis);
            }
        }

        image[x][y] = color;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));

        dfs(sr,sc,image,color,vis);

        return image;
    }
};