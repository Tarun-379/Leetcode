class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        int n = source.size();
        if(n==0) return source[0]==target[0];

        long long Ss = 0 ,  St = 0;
        for(int i = 0 ; i < n ; i ++ ){
            Ss+=source[i];
            St+=target[i];
        }

        return Ss==St;
    }
};