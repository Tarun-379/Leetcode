class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        for (int i = 0 ; i < mat.size() ; i ++ ){
            for (int j = 0 ; j < mat[0].size() ; j ++ ){
                if (j>0) if(mat[i][j] < mat[i][j-1]) continue;
                if (i>0) if(mat[i][j] < mat[i-1][j]) continue;
                if (j!=mat[0].size()-1) if(mat[i][j] < mat[i][j+1]) continue;
                if (i!=mat.size()-1) if(mat[i][j] < mat[i+1][j]) continue;
                return {i,j};
            }
        }
        return {-1,-1};
    }
};