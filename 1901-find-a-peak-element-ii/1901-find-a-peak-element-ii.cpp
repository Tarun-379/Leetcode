class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int a = 0;
        int b = 0;
        for (int i = 0 ; i < mat.size() ; i ++ ){
            for (int j = 0 ; j < mat[0].size() ; j ++ ){
                if (mat[i][j] > mat[a][b]){
                    a = i;
                    b = j;
                } 
            }
        }
        return {a,b};
    }
};