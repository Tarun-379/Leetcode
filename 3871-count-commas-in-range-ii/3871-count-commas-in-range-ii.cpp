class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long ret = 0;
        long long block = 1000;
        while(block<=n){
            ret+=n-block+1;
            block*=1000;
        }
        return ret;
    }
};