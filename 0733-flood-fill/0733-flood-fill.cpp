class Solution {
public:
    void dfs(int x, int y, vector<vector<int>> &image, int old, int color){
        int n = image.size();
        int m = image[0].size();
        image[x][y] = color;

        for(int i = -1 ; i <= 1 ; i ++ ){
            for(int j = -1 ; j <= 1 ; j ++ ){
                if(i!=0 and j!=0) continue;

                int newx = x+i;
                int newy = y+j;
                if(newx>=0 and newx<n and newy>=0 and newy<m and image[newx][newy]==old ) dfs(newx,newy,image,old,color);
            }
        }

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;

        int old = image[sr][sc];
        dfs(sr,sc,image,old,color);

        return image;
    }
};