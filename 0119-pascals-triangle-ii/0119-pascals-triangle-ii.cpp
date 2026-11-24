class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ret;
        long long curr = 1;

        for(int k = 0 ; k <= n ; k ++ ){
            ret.push_back(curr);

            curr = curr * (n-k) / (k+1);
        }

        return ret;
    }
};