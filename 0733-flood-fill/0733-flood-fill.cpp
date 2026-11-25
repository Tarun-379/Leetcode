class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        int n = image.size();
        int m = image[0].size();

        int old = image[sr][sc];
        queue<pair<int,int>> q;
        q.push({sr,sc});

        image[sr][sc]=color;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i = -1 ; i <= 1 ; i ++ ){
                for(int j = -1 ; j <= 1 ; j ++ ){
                    if(i!=0 and j!=0) continue;

                    int newx = x+i;
                    int newy = y+j;
                    if(newx>=0 and newx<n and newy>=0 and newy<m and image[newx][newy]==old ) {
                        image[newx][newy]=color;
                        q.push({newx,newy});
                    }

                }
            }
        }

        return image;
    }
};