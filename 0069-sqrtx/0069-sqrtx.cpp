class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        for(long long i = 0 ; i <= x ; i ++ ){
            if( (long long)i*i == x ) return i;
            else if(i*i > x) return i-1;
        }
        return 0;
    }
};