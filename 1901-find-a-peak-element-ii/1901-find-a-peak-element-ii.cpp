class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid1 = low + (high-low)/2;
            int mid2 = 0;
            for(int j = 0 ; j < m ; j++ ){
                if (mat[mid1][mid2]<mat[mid1][j]) mid2 = j;
            }
            if((mid1==0 or mat[mid1][mid2]>mat[mid1-1][mid2]) and (mid1==n-1 or mat[mid1][mid2]>mat[mid1+1][mid2])) return {mid1,mid2};
            else if (mid1==n-1 or mat[mid1][mid2]<mat[mid1+1][mid2]) low = mid1+1;
            else high = mid1-1;
        }
        return {-1,-1};
    }
};