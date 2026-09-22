class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret;
        for(int i = 0 ; i <= n ; i ++ ){
            int temp = i;
            int count = 0;
            while(temp){
                count+=temp&1;
                temp>>=1;
            }
            ret.push_back(count);
        }
        return ret;
    }
};