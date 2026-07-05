class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> peaks;
        for(int i = 0 ; i < mountain.size() ; i ++ ){
            if (i==0 or mountain[i] <= mountain[i-1]) continue;
            if (i==mountain.size()-1 or mountain[i] <= mountain[i+1]) continue;
            peaks.push_back(i);
        }
        return peaks;
    }
};