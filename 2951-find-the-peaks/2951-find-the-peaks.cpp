class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peaks;
        int n = mountain.size();
        for(int i = 0 ; i < n ; i ++ ){
            if (i==0 or mountain[i] <= mountain[i-1]) continue;
            if (i==n-1 or mountain[i] <= mountain[i+1]) continue;
            peaks.push_back(i);
        }
        return peaks;
    }
};