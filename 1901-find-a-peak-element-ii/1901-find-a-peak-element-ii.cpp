class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int i = 0;
        int j = 0;
        while(1){
            if(i!=0 and mat[i][j] < mat[i-1][j]){
                i--;
                continue;
            }
            if(i!=mat.size()-1 and mat[i][j] < mat[i+1][j]){
                i++;
                continue;
            }
            if(j!=0 and mat[i][j] < mat[i][j-1]){
                j--;
                continue;
            }
            if(j!=mat[0].size()-1 and mat[i][j] < mat[i][j+1]){
                j++;
                continue;
            }

            return {i,j};
        }
        return {i,j};
    }
};